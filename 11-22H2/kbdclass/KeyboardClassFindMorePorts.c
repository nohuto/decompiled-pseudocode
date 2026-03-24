/*
 * XREFs of KeyboardClassFindMorePorts @ 0x1C000E0D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0003010 (__security_check_cookie.c)
 *     memset @ 0x1C0003540 (memset.c)
 *     KeyboardClassLogError @ 0x1C0005418 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C000652C (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000DBB0 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DDB0 (KbdCreateClassObject.c)
 *     KbdDeterminePortsServiced @ 0x1C000E370 (KbdDeterminePortsServiced.c)
 */

void __fastcall KeyboardClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rdi
  __int64 v5; // rdx
  ULONG i; // ebx
  int v7; // eax
  char *DeviceExtension; // rsi
  void *v9; // rcx
  const WCHAR *v10; // rdx
  int v11; // r14d
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  ULONG v15; // [rsp+40h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PDEVICE_OBJECT v19; // [rsp+70h] [rbp-90h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[512]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v19 = 0LL;
  v15 = 0;
  P[0] = 0LL;
  FileObject = 0LL;
  v4 = 0LL;
  Destination = 0LL;
  memset(v21, 0, sizeof(v21));
  DestinationString.Buffer = (PWSTR)v21;
  RtlCopyUnicodeString(&DestinationString, &stru_1C000A338);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  RtlInitUnicodeString(&Destination, 0LL);
  Destination.MaximumLength = DestinationString.Length + 20;
  Destination.Buffer = (PWSTR)ExAllocatePool2(256LL, (unsigned __int16)(DestinationString.Length + 20), 1130652235LL);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(&Destination, L"\\Device\\");
    RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
    RtlAppendUnicodeToString(&Destination, L"0");
    KbdDeterminePortsServiced(&DestinationString, &v15);
    for ( i = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters; i < *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy; ++i )
    {
      if ( i >= v15 )
        break;
      Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = i + 48;
      v7 = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v19, (__int64 *)P, 1);
      if ( v7 >= 0 )
      {
        DeviceExtension = (char *)v19->DeviceExtension;
        *(_QWORD *)DeviceExtension = v19;
        DeviceExtension[64] = 0;
        if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)DeviceExtension + 2) )
        {
          v9 = (void *)*((_QWORD *)DeviceExtension + 13);
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0);
            *((_QWORD *)DeviceExtension + 15) = 0LL;
            *((_QWORD *)DeviceExtension + 14) = 0LL;
            *((_QWORD *)DeviceExtension + 13) = 0LL;
          }
          IoDeleteDevice(*(PDEVICE_OBJECT *)DeviceExtension);
          v4 = P[0];
        }
        else
        {
          v4 = P[0];
          v10 = (const WCHAR *)P[0];
          v19->StackSize = *(_BYTE *)(*((_QWORD *)DeviceExtension + 2) + 76LL) + 1;
          v11 = KeyboardAddDeviceEx((__int64)DeviceExtension, v10, (__int64)FileObject);
          v19->Flags &= ~0x80u;
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
            P[0] = 0LL;
          }
          if ( v11 >= 0 )
          {
            v13 = (_QWORD *)qword_1C000A550;
            v14 = DeviceExtension + 336;
            if ( *(__int64 **)qword_1C000A550 != &qword_1C000A548 )
              __fastfail(3u);
            *v14 = &qword_1C000A548;
            v14[1] = v13;
            *v13 = v14;
            qword_1C000A550 = (__int64)v14;
          }
          else
          {
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                         + 3 * *((unsigned int *)DeviceExtension + 49));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)DeviceExtension + 49)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)DeviceExtension + 49) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)DeviceExtension + 49) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *((_QWORD *)DeviceExtension + 44) )
            {
              FileObject = (PFILE_OBJECT)*((_QWORD *)DeviceExtension + 44);
              *((_QWORD *)DeviceExtension + 44) = 0LL;
            }
            if ( FileObject )
              ObfDereferenceObject(FileObject);
            v12 = (void *)*((_QWORD *)DeviceExtension + 13);
            if ( v12 )
            {
              ExFreePoolWithTag(v12, 0);
              *((_QWORD *)DeviceExtension + 15) = 0LL;
              *((_QWORD *)DeviceExtension + 14) = 0LL;
              *((_QWORD *)DeviceExtension + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)DeviceExtension);
          }
        }
      }
      else
      {
        KeyboardClassLogError(DriverObject, -1073414143, 10008, v7, 0, 0LL, 0);
        v4 = P[0];
      }
    }
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = i;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
    }
    LODWORD(P[0]) = Destination.MaximumLength;
    KeyboardClassLogError(DriverObject, -1073414143, 10008, -1073741823, 1u, P, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
