/*
 * XREFs of ExfReleasePushLock @ 0x1402BDAC0
 * Callers:
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374584 (CmpNotifyMachineHiveLoaded.c)
 *     DifExfReleasePushLockWrapper @ 0x1405DAAC0 (DifExfReleasePushLockWrapper.c)
 *     PdcTaskClientRequest @ 0x140682428 (PdcTaskClientRequest.c)
 *     CmpUnlockContextList @ 0x14068F210 (CmpUnlockContextList.c)
 *     CmpUnlockCallbackList @ 0x14068F274 (CmpUnlockCallbackList.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8DC0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8F10 (CmpGetNameControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpUnlockHiveList @ 0x140750B28 (CmpUnlockHiveList.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     CmpGetNextHive @ 0x14076A140 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x14076A7B0 (CmpUnlockHashEntry.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A9A0 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14076B018 (CmpUnlockDeletedHashEntryByKcb.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C25C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C368 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077C820 (VrpDereferenceDiffHiveEntry.c)
 *     CmpUnlockAppHiveLoadList @ 0x1407D59C0 (CmpUnlockAppHiveLoadList.c)
 *     CmpGetLastHive @ 0x1407D8E44 (CmpGetLastHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpStartSiloKeyLockTracker @ 0x14080C978 (CmpStartSiloKeyLockTracker.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14080E430 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140847964 (CmpUnlockGlobalKeyLockTracker.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A06384 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A06A3C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A072E4 (ExpCovResetInformation.c)
 *     CmpLoadHiveVolatile @ 0x140A0C5E0 (CmpLoadHiveVolatile.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0F870 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1C148 (CmpStopSiloKeyLockTracker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1F82C (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x140A1F8B0 (CmpUnlockNameHashEntry.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1402BDBA0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
