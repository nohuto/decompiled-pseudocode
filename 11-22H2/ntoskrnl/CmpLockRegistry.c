/*
 * XREFs of CmpLockRegistry @ 0x140AF64A0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpRecheckHiveVolumePolicy @ 0x1402F634C (CmpRecheckHiveVolumePolicy.c)
 *     CmShutdownSystem1 @ 0x140615C34 (CmShutdownSystem1.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmpCleanupParseContext @ 0x140692A84 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x140697CEC (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4B90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5C50 (CmpQueryKeySecurity.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmQueryValueKey @ 0x1406E0370 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1406E2B10 (CmOpenKey.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmEnumerateValueKey @ 0x14070E8F0 (CmEnumerateValueKey.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpTrimHive @ 0x14074ED94 (CmpTrimHive.c)
 *     CmpDoLocalizeNextHive @ 0x140751870 (CmpDoLocalizeNextHive.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140753CF8 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1407685A0 (CmpCloseKeyObject.c)
 *     CmpTransMgrPrepare @ 0x140768FAC (CmpTransMgrPrepare.c)
 *     CmpDelayCloseWorker @ 0x14076A640 (CmpDelayCloseWorker.c)
 *     CmNotifyRunDown @ 0x14076EAF4 (CmNotifyRunDown.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D410 (CmpStartSiloRegistryNamespace.c)
 *     HvpFinishPrimaryWrite @ 0x1407D9C94 (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1407E7F30 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140828D7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x14084905C (CmLockKeyForWrite.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408ABBD0 (CmCallbackGetKeyObjectID.c)
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A0BE34 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D150 (CmOpenKeyForBugCheckRecovery.c)
 *     CmReplaceKey @ 0x140A157A4 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A17A84 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17F90 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BF48 (CmpStopSiloKeyLockTracker.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CF34 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140A2AC84 (CmpDoReOpenTransKey.c)
 *     CmpDumpKeyToBuffer @ 0x140AF68F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x14022FB30 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x14022FF30 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
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
