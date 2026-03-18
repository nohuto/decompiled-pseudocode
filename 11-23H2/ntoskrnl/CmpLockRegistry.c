/*
 * XREFs of CmpLockRegistry @ 0x140AF54A0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x140697CEC (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB38 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4AE0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmEnumerateKey @ 0x1406DC440 (CmEnumerateKey.c)
 *     CmQueryValueKey @ 0x1406E02C0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070E840 (CmEnumerateValueKey.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpTrimHive @ 0x14074E884 (CmpTrimHive.c)
 *     CmpDoLocalizeNextHive @ 0x140751360 (CmpDoLocalizeNextHive.c)
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768090 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x140768A9C (CmpTransMgrPrepare.c)
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 *     CmNotifyRunDown @ 0x14076E5E4 (CmNotifyRunDown.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077CF00 (CmpStartSiloRegistryNamespace.c)
 *     HvpFinishPrimaryWrite @ 0x1407D9714 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E79B0 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082722C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB6F0 (CmCallbackGetKeyObjectID.c)
 *     CmDumpKeyToFile @ 0x140A0AAA4 (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A0BD84 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     CmReplaceKey @ 0x140A156F4 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A179D4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17EE0 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x140A1A8E8 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BE98 (CmpStopSiloKeyLockTracker.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CE84 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140A2ABD4 (CmpDoReOpenTransKey.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x14022FB30 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x14022FF30 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}
