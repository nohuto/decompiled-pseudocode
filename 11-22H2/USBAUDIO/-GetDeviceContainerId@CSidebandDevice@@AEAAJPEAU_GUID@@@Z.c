/*
 * XREFs of ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000D220
 * Callers:
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00136C0 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0005BE8 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C0012BA8 (WPP_RECORDER_AND_TRACE_SF_s.c)
 */

__int64 __fastcall CSidebandDevice::GetDeviceContainerId(CSidebandDevice *this, struct _GUID *a2)
{
  __int64 Pool2; // rax
  unsigned __int64 v5; // r8
  void *v6; // rsi
  NTSTATUS DeviceProperty; // edi
  bool v8; // bl
  int v9; // edx
  char v10; // bl
  unsigned __int64 v11; // rcx
  int v12; // edx
  _WORD *v13; // rdx
  char *v14; // rdi
  __int16 v15; // ax
  _WORD *v16; // rax
  __int64 v17; // rcx
  PDEVICE_OBJECT v18; // rcx
  PVOID DeviceExtension; // r9
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  int v21; // edx
  int ResultLength; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  ULONG v25; // [rsp+90h] [rbp+18h] BYREF

  v25 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-0000-000000000000}");
  Pool2 = ExAllocatePool2(64LL, DestinationString.MaximumLength, 878868549LL);
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    v10 = 1;
    v11 = (unsigned __int64)DestinationString.MaximumLength >> 1;
    if ( v11 )
    {
      v13 = (_WORD *)Pool2;
      v5 = 2147483646 - v11;
      v14 = (char *)L"{00000000-0000-0000-0000-000000000000}" - Pool2;
      do
      {
        if ( !(v5 + v11) )
          break;
        v15 = *(_WORD *)((char *)v13 + (_QWORD)v14);
        if ( !v15 )
          break;
        *v13++ = v15;
        --v11;
      }
      while ( v11 );
      v16 = v13 - 1;
      if ( v11 )
        v16 = v13;
      v17 = -(__int64)v11;
      DeviceProperty = v17 == 0 ? 0x80000005 : 0;
      *v16 = 0;
      v12 = DeviceProperty;
      if ( v17 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           *(PDEVICE_OBJECT *)(*((_QWORD *)this + 4) + 32LL),
                           DevicePropertyContainerID,
                           DestinationString.MaximumLength,
                           v6,
                           &v25);
        if ( DeviceProperty < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v10 = 0;
          }
          LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_50;
          DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
          AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
          goto LABEL_26;
        }
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v6);
        DeviceProperty = RtlGUIDFromString(&DestinationString, a2);
        if ( DeviceProperty >= 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
          {
            v10 = 0;
          }
          if ( v10 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = v10;
            LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_s(
              WPP_GLOBAL_Control->AttachedDevice,
              v21,
              v5,
              WPP_GLOBAL_Control->DeviceExtension,
              ResultLength);
          }
          goto LABEL_50;
        }
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v10 = 0;
        }
        LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        {
LABEL_50:
          ExFreePool(v6);
          return (unsigned int)DeviceProperty;
        }
        v12 = 31;
LABEL_25:
        DeviceExtension = v18->DeviceExtension;
        AttachedDevice = v18->AttachedDevice;
LABEL_26:
        LOBYTE(v12) = v10;
        WPP_RECORDER_AND_TRACE_SF_d((_DWORD)AttachedDevice, v12, v5, (_DWORD)DeviceExtension);
        goto LABEL_50;
      }
    }
    else
    {
      DeviceProperty = -1073741811;
      v12 = -1073741811;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v10 = 0;
    }
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    goto LABEL_25;
  }
  DeviceProperty = -1073741664;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = 28;
    LOBYTE(v9) = v8;
    LOBYTE(v5) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v9, v5, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)DeviceProperty;
}
