/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14080A920
 * Callers:
 *     NtInitializeRegistry @ 0x1407E8C30 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x1404100D8 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x1404101A8 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x140410210 (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     CmpLockRegistryExclusive @ 0x1407691EC (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x1407EED90 (RtlLockBootStatusData.c)
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     CmpInitializeSystemHivesLoad @ 0x14080A744 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x14080A838 (CmpCreateRegistryThread.c)
 *     PnpBootPhaseComplete @ 0x140811110 (PnpBootPhaseComplete.c)
 *     EtwInitialize @ 0x14081D02C (EtwInitialize.c)
 *     ExpRefreshSystemTime @ 0x14083EAF4 (ExpRefreshSystemTime.c)
 *     CmpCmdInit @ 0x140842A94 (CmpCmdInit.c)
 *     PsBootPhaseComplete @ 0x1408543BC (PsBootPhaseComplete.c)
 *     PoClearTransitionMarker @ 0x14085E2C8 (PoClearTransitionMarker.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140862FB4 (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x1408643D4 (PoEnableCriticalShutdown.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408655B8 (IopCopyBootLogRegistryToFile.c)
 *     ExEnableNlsSectionCache @ 0x1409FB538 (ExEnableNlsSectionCache.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  bool v3; // di
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  __int64 v10; // rdx
  int RegistryThread; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v3 = a1 == 1;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(3LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    if ( !CmNtSkipRegistryInit )
      CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v4) = v3;
    CmpCmdInit(v4);
    CmpUnlockRegistry(v6, v5, v7, v8);
    if ( a1 != 1 && !CmNtSkipRegistryInit )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v9 = 0, CmpForceSynchronousMachineHiveLoad) )
        v9 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      RegistryThread = CmpCreateRegistryThread(
                         (__int64)&Handle,
                         v10,
                         (__int64)CmpFinishSystemHivesLoad,
                         (unsigned __int64)&Event & -(__int64)(v9 != 0));
      if ( RegistryThread < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, RegistryThread);
      if ( v9 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    Feature_BamQosGrouping__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x800u;
    Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x1000u;
    Feature_SchedulerQosPreemption__private_ReportDeviceUsage();
    KiVelocityFlags |= 0x4000u;
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PoEnableCriticalShutdown();
    ExEnableNlsSectionCache();
    ExNotifyPlatformBinaryExecuted();
    byte_140D1BED0 = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
