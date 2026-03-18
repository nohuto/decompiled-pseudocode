/*
 * XREFs of CmpLockRegistry @ 0x140AB4370
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14020B1F8 (CmpRecheckHiveVolumePolicy.c)
 *     CmpDoQueryKeyName @ 0x140346910 (CmpDoQueryKeyName.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     NtDeleteKey @ 0x14067DE90 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpCleanupParseContext @ 0x14067FE98 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1406800D0 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140681670 (CmpLateUnloadHiveWorker.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpCreateHive @ 0x14068A7FC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 *     CmpDoLocalizeNextHive @ 0x14068E4E0 (CmpDoLocalizeNextHive.c)
 *     HvpFinishPrimaryWrite @ 0x14068F39C (HvpFinishPrimaryWrite.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmpStopRMLog @ 0x14069FF64 (CmpStopRMLog.c)
 *     CmEnumerateValueKey @ 0x1406A18C0 (CmEnumerateValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1406B3C34 (CmQueryMultipleValueKey.c)
 *     CmpTrimHive @ 0x1406D58E0 (CmpTrimHive.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCloseKeyObject @ 0x140718E30 (CmpCloseKeyObject.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpCleanupTransactionState @ 0x140742300 (CmpCleanupTransactionState.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x140742834 (CmpTransMgrSyncHive.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     CmNotifyRunDown @ 0x14079FD44 (CmNotifyRunDown.c)
 *     CmpDelayCloseWorker @ 0x1407C0D40 (CmpDelayCloseWorker.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmpStopSiloKeyLockTracker @ 0x1407F85CC (CmpStopSiloKeyLockTracker.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     CmDumpKeyToFile @ 0x14090C1BC (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140915854 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140919A88 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpDoReOpenTransKey @ 0x140925ED0 (CmpDoReOpenTransKey.c)
 *     CmpDumpKeyToBuffer @ 0x140AB48B4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpRecordRegistryLockAcquire @ 0x1402ACA70 (CmpRecordRegistryLockAcquire.c)
 *     PsBoostThreadIo @ 0x1402ACD60 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
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
