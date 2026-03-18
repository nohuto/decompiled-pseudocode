/*
 * XREFs of CmpAcquireShutdownRundown @ 0x140AF5380
 * Callers:
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1406D5BA0 (CmpQueryKeySecurity.c)
 *     NtQueryKey @ 0x1406D6BB0 (NtQueryKey.c)
 *     CmpConstructNameWithStatus @ 0x1406D7BB0 (CmpConstructNameWithStatus.c)
 *     NtEnumerateKey @ 0x1406DBE10 (NtEnumerateKey.c)
 *     CmOpenKey @ 0x1406E2A60 (CmOpenKey.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 *     CmpCreateHive @ 0x1407023CC (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140703020 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     NtQueryMultipleValueKey @ 0x14070DD60 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E330 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     CmpDoLocalizeNextHive @ 0x140751360 (CmpDoLocalizeNextHive.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407AC9F0 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x1407D07E0 (CmpCloseLightWeightTransaction.c)
 *     NtCreateRegistryTransaction @ 0x1407D1D40 (NtCreateRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1407D3500 (NtOpenKeyTransactedEx.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x140847210 (NtLockRegistryKey.c)
 *     CmpHandlePageFileOpenNotification @ 0x140853FD0 (CmpHandlePageFileOpenNotification.c)
 *     CmpAssignKeySecurity @ 0x14085838C (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCommitRegistryTransaction @ 0x140A0D250 (NtCommitRegistryTransaction.c)
 *     NtCompactKeys @ 0x140A0D370 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     NtOpenRegistryTransaction @ 0x140A0D8E0 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140A0DA20 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DC60 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 *     NtRestoreKey @ 0x140A0E810 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x140A0EA90 (NtRollbackRegistryTransaction.c)
 *     NtSaveKeyEx @ 0x140A0EBD0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EE60 (NtSaveMergedKeys.c)
 *     CmpForceFlushWorker @ 0x140A11B00 (CmpForceFlushWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13278 (CmReconcileAndValidateAllHives.c)
 *     CmFreezeRegistry @ 0x140A13300 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140A13530 (CmThawRegistry.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 */

BOOLEAN CmpAcquireShutdownRundown()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = ExAcquireRundownProtection_0(&CmpShutdownRundown);
  if ( !result )
  {
    KeLeaveCriticalRegion();
    return 0;
  }
  return result;
}
