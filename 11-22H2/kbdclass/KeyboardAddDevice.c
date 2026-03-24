/*
 * XREFs of KeyboardAddDevice @ 0x1C000D940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002E40 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C0003240 (memmove.c)
 *     KeyboardAddDeviceEx @ 0x1C000DBB0 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DDB0 (KbdCreateClassObject.c)
 */

__int64 __fastcall KeyboardAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  int v3; // r15d
  __int64 result; // rax
  __int64 v6; // rbx
  PDEVICE_OBJECT v7; // rax
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned int *Pool2; // rdi
  NTSTATUS v12; // esi
  NTSTATUS v13; // eax
  PVOID v14; // rdi
  unsigned int v15; // esi
  _DWORD *ErrorLogEntry; // rax
  unsigned int v17; // eax
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+48h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  v3 = 0;
  v22 = 0;
  result = KbdCreateClassObject(IoObject, 0);
  if ( (int)result >= 0 )
  {
    v6 = MEMORY[0x40];
    v7 = IoAttachDeviceToDeviceStack(0LL, PhysicalDeviceObject);
    *(_QWORD *)(v6 + 16) = v7;
    if ( v7 )
    {
      *(_QWORD *)(v6 + 24) = PhysicalDeviceObject;
      *(_WORD *)(v6 + 64) = 1;
      *(_DWORD *)(v6 + 188) = 1;
      *(_DWORD *)(v6 + 192) = 1;
      PoSetPowerState(0LL, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(v6 + 284) = 0LL;
      *(_BYTE *)(v6 + 362) = 0;
      *(_QWORD *)(v6 + 296) = 0LL;
      *(_BYTE *)(v6 + 304) = 0;
      *(_QWORD *)(v6 + 312) = 0LL;
      *(_DWORD *)(v6 + 320) = 0;
      *(_BYTE *)(v6 + 66) = 0;
      *(_QWORD *)(v6 + 368) = 0LL;
      *(_DWORD *)(v6 + 376) = 0;
      v8 = IoOpenDriverRegistryKey(IoObject, 0LL, 131097LL, 0LL);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 15, (unsigned int)&KeyHandle, v8);
        }
      }
      else
      {
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"AllowDisable");
        if ( (unsigned int)DestinationString.MaximumLength + 28 < (unsigned int)DestinationString.MaximumLength + 24 )
        {
          Length = -1;
        }
        else
        {
          Length = DestinationString.MaximumLength + 28;
          Pool2 = (unsigned int *)ExAllocatePool2(256LL, Length, 1130652235LL);
          if ( Pool2 )
          {
            v12 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, Pool2, Length, &Length);
            if ( v12 >= 0 )
            {
              v17 = Pool2[3];
              if ( v17 > 4 )
              {
                v12 = -1073741789;
              }
              else
              {
                memmove(&v22, (char *)Pool2 + Pool2[2], v17);
                v3 = v22;
              }
            }
            ExFreePoolWithTag(Pool2, 0);
          }
          else
          {
            v12 = -1073741801;
          }
          if ( v12 >= 0 )
            *(_BYTE *)(v6 + 66) = v3 != 0;
        }
        ZwClose(KeyHandle);
      }
      MEMORY[0x30] |= 0x2000u;
      MEMORY[0x30] &= ~0x80u;
      v13 = IoRegisterDeviceInterface(
              PhysicalDeviceObject,
              &GUID_DEVINTERFACE_KEYBOARD,
              0LL,
              (PUNICODE_STRING)(v6 + 88));
      v14 = P;
      v15 = v13;
      if ( v13 < 0 )
      {
        IoDetachDevice(*(PDEVICE_OBJECT *)(v6 + 16));
        *(_QWORD *)(v6 + 16) = 0LL;
        IoDeleteDevice(0LL);
      }
      else
      {
        v15 = KeyboardAddDeviceEx(v6, P, 0LL);
      }
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      return v15;
    }
    else
    {
      ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, 0x30u);
      if ( ErrorLogEntry )
      {
        ErrorLogEntry[3] = -1073414129;
        *ErrorLogEntry = 0;
        *((_QWORD *)ErrorLogEntry + 3) = 0LL;
        ErrorLogEntry[4] = 0;
        ErrorLogEntry[5] = -1073741667;
        IoWriteErrorLogEntry(ErrorLogEntry);
      }
      IoDeleteDevice(0LL);
      return 3221225629LL;
    }
  }
  return result;
}
