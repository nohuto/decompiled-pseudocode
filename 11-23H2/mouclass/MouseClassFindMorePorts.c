/*
 * XREFs of MouseClassFindMorePorts @ 0x1C000DD10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00029B0 (__security_check_cookie.c)
 *     memset @ 0x1C0002F00 (memset.c)
 *     MouseClassLogError @ 0x1C0004BA8 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000D540 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000D790 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000DAE0 (MouDeterminePortsServiced.c)
 */

void __fastcall MouseClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rsi
  ULONG NumberOfMapRegisters; // ebx
  int i; // edi
  int v7; // eax
  char *DeviceExtension; // r14
  void *v9; // rcx
  const WCHAR *v10; // rdx
  int v11; // r15d
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
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
  RtlCopyUnicodeString(&DestinationString, &::DestinationString);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  RtlInitUnicodeString(&Destination, 0LL);
  Destination.MaximumLength = DestinationString.Length + 20;
  Destination.Buffer = (PWSTR)ExAllocatePool2(256LL, (unsigned __int16)(DestinationString.Length + 20), 1131769677LL);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(&Destination, L"\\Device\\");
    RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
    RtlAppendUnicodeToString(&Destination, L"0");
    MouDeterminePortsServiced(&DestinationString.Length, &v15);
    NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
    for ( i = 0; NumberOfMapRegisters < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++NumberOfMapRegisters )
    {
      if ( NumberOfMapRegisters >= v15 )
        break;
      Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = NumberOfMapRegisters + 48;
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        P[0] = 0LL;
      }
      v7 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v19, (PWSTR *)P, 1);
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
          v11 = MouseAddDeviceEx((__int64)DeviceExtension, v10, (__int64)FileObject);
          v19->Flags &= ~0x80u;
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
            P[0] = 0LL;
          }
          if ( v11 >= 0 )
          {
            v13 = (_QWORD *)qword_1C000A528;
            v14 = DeviceExtension + 320;
            if ( *(__int64 **)qword_1C000A528 != &qword_1C000A520 )
              __fastfail(3u);
            *v14 = &qword_1C000A520;
            ++i;
            v14[1] = v13;
            *v13 = v14;
            qword_1C000A528 = (__int64)v14;
          }
          else
          {
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                         + 3 * *((unsigned int *)DeviceExtension + 45));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)DeviceExtension + 45)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)DeviceExtension + 45) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)DeviceExtension + 45) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *((_QWORD *)DeviceExtension + 42) )
            {
              FileObject = (PFILE_OBJECT)*((_QWORD *)DeviceExtension + 42);
              *((_QWORD *)DeviceExtension + 42) = 0LL;
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
        MouseClassLogError(DriverObject, -1073414143, 20008, v7, 0, 0LL, 0);
        v4 = P[0];
      }
    }
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters += i;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 2LL, 2LL);
    LODWORD(P[0]) = Destination.MaximumLength;
    MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
