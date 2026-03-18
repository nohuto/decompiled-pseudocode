/*
 * XREFs of CmpLockRegistryExclusive @ 0x1407691EC
 * Callers:
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x140615E1C (CmShutdownSystem2.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmEnumerateKey @ 0x1406DC440 (CmEnumerateKey.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpCleanupLightWeightTransaction @ 0x1407D09B4 (CmpCleanupLightWeightTransaction.c)
 *     CmpDelayFreeRMWorker @ 0x1407E8EB0 (CmpDelayFreeRMWorker.c)
 *     CmCompleteRegistryInitialization @ 0x14080A920 (CmCompleteRegistryInitialization.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084A84C (CmpMarkCurrentProfileDirty.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveVolatile @ 0x140A0C330 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     NtCompactKeys @ 0x140A0D370 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140A0DA20 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DC60 (NtQueryOpenSubKeysEx.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmEtwRunDown @ 0x140A12424 (CmEtwRunDown.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C46C (CmpCommitLightWeightTransaction.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x14022FB30 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x14022FF30 (PsBoostThreadIo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN CmpLockRegistryExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpRecordRegistryLockAcquire();
  return ExAcquireResourceExclusiveLite((PERESOURCE)&CmpRegistryLock, 1u);
}
