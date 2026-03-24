/*
 * XREFs of DriverEntry @ 0x1C000F2D0
 * Callers:
 *     GsDriverEntry @ 0x1C000F010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00027A0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0002D60 (__security_check_cookie.c)
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     memset @ 0x1C0003200 (memset.c)
 *     MouseClassLogError @ 0x1C0004D88 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00059CC (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000C6E0 (MouseAddDeviceEx.c)
 *     MouDeterminePortsServiced @ 0x1C000C910 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000CA40 (MouCreateClassObject.c)
 *     WppInitKm @ 0x1C000D230 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000D2F0 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000E5AC (WppCleanupKm.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v2; // r14
  __int64 v5; // rdx
  void *Pool2; // rax
  __int64 v7; // rdx
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 *v15; // rax
  int i; // edi
  __int64 v17; // rdx
  int v19; // eax
  PVOID v20; // rdi
  const WCHAR *v21; // rdx
  _BYTE *DeviceExtension; // rcx
  int v23; // eax
  int v24; // edx
  int v25; // r8d
  void *v26; // rcx
  int v27; // eax
  char *v28; // rsi
  void *v29; // rcx
  const WCHAR *v30; // rdx
  int v31; // r15d
  void *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rsi
  REGHANDLE v35; // rcx
  char v36[4]; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v39; // [rsp+58h] [rbp-A8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  GUID ProviderId; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v44[512]; // [rsp+A0h] [rbp-60h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v39 = 0LL;
  v38 = 0;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v2 = 0LL;
  DestinationString = 0LL;
  P[0] = 0LL;
  FileObject = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MouClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
  }
  ProviderId = (GUID)*((_OWORD *)EventInformation - 1);
  if ( RegHandle )
    __fastfail(5u);
  xmmword_1C0009038 = 0LL;
  if ( !EtwRegister(&ProviderId, (PETWENABLECALLBACK)tlgEnableCallback, &dword_1C0009010, &RegHandle) )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3E0uLL);
  qword_1C0009528 = (__int64)&qword_1C0009520;
  qword_1C0009520 = (__int64)&qword_1C0009520;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&stru_1C0009310.Length = 0x2000000;
  stru_1C0009310.Buffer = (PWSTR)&unk_1C0009320;
  memset(v44, 0, sizeof(v44));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v44;
  word_1C0009300 = RegistryPath->Length;
  word_1C0009302 = RegistryPath->Length + 2;
  Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)word_1C0009302, 1131769677LL);
  ::P = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, RegistryPath->Buffer, RegistryPath->Length);
    *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
    MouConfiguration((__int64)DriverObject);
    if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    {
      v19 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v39, (PWSTR *)P, 1);
      i = v19;
      if ( v19 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v11, v10, 12, *(_DWORD *)v36, v19);
        }
        v2 = P[0];
        goto LABEL_20;
      }
      v20 = P[0];
      v21 = (const WCHAR *)P[0];
      DeviceExtension = v39->DeviceExtension;
      *(_QWORD *)DeviceExtension = v39;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
      DeviceExtension[64] = 0;
      v23 = MouseAddDeviceEx((__int64)DeviceExtension, v21, 0LL);
      if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = 2;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v24, v25, 13, *(_DWORD *)v36, v23);
      }
      ExFreePoolWithTag(v20, 0);
      P[0] = 0LL;
      v39->Flags &= ~0x80u;
    }
    RtlCopyUnicodeString(&Destination, &stru_1C0009310);
    Destination.Length -= 10;
    RtlAppendUnicodeToString(&Destination, L"Port");
    v8 = MouDeterminePortsServiced(&Destination.Length, &v38);
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 14, *(_DWORD *)v36, v8);
    }
    LODWORD(v11) = Destination.Length;
    if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
    {
      i = -1073741823;
    }
    else
    {
      v12 = (unsigned __int64)Destination.Length >> 1;
      Destination.Buffer[v12 + 1] = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v10, 15, *(_DWORD *)v36, v38);
      }
      DestinationString.MaximumLength = Destination.Length + 24;
      DestinationString.Buffer = (PWSTR)ExAllocatePool2(
                                          256LL,
                                          (unsigned __int16)(Destination.Length + 24),
                                          1131769677LL);
      if ( !DestinationString.Buffer )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v13, 1LL);
        }
        i = -1073741823;
        LODWORD(P[0]) = DestinationString.MaximumLength;
        MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
        DestinationString.MaximumLength = 0;
        goto LABEL_49;
      }
      RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
      RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
      RtlAppendUnicodeToString(&DestinationString, L"0");
      LODWORD(v11) = DestinationString.Length;
      if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
      {
        i = -1073741823;
      }
      else
      {
        v14 = 0;
        v11 = (unsigned __int64)DestinationString.Length >> 1;
        for ( DestinationString.Buffer[v11 + 1] = 0; v14 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++v14 )
        {
          if ( v14 >= v38 )
            break;
          DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v14 + 48;
          v27 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v39, (PWSTR *)P, 1);
          if ( v27 >= 0 )
          {
            v28 = (char *)v39->DeviceExtension;
            *(_QWORD *)v28 = v39;
            v28[64] = 0;
            v39->Flags &= ~0x80u;
            if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v28 + 2) )
            {
              v29 = (void *)*((_QWORD *)v28 + 13);
              if ( v29 )
              {
                ExFreePoolWithTag(v29, 0);
                *((_QWORD *)v28 + 15) = 0LL;
                *((_QWORD *)v28 + 14) = 0LL;
                *((_QWORD *)v28 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v28);
              v2 = P[0];
            }
            else
            {
              v2 = P[0];
              v30 = (const WCHAR *)P[0];
              v39->StackSize = *(_BYTE *)(*((_QWORD *)v28 + 2) + 76LL) + 1;
              v31 = MouseAddDeviceEx((__int64)v28, v30, (__int64)FileObject);
              if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                *((_QWORD *)v28 + 42) = FileObject;
              if ( v2 )
              {
                ExFreePoolWithTag(v2, 0);
                v2 = 0LL;
                P[0] = 0LL;
              }
              if ( v31 >= 0 )
              {
                v33 = (_QWORD *)qword_1C0009528;
                v34 = v28 + 320;
                if ( *(__int64 **)qword_1C0009528 != &qword_1C0009520 )
                  __fastfail(3u);
                *v34 = &qword_1C0009520;
                v34[1] = v33;
                *v33 = v34;
                qword_1C0009528 = (__int64)v34;
              }
              else
              {
                if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                {
                  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                  FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                             + 3 * *((unsigned int *)v28 + 45));
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v28 + 45)) = 0LL;
                  *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v28 + 45) + 19) = 1;
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v28 + 45) + 1) = 0LL;
                  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                }
                else if ( *((_QWORD *)v28 + 42) )
                {
                  FileObject = (PFILE_OBJECT)*((_QWORD *)v28 + 42);
                  *((_QWORD *)v28 + 42) = 0LL;
                }
                if ( FileObject )
                  ObfDereferenceObject(FileObject);
                v32 = (void *)*((_QWORD *)v28 + 13);
                if ( v32 )
                {
                  ExFreePoolWithTag(v32, 0);
                  *((_QWORD *)v28 + 15) = 0LL;
                  *((_QWORD *)v28 + 14) = 0LL;
                  *((_QWORD *)v28 + 13) = 0LL;
                }
                IoDeleteDevice(*(PDEVICE_OBJECT *)v28);
              }
            }
          }
          else
          {
            MouseClassLogError(DriverObject, -1073414143, 20008, v27, 0, 0LL, 0);
            v2 = P[0];
          }
        }
        v15 = (__int64 *)qword_1C0009520;
        for ( i = 0; v15 != &qword_1C0009520; v15 = (__int64 *)*v15 )
          ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v7, 1LL);
    }
    i = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
  }
LABEL_20:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( i >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    i = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)MouseClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)MouseClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)MouseClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)MouseClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)MouseClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)MouseClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)MouseClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)MousePnP;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)MouseClassSystemControl;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)MouseClassPower;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)MouseAddDevice;
    goto LABEL_26;
  }
LABEL_49:
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
LABEL_26:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v11, v10, 17, *(_DWORD *)v36, i);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v17) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v17, 1LL);
      }
    }
  }
  if ( i < 0 )
  {
    v35 = RegHandle;
    RegHandle = 0LL;
    dword_1C0009010 = 0;
    EtwUnregister(v35);
    WppCleanupKm((__int64)DriverObject);
  }
  return i;
}
