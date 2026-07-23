/*
 * XREFs of CmCompleteRegistryInitialization @ 0x14080ABF0
 * Callers:
 *     NtInitializeRegistry @ 0x1407E8F00 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     Feature_BamQosGrouping__private_ReportDeviceUsage @ 0x1404101B4 (Feature_BamQosGrouping__private_ReportDeviceUsage.c)
 *     Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage @ 0x140410284 (Feature_SchedulerFavoredCoreRotation__private_ReportDeviceUsage.c)
 *     Feature_SchedulerQosPreemption__private_ReportDeviceUsage @ 0x1404102EC (Feature_SchedulerQosPreemption__private_ReportDeviceUsage.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x1407EF060 (RtlLockBootStatusData.c)
 *     PoInitHiberServices @ 0x140801DB8 (PoInitHiberServices.c)
 *     CmpInitializeSystemHivesLoad @ 0x14080AA14 (CmpInitializeSystemHivesLoad.c)
 *     CmpCreateRegistryThread @ 0x14080AB08 (CmpCreateRegistryThread.c)
 *     PnpBootPhaseComplete @ 0x1408113E0 (PnpBootPhaseComplete.c)
 *     EtwInitialize @ 0x14081D2FC (EtwInitialize.c)
 *     ExpRefreshSystemTime @ 0x14083EDF4 (ExpRefreshSystemTime.c)
 *     CmpCmdInit @ 0x140842D94 (CmpCmdInit.c)
 *     PsBootPhaseComplete @ 0x1408546BC (PsBootPhaseComplete.c)
 *     PoClearTransitionMarker @ 0x14085E508 (PoClearTransitionMarker.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1408631F4 (ExNotifyPlatformBinaryExecuted.c)
 *     PoEnableCriticalShutdown @ 0x140864614 (PoEnableCriticalShutdown.c)
 *     IopCopyBootLogRegistryToFile @ 0x1408657F8 (IopCopyBootLogRegistryToFile.c)
 *     ExEnableNlsSectionCache @ 0x1409FB7C8 (ExEnableNlsSectionCache.c)
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
    byte_140D1BEA8 = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
