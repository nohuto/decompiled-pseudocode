/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14080CEA0
 * Callers:
 *     NtInitializeRegistry @ 0x1407E91B0 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x14040F864 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x14040F934 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x14040F99C (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     CmpLockRegistryExclusive @ 0x1407696FC (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x1407EF310 (RtlLockBootStatusData.c)
 *     PoClearTransitionMarker @ 0x1408030CC (PoClearTransitionMarker.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     CmpInitializeSystemHivesLoad @ 0x14080CCC4 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x14080CDB8 (CmpCreateRegistryThread.c)
 *     PnpBootPhaseComplete @ 0x140813690 (PnpBootPhaseComplete.c)
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 *     ExpRefreshSystemTime @ 0x140840884 (ExpRefreshSystemTime.c)
 *     CmpCmdInit @ 0x140844824 (CmpCmdInit.c)
 *     PsBootPhaseComplete @ 0x1408552CC (PsBootPhaseComplete.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1408631D4 (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x140864794 (PoEnableCriticalShutdown.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408659D8 (IopCopyBootLogRegistryToFile.c)
 *     ExEnableNlsSectionCache @ 0x1409FB5E8 (ExEnableNlsSectionCache.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
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
    byte_140D1BF78 = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
