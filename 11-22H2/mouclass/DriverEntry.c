/*
 * XREFs of DriverEntry @ 0x1C00112E0
 * Callers:
 *     GsDriverEntry @ 0x1C0011010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00024A0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00029B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0002C00 (memmove.c)
 *     memset @ 0x1C0002F00 (memset.c)
 *     MouseClassLogError @ 0x1C0004BA8 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005CCC (WPP_RECORDER_SF_.c)
 *     MouseAddDeviceEx @ 0x1C000D540 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000D790 (MouCreateClassObject.c)
 *     MouDeterminePortsServiced @ 0x1C000DAE0 (MouDeterminePortsServiced.c)
 *     WppInitKm @ 0x1C000DFB0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C000E070 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C000F570 (WppCleanupKm.c)
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v2; // r14
  __int64 v5; // rdx
  void *Pool2; // rax
  __int64 v7; // rdx
  const wchar_t *v8; // rdx
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 *v16; // rax
  int i; // edi
  __int64 v18; // rdx
  int v20; // eax
  PVOID v21; // rdi
  const WCHAR *v22; // rdx
  _BYTE *DeviceExtension; // rcx
  int v24; // eax
  int v25; // edx
  int v26; // r8d
  void *v27; // rcx
  int v28; // eax
  char *v29; // rsi
  void *v30; // rcx
  const WCHAR *v31; // rdx
  int v32; // r12d
  void *v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rsi
  REGHANDLE v36; // rcx
  char v37[4]; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v40; // [rsp+58h] [rbp-A8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  GUID ProviderId; // [rsp+78h] [rbp-88h] BYREF
  PVOID P[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v45[512]; // [rsp+A0h] [rbp-60h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v40 = 0LL;
  v39 = 0;
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
  xmmword_1C000A038 = 0LL;
  if ( !EtwRegister(&ProviderId, (PETWENABLECALLBACK)tlgEnableCallback, &dword_1C000A010, &RegHandle) )
    EtwSetInformation(RegHandle, EventProviderSetTraits, EventInformation, *(unsigned __int16 *)EventInformation);
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3E0uLL);
  qword_1C000A528 = (__int64)&qword_1C000A520;
  qword_1C000A520 = (__int64)&qword_1C000A520;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C000A320;
  memset(v45, 0, sizeof(v45));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v45;
  word_1C000A300 = RegistryPath->Length;
  word_1C000A302 = RegistryPath->Length + 2;
  Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)word_1C000A302, 1131769677LL);
  ::P = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, RegistryPath->Buffer, RegistryPath->Length);
    *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
    MouConfiguration((__int64)DriverObject, v8);
    if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
    {
      v20 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v40, (PWSTR *)P, 1);
      i = v20;
      if ( v20 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v11, 12, *(_DWORD *)v37, v20);
        }
        v2 = P[0];
        goto LABEL_20;
      }
      v21 = P[0];
      v22 = (const WCHAR *)P[0];
      DeviceExtension = v40->DeviceExtension;
      *(_QWORD *)DeviceExtension = v40;
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = DeviceExtension;
      DeviceExtension[64] = 0;
      v24 = MouseAddDeviceEx((__int64)DeviceExtension, v22, 0LL);
      if ( v24 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v25, v26, 13, *(_DWORD *)v37, v24);
      }
      ExFreePoolWithTag(v21, 0);
      P[0] = 0LL;
      v40->Flags &= ~0x80u;
    }
    RtlCopyUnicodeString(&Destination, &::DestinationString);
    Destination.Length -= 10;
    RtlAppendUnicodeToString(&Destination, L"Port");
    v9 = MouDeterminePortsServiced(&Destination.Length, &v39);
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v10, v11, 14, *(_DWORD *)v37, v9);
    }
    LODWORD(v12) = Destination.Length;
    if ( Destination.MaximumLength < (unsigned __int64)Destination.Length + 2 )
    {
      i = -1073741823;
    }
    else
    {
      v13 = (unsigned __int64)Destination.Length >> 1;
      Destination.Buffer[v13 + 1] = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v13, v11, 15, *(_DWORD *)v37, v39);
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
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 1LL);
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
      LODWORD(v12) = DestinationString.Length;
      if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
      {
        i = -1073741823;
      }
      else
      {
        v15 = 0;
        v12 = (unsigned __int64)DestinationString.Length >> 1;
        for ( DestinationString.Buffer[v12 + 1] = 0; v15 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++v15 )
        {
          if ( v15 >= v39 )
            break;
          DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v15 + 48;
          v28 = MouCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.DeviceQueue.32, &v40, (PWSTR *)P, 1);
          if ( v28 >= 0 )
          {
            v29 = (char *)v40->DeviceExtension;
            *(_QWORD *)v29 = v40;
            v29[64] = 0;
            v40->Flags &= ~0x80u;
            if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v29 + 2) )
            {
              v30 = (void *)*((_QWORD *)v29 + 13);
              if ( v30 )
              {
                ExFreePoolWithTag(v30, 0);
                *((_QWORD *)v29 + 15) = 0LL;
                *((_QWORD *)v29 + 14) = 0LL;
                *((_QWORD *)v29 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v29);
              v2 = P[0];
            }
            else
            {
              v2 = P[0];
              v31 = (const WCHAR *)P[0];
              v40->StackSize = *(_BYTE *)(*((_QWORD *)v29 + 2) + 76LL) + 1;
              v32 = MouseAddDeviceEx((__int64)v29, v31, (__int64)FileObject);
              if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                *((_QWORD *)v29 + 42) = FileObject;
              if ( v2 )
              {
                ExFreePoolWithTag(v2, 0);
                v2 = 0LL;
                P[0] = 0LL;
              }
              if ( v32 >= 0 )
              {
                v34 = (_QWORD *)qword_1C000A528;
                v35 = v29 + 320;
                if ( *(__int64 **)qword_1C000A528 != &qword_1C000A520 )
                  __fastfail(3u);
                *v35 = &qword_1C000A520;
                v35[1] = v34;
                *v34 = v35;
                qword_1C000A528 = (__int64)v35;
              }
              else
              {
                if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
                {
                  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                  FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                             + 3 * *((unsigned int *)v29 + 45));
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v29 + 45)) = 0LL;
                  *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v29 + 45) + 19) = 1;
                  *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v29 + 45) + 1) = 0LL;
                  ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                }
                else if ( *((_QWORD *)v29 + 42) )
                {
                  FileObject = (PFILE_OBJECT)*((_QWORD *)v29 + 42);
                  *((_QWORD *)v29 + 42) = 0LL;
                }
                if ( FileObject )
                  ObfDereferenceObject(FileObject);
                v33 = (void *)*((_QWORD *)v29 + 13);
                if ( v33 )
                {
                  ExFreePoolWithTag(v33, 0);
                  *((_QWORD *)v29 + 15) = 0LL;
                  *((_QWORD *)v29 + 14) = 0LL;
                  *((_QWORD *)v29 + 13) = 0LL;
                }
                IoDeleteDevice(*(PDEVICE_OBJECT *)v29);
              }
            }
          }
          else
          {
            MouseClassLogError(DriverObject, -1073414143, 20008, v28, 0, 0LL, 0);
            v2 = P[0];
          }
        }
        v16 = (__int64 *)qword_1C000A520;
        for ( i = 0; v16 != &qword_1C000A520; v16 = (__int64 *)*v16 )
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
    v27 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
    }
    IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_26:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v11, 17, *(_DWORD *)v37, i);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v18) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v18, 1LL);
      }
    }
  }
  if ( i < 0 )
  {
    v36 = RegHandle;
    RegHandle = 0LL;
    dword_1C000A010 = 0;
    EtwUnregister(v36);
    WppCleanupKm((__int64)DriverObject);
  }
  return i;
}
