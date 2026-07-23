/*
 * XREFs of IoInitSystemPreDrivers @ 0x140B4B914
 * Callers:
 *     IoInitSystem @ 0x140B5D6A0 (IoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     ExInitializePushLock @ 0x140223590 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x14023E520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     RtlInitializeGenericTableAvl @ 0x14031EC00 (RtlInitializeGenericTableAvl.c)
 *     HeadlessKernelAddLogEntry @ 0x14032287C (HeadlessKernelAddLogEntry.c)
 *     McGenEventRegister_EtwRegister @ 0x140374FB8 (McGenEventRegister_EtwRegister.c)
 *     IopInitializeIoRate @ 0x1403839A4 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140396854 (IopRemoveDumpCapsuleSupport.c)
 *     KeOptimizeSpecCtrlSettings @ 0x14039AD94 (KeOptimizeSpecCtrlSettings.c)
 *     IoInitializeLiveDump @ 0x1403AEE40 (IoInitializeLiveDump.c)
 *     SecureDump_PrepareForInit @ 0x1403B0564 (SecureDump_PrepareForInit.c)
 *     VslpIumPhase4Initialize @ 0x1403B0C1C (VslpIumPhase4Initialize.c)
 *     IopInitDumpCapsuleSupport @ 0x1403B3964 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1403B40A0 (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x1403B4E80 (HvlPhase2Initialize.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1403B6604 (SecureDump_ProvisionCrashDumpKey.c)
 *     ExInitializeNPagedLookasideList @ 0x1403C3470 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14041B750 (ZwOpenFile.c)
 *     KeBugCheck @ 0x14041EDC0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140554FFC (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140555040 (McTemplateK0q_EtwWriteTransfer.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x14075CF70 (NtCreateEvent.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     EtwRegister @ 0x14078DA70 (EtwRegister.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7250 (PoRegisterPowerSettingCallback.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     RtlIsStateSeparationEnabled @ 0x1407E22F0 (RtlIsStateSeparationEnabled.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 *     IoInitializeProcessor @ 0x14081FE3C (IoInitializeProcessor.c)
 *     TlgRegisterAggregateProvider @ 0x140821F8C (TlgRegisterAggregateProvider.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408220DC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     SeAuditBootConfiguration @ 0x14084088C (SeAuditBootConfiguration.c)
 *     PsLocateSystemDlls @ 0x14084D60C (PsLocateSystemDlls.c)
 *     IopInitializeTriageDumpData @ 0x14084EB90 (IopInitializeTriageDumpData.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140853DD8 (EtwTraceLeapSecondDataUpdate.c)
 *     PpPagePathAssign @ 0x140853F30 (PpPagePathAssign.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140858D60 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     EtwWriteStartScenario @ 0x14085DE40 (EtwWriteStartScenario.c)
 *     IopInitializeDumpPolicySettings @ 0x140861584 (IopInitializeDumpPolicySettings.c)
 *     IopQueryProcessorInitValues @ 0x140864284 (IopQueryProcessorInitValues.c)
 *     IopInitializeBugCheckDriverData @ 0x140865EE0 (IopInitializeBugCheckDriverData.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x140866048 (CmIsStateSeparationDevModeEnabled.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140943F9C (IopDumpTraceForceDumpDisabled.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x14094409C (IopTraceCrashDumpDisabledOnBoot.c)
 *     IopLiveDumpTraceDumpDisabledOnBoot @ 0x14094F274 (IopLiveDumpTraceDumpDisabledOnBoot.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1409E5D88 (EtwTraceLeapSecondDataParseFailure.c)
 *     WheaSelLogCheckPoint @ 0x140A07A64 (WheaSelLogCheckPoint.c)
 *     PfSnBeginBootPhase @ 0x140A87910 (PfSnBeginBootPhase.c)
 *     ExInitializeSystemLookasideList @ 0x140A8B4A8 (ExInitializeSystemLookasideList.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8EBDC (BapdRecordFirmwareBootStats.c)
 *     WMIInitialize @ 0x140B396D0 (WMIInitialize.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140B3E904 (IopInitializePlugPlayServices.c)
 *     WheaInitialize @ 0x140B490E8 (WheaInitialize.c)
 *     KseInitialize @ 0x140B495CC (KseInitialize.c)
 *     MmRegisterEtwProvider @ 0x140B4D698 (MmRegisterEtwProvider.c)
 *     SmInitSystem @ 0x140B4D6E0 (SmInitSystem.c)
 *     KeInitSystem @ 0x140B4DED4 (KeInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140B4F454 (BootApplicationPersistentDataProcess.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x140B6A794 (IopInitializePassiveInterruptServices.c)
 *     IopCreateRootDirectories @ 0x140B6CA78 (IopCreateRootDirectories.c)
 *     IopInitializeReserveIrps @ 0x140B6DDB8 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x140B6DF94 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x140B6FE8C (IopReassignSystemRoot.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B71660 (IopInitCrashDumpDuringSysInit.c)
 *     PoInitDriverServices @ 0x140B72028 (PoInitDriverServices.c)
 *     KitpInitAitSampleRate @ 0x140B721AC (KitpInitAitSampleRate.c)
 *     IopStoreArcInformation @ 0x140B72390 (IopStoreArcInformation.c)
 *     PnpMarkHalDeviceNode @ 0x140B724DC (PnpMarkHalDeviceNode.c)
 *     MmRegisterHotPatches @ 0x140B73D38 (MmRegisterHotPatches.c)
 *     IopProtectSystemPartition @ 0x140B741E8 (IopProtectSystemPartition.c)
 *     AstInitialize @ 0x140B74BD4 (AstInitialize.c)
 *     IopInitializeSessionNotifications @ 0x140B750E8 (IopInitializeSessionNotifications.c)
 *     PsInitializeSyscallProviders @ 0x140B75DE4 (PsInitializeSyscallProviders.c)
 */

