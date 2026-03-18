/*
 * XREFs of ExfReleasePushLock @ 0x1402BD830
 * Callers:
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403743E4 (CmpNotifyMachineHiveLoaded.c)
 *     DifExfReleasePushLockWrapper @ 0x1405DA550 (DifExfReleasePushLockWrapper.c)
 *     PdcTaskClientRequest @ 0x140682428 (PdcTaskClientRequest.c)
 *     CmpUnlockContextList @ 0x14068F210 (CmpUnlockContextList.c)
 *     CmpUnlockCallbackList @ 0x14068F274 (CmpUnlockCallbackList.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x140696D48 (ExCovReadjustUnloadedModuleEntry.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406D8D90 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1406D8EE0 (CmpGetNameControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406E85F0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpDeleteHive @ 0x14074E6D4 (CmpDeleteHive.c)
 *     CmpUnlockHiveList @ 0x140750938 (CmpUnlockHiveList.c)
 *     UNLOCK_HIVE_LOAD @ 0x140751E30 (UNLOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x140752060 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     CmpGetNextHive @ 0x140769F50 (CmpGetNextHive.c)
 *     CmpUnlockHashEntry @ 0x14076A5C0 (CmpUnlockHashEntry.c)
 *     CmpUnlockHashEntryByKcb @ 0x14076A7B0 (CmpUnlockHashEntryByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14076AE28 (CmpUnlockDeletedHashEntryByKcb.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C06C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C178 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14077C630 (VrpDereferenceDiffHiveEntry.c)
 *     CmpUnlockAppHiveLoadList @ 0x1407D56F0 (CmpUnlockAppHiveLoadList.c)
 *     CmpGetLastHive @ 0x1407D8B74 (CmpGetLastHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     CmpStartSiloKeyLockTracker @ 0x14080C6A8 (CmpStartSiloKeyLockTracker.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x14080E160 (CmRegisterMachineHiveLoadedNotification.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     CmpUnlockGlobalKeyLockTracker @ 0x140847664 (CmpUnlockGlobalKeyLockTracker.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A060F4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A067AC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140A07054 (ExpCovResetInformation.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140A0F5C0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BE98 (CmpStopSiloKeyLockTracker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140A1F57C (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockNameHashEntry @ 0x140A1F600 (CmpUnlockNameHashEntry.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 *     ExpWorkerInitialization @ 0x140B6610C (ExpWorkerInitialization.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1402BD910 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfReleasePushLock(_QWORD *a1)
{
  _m_prefetchw(a1);
  if ( (*a1 & 2) != 0 || *a1 >= 0x10uLL )
    return ExfReleasePushLockShared(a1);
  else
    return ExfReleasePushLockExclusive(a1);
}
