/*
 * XREFs of KeyboardClassFindMorePorts @ 0x1C000D5A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0002D30 (__security_check_cookie.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     KeyboardClassLogError @ 0x1C00050A8 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000D9F0 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000DBF0 (KbdDeterminePortsServiced.c)
 *     KbdCreateClassObject @ 0x1C000DD20 (KbdCreateClassObject.c)
 */

void __fastcall KeyboardClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rdi
  __int64 v5; // rdx
  ULONG i; // ebx
  int ClassObject; // eax
  __int64 v8; // rsi
  void *v9; // rcx
  PVOID v10; // rdx
  int v11; // r14d
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  ULONG v15; // [rsp+40h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h]
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
      ClassObject = KbdCreateClassObject(DriverObject, 1);
      if ( ClassObject >= 0 )
      {
        v8 = *(_QWORD *)(v19 + 64);
        *(_QWORD *)v8 = v19;
        *(_BYTE *)(v8 + 64) = 0;
        if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)(v8 + 16)) )
        {
          v9 = *(void **)(v8 + 104);
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0);
            *(_QWORD *)(v8 + 120) = 0LL;
            *(_QWORD *)(v8 + 112) = 0LL;
            *(_QWORD *)(v8 + 104) = 0LL;
          }
          IoDeleteDevice(*(PDEVICE_OBJECT *)v8);
          v4 = P[0];
        }
        else
        {
          v4 = P[0];
          v10 = P[0];
          *(_BYTE *)(v19 + 76) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 76LL) + 1;
          v11 = KeyboardAddDeviceEx(v8, v10, FileObject);
          *(_DWORD *)(v19 + 48) &= ~0x80u;
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
            P[0] = 0LL;
          }
          if ( v11 >= 0 )
          {
            v13 = (_QWORD *)qword_1C000A550;
            v14 = (_QWORD *)(v8 + 336);
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
                                         + 3 * *(unsigned int *)(v8 + 196));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v8 + 196)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v8 + 196) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v8 + 196) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *(_QWORD *)(v8 + 352) )
            {
              FileObject = *(PFILE_OBJECT *)(v8 + 352);
              *(_QWORD *)(v8 + 352) = 0LL;
            }
            if ( FileObject )
              ObfDereferenceObject(FileObject);
            v12 = *(void **)(v8 + 104);
            if ( v12 )
            {
              ExFreePoolWithTag(v12, 0);
              *(_QWORD *)(v8 + 120) = 0LL;
              *(_QWORD *)(v8 + 112) = 0LL;
              *(_QWORD *)(v8 + 104) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v8);
          }
        }
      }
      else
      {
        KeyboardClassLogError(DriverObject, -1073414143, 10008, ClassObject, 0, 0LL, 0);
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