char __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  __int64 v2; // rax
  int v3; // r14d
  unsigned __int64 v4; // r8
  int v5; // eax
  ULONG ActiveProcessorCount; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  bool v10; // al
  bool IsStateSeparationDevModeEnabled; // bl
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  KIRQL v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  int v26; // eax
  __int64 v27; // r8
  int v28; // ebx
  ULONG v29; // ebx
  int SystemDlls; // eax
  __int64 v31; // r8
  int inited; // eax
  __int64 v34; // r8
  _BYTE OutputBuffer[8]; // [rsp+48h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-69h] BYREF
  PVOID Object; // [rsp+60h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _QWORD v41[3]; // [rsp+A8h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-1h] BYREF
  __int128 v43; // [rsp+D0h] [rbp+Fh] BYREF
  __int128 v44; // [rsp+E0h] [rbp+1Fh]

  v41[0] = 0x1000000LL;
  v41[2] = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v41[1] = IoInitSystem_deviceNameBuffer;
  v2 = Context[30];
  DestinationString = 0LL;
  KeyHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = *(_DWORD *)(v2 + 132) & 0x80000;
  OutputBuffer[0] = 0;
  v43 = 0LL;
  v44 = 0LL;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140C5DA58 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140C5DA68 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140C5DAA8 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140C5DAB8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140C5DA88 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140C5DA98 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140C5DAE8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140C5DAF8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140C5DAC8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140C5DAD8 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  *(_OWORD *)&IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  IopIrpStackProfilerFlags = 0;
  v4 = __rdtsc() >> 4;
  v5 = 0;
  IopUniqueDriverObjectNumber = v4 % 0x64 + 10;
  if ( !IopLargeIrpStackLocations )
  {
    IopLargeIrpStackLocations = 14;
    v5 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v5 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)&v43);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SWORD3(v43),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    SDWORD1(v44),
    1819308617,
    SWORD2(v43),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v44,
    1836085833,
    SWORD1(v43),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    SHIDWORD(v43),
    1936749129,
    v43,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    SDWORD2(v44),
    543974477,
    SWORD4(v43),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&IopOplockFoExtLookasideList,
    0LL,
    0LL,
    0x200u,
    0x30uLL,
    0x7443704Fu,
    0);
  ResultLength = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v7 = 0LL;
    do
    {
      IoInitializeProcessor(KiProcessorBlock[v7], &v43);
      v7 = ResultLength + 1;
      ResultLength = v7;
    }
    while ( (unsigned int)v7 < ActiveProcessorCount );
  }
  IopErrorLogLock = 0LL;
  qword_140C5DC38 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    LODWORD(IopInitFailCode) = 1;
    return 0;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    qword_140C5DC58 = (__int64)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    IopIrpStackProfilerSampleSize = 2000;
    LODWORD(IopIrpStackProfilerDpc) = 275;
    qword_140C5DC60 = 0LL;
    qword_140C5DC78 = 0LL;
    qword_140C5DC50 = 0LL;
  }
  v8 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x60uLL);
  *v8 = 4;
  v9 = IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    v9 = 0x400000;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( v9 <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    v10 = NtQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            IoInitSystem_valueBuffer,
            0x20u,
            &ResultLength) < 0
       || dword_140D818BC != 4
       || dword_140D818C4 == 4;
    IopErrorLogDisabledThisBoot = v10;
    ObCloseHandle(KeyHandle, 0);
  }
  *(_QWORD *)&IopTimer.Header.Lock = 9LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  IopTimerLock = 0LL;
  IopTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopTimerDispatch;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DeferredContext = &IopTimerCount;
  IopTimer.Header.WaitListHead.Blink = &IopTimer.Header.WaitListHead;
  IopTimer.Header.WaitListHead.Flink = &IopTimer.Header.WaitListHead;
  qword_140C5DDA8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140C5DD28 = (__int64)&qword_140C5DD20;
  qword_140C5DD20 = (__int64)&qword_140C5DD20;
  qword_140C5DD48 = (__int64)&qword_140C5DD40;
  qword_140C5DD40 = (__int64)&qword_140C5DD40;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  qword_140C5DDE8 = (__int64)&qword_140C5DDE0;
  qword_140C5DDE0 = &qword_140C5DDE0;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  IopTimer.Period = 0;
  IopTimer.Processor = 0;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140C5DD30 = 0LL;
  byte_140C5DD38 = 5;
  byte_140C5DD3A = 8;
  dword_140C5DD3C = 0;
  dword_140C5DD50 = 0x7FFFFFFF;
  byte_140C5DD58 = 0;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140C5DDF0[0] = 0LL;
  byte_140C5DE18 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    HeadlessKernelAddLogEntry();
    return 0;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140C5DE60.Header.WaitListHead.Blink = &stru_140C5DE60.Header.WaitListHead;
  stru_140C5DE60.Header.WaitListHead.Flink = &stru_140C5DE60.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140C5DE60.Header.Lock) = 0;
  stru_140C5DE60.Header.Size = 6;
  stru_140C5DE60.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 3;
    return 0;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
  {
    LODWORD(IopInitFailCode) = 15;
    return 0;
  }
  if ( IopInitializePlugPlayServices((__int64)Context, 0LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 4;
    return 0;
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_140C02140[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0, (__int64)Context) )
    return 0;
  if ( v3 )
    WheaSelLogCheckPoint();
  IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled();
  LOBYTE(v12) = RtlIsStateSeparationEnabled();
  LOBYTE(v13) = IsStateSeparationDevModeEnabled;
  v14 = ExpInitializeStateSeparationPhase0(v12, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741637 )
    return 0;
  if ( (int)AstInitialize() < 0 )
  {
    LODWORD(IopInitFailCode) = 17;
    return 0;
  }
  EtwInitialize(1u, (__int64)Context);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
  {
    LODWORD(IopInitFailCode) = 16;
    return 0;
  }
  if ( McGenEventRegister_EtwRegister((const GUID *)IoMgrProvider, v15, IoMgrProvider_Context, IoMgrProvider_Context) < 0 )
  {
    LODWORD(IopInitFailCode) = 11;
    return 0;
  }
  if ( (int)MmRegisterEtwProvider() < 0 )
  {
    LODWORD(IopInitFailCode) = 22;
    return 0;
  }
  EtwRegister(&DumpProvGuid, (PETWENABLECALLBACK)IopDumpTracingControlCallback, 0LL, &IopDumpEtwRegHandle);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C062A8, 0LL, 0LL);
  IopInitializeDumpPolicySettings(1);
  TlgRegisterAggregateProvider(&dword_140C03838);
  SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2880LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext, v16);
  KeInitSystem(2LL);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
    {
      IopErrorLogSessionPending = 0;
    }
    else
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v18);
  }
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v17, 0);
  WheaInitialize((__int64)Context, 0);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( (int)IopStoreArcInformation(Context) < 0 )
    return 0;
  if ( IopInitializePlugPlayServices((__int64)Context, 1LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 5;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    &IoStatusBlockRangeTable,
    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
    0LL);
  IoStatusBlockRangeTableLock.Count = 1;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Owner = 0LL;
  IoStatusBlockRangeTableLock.Contention = 0;
  LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
  IoStatusBlockRangeTableLock.Event.Header.Size = 6;
  IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
  KitpInitAitSampleRate(Context);
  if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
    KitEtwHandle = 0LL;
  KseInitialize((__int64)Context, 1);
  if ( HvlPhase2Initialize((__int64)Context, v19, v20, v21) < 0 )
    return 0;
  if ( v3 )
    WheaSelLogCheckPoint();
  KeOptimizeSpecCtrlSettings();
  PsInitializeSyscallProviders();
  VslpIumPhase4Initialize();
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( PnpEtwHandle )
    EtwWriteStartScenario(
      (ULONG_PTR *)PnpEtwHandle,
      &KMPnPEvt_DriverInitPhase_Start,
      &PnpDriverInitPhaseActivityId,
      0,
      0LL);
  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_140C5D3A8 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v22, OutputBuffer);
  if ( ForceDumpDisabled || OutputBuffer[0] || !AllowCrashDump )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v24, v23);
  PsAltSystemCallRegistrationLock = 0LL;
  PsAltSystemCallHandlers[0] = (__int64)PsPicoAltSystemCallDispatch;
  IopReportBugCheckProgress = (__int64)HalSetEnvironmentVariableEx;
  if ( (Context[33] & 2) != 0 )
    IopReportBugCheckProgress = (__int64)VslReportBugCheckProgress;
  if ( (*(_DWORD *)(Context[30] + 132LL) & 0x100000) != 0 )
  {
    if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
      McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
    inited = IopInitCrashDumpDuringSysInit(Context);
    if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
      McTemplateK0q_EtwWriteTransfer(
        IoMgrProvider_Context,
        (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop,
        v34,
        inited);
  }
  if ( !(unsigned int)IopInitializeBootDrivers((__int64)Context) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 6;
    return 0;
  }
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStart);
  v25 = MmRegisterHotPatches(Context);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 8) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)LoadBootHotPatchesStop);
  if ( v25 < 0 )
  {
    LODWORD(IopInitFailCode) = 21;
    return 0;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
    KeBugCheck(0xA0u);
  if ( v3 )
    WheaSelLogCheckPoint();
  SmInitSystem(1LL);
  EtwInitialize(2u, (__int64)Context);
  OutputBuffer[0] = 0;
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u) >= 0 && OutputBuffer[0] )
  {
    ExSubscribeWnfStateChange(
      (__int64)&VslpIumCsWnfSubscription,
      (__int64)&WNF_PO_SCENARIO_CHANGE,
      1,
      0,
      (__int64)VslpConnectedStandbyWnfCallback,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_LOW_POWER_EPOCH,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
  }
  IopInitializeSystemVariableService();
  SecureDump_ProvisionCrashDumpKey();
  if ( !ForceDumpDisabled || (IopDumpTraceForceDumpDisabled(), !ForceDumpDisabled) )
  {
    IoInitializeLiveDump();
    if ( !AllowLiveDump )
      IopLiveDumpTraceDumpDisabledOnBoot();
  }
  IopInitializeBugCheckDriverData();
  IopInitializeTriageDumpData();
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStart);
  v26 = IopInitCrashDumpDuringSysInit(Context);
  v28 = v26;
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)CrashDumpInitializeStop, v27, v26);
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( v28 < 0 )
  {
    if ( !AllowCrashDump )
      IopTraceCrashDumpDisabledOnBoot();
  }
  else
  {
    IopRemoveDumpCapsuleSupport();
  }
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v29 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v29;
  if ( SystemDlls < 0 )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 7;
    return 0;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(Context, v41) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 9;
    return 0;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 10;
    return 0;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
    {
      PpPagePathAssign(Object);
      ObfDereferenceObject(Object);
    }
    ZwClose(KeyHandle);
  }
  if ( !WMIInitialize(1, 0LL) )
    return 0;
  if ( v3 )
    WheaSelLogCheckPoint();
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0q_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStart, v31, 1);
  WheaInitialize((__int64)Context, 1u);
  if ( (Microsoft_Windows_Kernel_IOEnableBits & 0x10) != 0 )
    McTemplateK0_EtwWriteTransfer(IoMgrProvider_Context, (const EVENT_DESCRIPTOR *)WheaInitializeStop);
  if ( v3 )
    WheaSelLogCheckPoint();
  return 1;
}
