/*
 * XREFs of DriverEntry @ 0x1C0010080
 * Callers:
 *     GsDriverEntry @ 0x1C0010010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00027F0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002D30 (__security_check_cookie.c)
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     KeyboardClassLogError @ 0x1C00050A8 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061CC (WPP_RECORDER_SF_.c)
 *     KeyboardAddDeviceEx @ 0x1C000D9F0 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000DBF0 (KbdDeterminePortsServiced.c)
 *     KbdCreateClassObject @ 0x1C000DD20 (KbdCreateClassObject.c)
 *     WppInitKm @ 0x1C000E100 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000E1C0 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000FB28 (WppCleanupKm.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS j; // edi
  PVOID v3; // r14
  __int64 v6; // rdx
  void *Pool2; // rax
  __int64 v8; // rdx
  __int64 Length; // rdx
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int i; // edi
  __int64 *v14; // rax
  const WCHAR *v16; // rdx
  _BYTE *DeviceExtension; // rcx
  int v18; // eax
  char *v19; // rsi
  void *v20; // rcx
  const WCHAR *v21; // rdx
  int v22; // r15d
  void *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  void *v26; // rcx
  REGHANDLE v27; // rcx
  char v28[4]; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  PDEVICE_OBJECT v30; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  GUID ProviderId; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v36[512]; // [rsp+A0h] [rbp-60h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v30 = 0LL;
  v29 = 0;
  j = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  Destination = 0LL;
  v3 = 0LL;
  P[0] = 0LL;
  FileObject = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_KbdClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
  }
  ProviderId = (GUID)*((_OWORD *)EventInformation - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_1C000A038 = 0LL;
  if ( !EtwRegister(&ProviderId, (PETWENABLECALLBACK)tlgEnableCallback, &dword_1C000A010, &RegHandle) )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x418uLL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  qword_1C000A550 = (__int64)&qword_1C000A548;
  qword_1C000A548 = (__int64)&qword_1C000A548;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&stru_1C000A338.Length = 0x2000000;
  stru_1C000A338.Buffer = (PWSTR)&unk_1C000A348;
  memset(v36, 0, sizeof(v36));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v36;
  word_1C000A328 = RegistryPath->Length;
  word_1C000A32A = RegistryPath->Length + 2;
  Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)word_1C000A32A, 1130652235LL);
  ::P = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, RegistryPath->Buffer, RegistryPath->Length);
    *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
    KbdConfiguration(DriverObject);
    if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    {
      j = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v30, (__int64 *)P, 1);
      if ( j < 0 )
      {
        v3 = P[0];
        goto LABEL_16;
      }
      v16 = (const WCHAR *)P[0];
      DeviceExtension = v30->DeviceExtension;
      *(_QWORD *)DeviceExtension = v30;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
      DeviceExtension[64] = 0;
      KeyboardAddDeviceEx((__int64)DeviceExtension, v16, 0LL);
      ExFreePoolWithTag(P[0], 0);
      P[0] = 0LL;
      v30->Flags &= ~0x80u;
    }
    RtlCopyUnicodeString(&DestinationString, &stru_1C000A338);
    DestinationString.Length -= 10;
    RtlAppendUnicodeToString(&DestinationString, L"Port");
    Length = DestinationString.Length;
    if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
    {
      j = -1073741823;
    }
    else
    {
      DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
      KbdDeterminePortsServiced(&DestinationString.Length, &v29);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 12, *(_DWORD *)v28, v29);
      }
      RtlInitUnicodeString(&Destination, 0LL);
      Destination.MaximumLength = DestinationString.Length + 20;
      Destination.Buffer = (PWSTR)ExAllocatePool2(
                                    256LL,
                                    (unsigned __int16)(DestinationString.Length + 20),
                                    1130652235LL);
      if ( Destination.Buffer )
      {
        RtlAppendUnicodeToString(&Destination, L"\\Device\\");
        RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
        RtlAppendUnicodeToString(&Destination, L"0");
        for ( i = 0; i < *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy; ++i )
        {
          if ( i >= v29 )
            break;
          Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = i + 48;
          v18 = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, &v30, (__int64 *)P, 1);
          if ( v18 >= 0 )
          {
            v19 = (char *)v30->DeviceExtension;
            *(_QWORD *)v19 = v30;
            v19[64] = 0;
            v30->Flags &= ~0x80u;
            if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)v19 + 2) >= 0 )
            {
              v3 = P[0];
              v21 = (const WCHAR *)P[0];
              v30->StackSize = *(_BYTE *)(*((_QWORD *)v19 + 2) + 76LL) + 1;
              v22 = KeyboardAddDeviceEx((__int64)v19, v21, (__int64)FileObject);
              if ( v3 )
              {
                ExFreePoolWithTag(v3, 0);
                v3 = 0LL;
                P[0] = 0LL;
              }
              if ( v22 >= 0 )
              {
                v24 = (_QWORD *)qword_1C000A550;
                v25 = v19 + 336;
                if ( *(__int64 **)qword_1C000A550 != &qword_1C000A548 )
                  __fastfail(3u);
                *v25 = &qword_1C000A548;
                v25[1] = v24;
                *v24 = v25;
                qword_1C000A550 = (__int64)v25;
              }
              else
              {
                if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                {
                  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                  FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                             + 3 * *((unsigned int *)v19 + 49));
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v19 + 49)) = 0LL;
                  *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v19 + 49) + 19) = 1;
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v19 + 49) + 1) = 0LL;
                  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                }
                else if ( *((_QWORD *)v19 + 44) )
                {
                  FileObject = (PFILE_OBJECT)*((_QWORD *)v19 + 44);
                  *((_QWORD *)v19 + 44) = 0LL;
                }
                if ( FileObject )
                  ObfDereferenceObject(FileObject);
                v23 = (void *)*((_QWORD *)v19 + 13);
                if ( v23 )
                {
                  ExFreePoolWithTag(v23, 0);
                  *((_QWORD *)v19 + 15) = 0LL;
                  *((_QWORD *)v19 + 14) = 0LL;
                  *((_QWORD *)v19 + 13) = 0LL;
                }
                IoDeleteDevice(*(PDEVICE_OBJECT *)v19);
              }
            }
            else
            {
              v20 = (void *)*((_QWORD *)v19 + 13);
              if ( v20 )
              {
                ExFreePoolWithTag(v20, 0);
                *((_QWORD *)v19 + 15) = 0LL;
                *((_QWORD *)v19 + 14) = 0LL;
                *((_QWORD *)v19 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v19);
              v3 = P[0];
            }
          }
          else
          {
            KeyboardClassLogError(DriverEntry, -1073414143, 10008, v18, 0, 0LL, 0);
            v3 = P[0];
          }
        }
        v14 = (__int64 *)qword_1C000A548;
        for ( j = 0; v14 != &qword_1C000A548; v14 = (__int64 *)*v14 )
          ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v12, 1LL);
        }
        j = -1073741823;
        LODWORD(P[0]) = Destination.MaximumLength;
        KeyboardClassLogError(DriverObject, -1073414143, 10006, -1073741823, 1u, P, 0);
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v8, 1LL);
    }
    LODWORD(P[0]) = RegistryPath->Length + 2;
    KeyboardClassLogError(DriverObject, -1073414143, 10002, -1073741823, 1u, P, 0);
  }
LABEL_16:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( j < 0 )
  {
    if ( ::P )
    {
      ExFreePoolWithTag(::P, 0);
      ::P = 0LL;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
    {
      ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
    }
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v26 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
      if ( v26 )
      {
        ExFreePoolWithTag(v26, 0);
        *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
        *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
      }
      IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
  }
  else
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)KeyboardClassFindMorePorts, 0LL);
    j = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)KeyboardClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)KeyboardClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)KeyboardClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)KeyboardClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)KeyboardClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)KeyboardClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)KeyboardClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)KeyboardPnP;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)KeyboardClassPower;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)KeyboardClassSystemControl;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)KeyboardAddDevice;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(Length) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, Length, 1LL);
  }
  if ( j < 0 )
  {
    v27 = RegHandle;
    RegHandle = 0LL;
    dword_1C000A010 = 0;
    EtwUnregister(v27);
    WppCleanupKm((__int64)DriverObject);
  }
  return j;
}
