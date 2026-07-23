/*
 * XREFs of CmpLockRegistry @ 0x140AF54A0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F65DC (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140616114 (CmShutdownSystem1.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x140697CEC (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmEnumerateKey @ 0x1406DC470 (CmEnumerateKey.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703230 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070EA50 (CmEnumerateValueKey.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpTrimHive @ 0x14074EA74 (CmpTrimHive.c)
 *     CmpDoLocalizeNextHive @ 0x140751550 (CmpDoLocalizeNextHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407539D8 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768280 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x140768C8C (CmpTransMgrPrepare.c)
 *     CmpDelayCloseWorker @ 0x14076A320 (CmpDelayCloseWorker.c)
 *     CmNotifyRunDown @ 0x14076E7D4 (CmNotifyRunDown.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D0F0 (CmpStartSiloRegistryNamespace.c)
 *     HvpFinishPrimaryWrite @ 0x1407D99E4 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E7C80 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082752C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB940 (CmCallbackGetKeyObjectID.c)
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x140A0BC40 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A0C034 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D350 (CmOpenKeyForBugCheckRecovery.c)
 *     CmReplaceKey @ 0x140A159A4 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A166C4 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17C84 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1C148 (CmpStopSiloKeyLockTracker.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1D134 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140A2AE84 (CmpDoReOpenTransKey.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x14022FC20 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x140230020 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
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
