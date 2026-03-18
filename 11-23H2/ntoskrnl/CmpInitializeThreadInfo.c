/*
 * XREFs of CmpInitializeThreadInfo @ 0x14022E640
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmInitializeThreadInfo @ 0x1403380D0 (CmInitializeThreadInfo.c)
 *     CmpLazyWriteWorker @ 0x1403A0150 (CmpLazyWriteWorker.c)
 *     CmSetCallbackObjectContext @ 0x14068F0A0 (CmSetCallbackObjectContext.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     NtCreateKeyTransacted @ 0x140692240 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x1406923A0 (NtCreateKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     NtUnloadKey2 @ 0x140698D40 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x140698D90 (NtUnloadKey.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406D4AE0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpSecurityMethod @ 0x1406D58D0 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6BB0 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     NtEnumerateKey @ 0x1406DBE10 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2E70 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1406E6980 (CmpParseKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DD60 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E330 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EA40 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FCB0 (NtDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768090 (CmpCloseKeyObject.c)
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 *     CmNotifyRunDown @ 0x14076E5E4 (CmNotifyRunDown.c)
 *     CmGetRootKeyObjectForSilo @ 0x14077A3D0 (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x14077CDC8 (CmInitSiloNamespace.c)
 *     NtOpenKeyEx @ 0x1407ABD00 (NtOpenKeyEx.c)
 *     NtOpenKey @ 0x1407AC450 (NtOpenKey.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407AC9F0 (NtSetInformationKey.c)
 *     CmpCloseLightWeightTransaction @ 0x1407D07E0 (CmpCloseLightWeightTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1407D0830 (CmpRollbackLightWeightTransaction.c)
 *     NtCreateRegistryTransaction @ 0x1407D1D40 (NtCreateRegistryTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1407D3500 (NtOpenKeyTransactedEx.c)
 *     NtInitializeRegistry @ 0x1407E8C30 (NtInitializeRegistry.c)
 *     CmpDelayFreeRMWorker @ 0x1407E8EB0 (CmpDelayFreeRMWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     CmInitServerSiloState @ 0x14080C634 (CmInitServerSiloState.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x140847210 (NtLockRegistryKey.c)
 *     CmpRegisterCallbackInternal @ 0x140850D1C (CmpRegisterCallbackInternal.c)
 *     NtUnloadKeyEx @ 0x140875A00 (NtUnloadKeyEx.c)
 *     CmpEnumerateCallback @ 0x140885580 (CmpEnumerateCallback.c)
 *     CmCallbackGetKeyObjectID @ 0x1408AB6F0 (CmCallbackGetKeyObjectID.c)
 *     PspDeleteExternalServerSiloState @ 0x1409ACDB8 (PspDeleteExternalServerSiloState.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0D0A0 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCommitRegistryTransaction @ 0x140A0D250 (NtCommitRegistryTransaction.c)
 *     NtCompactKeys @ 0x140A0D370 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0D640 (NtCompressKey.c)
 *     NtFreezeRegistry @ 0x140A0D800 (NtFreezeRegistry.c)
 *     NtOpenRegistryTransaction @ 0x140A0D8E0 (NtOpenRegistryTransaction.c)
 *     NtQueryOpenSubKeys @ 0x140A0DA20 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DC60 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E4B0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E810 (NtRestoreKey.c)
 *     NtRollbackRegistryTransaction @ 0x140A0EA90 (NtRollbackRegistryTransaction.c)
 *     NtSaveKeyEx @ 0x140A0EBD0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EE60 (NtSaveMergedKeys.c)
 *     NtThawRegistry @ 0x140A0F100 (NtThawRegistry.c)
 *     CmUnRegisterCallback @ 0x140A0F1C0 (CmUnRegisterCallback.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmShutdownSystem @ 0x140A112D8 (CmShutdownSystem.c)
 *     CmpForceFlushWorker @ 0x140A11B00 (CmpForceFlushWorker.c)
 *     CmpFreeSiloContextCallback @ 0x140A11C00 (CmpFreeSiloContextCallback.c)
 *     CmEtwRunDown @ 0x140A12424 (CmEtwRunDown.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13278 (CmReconcileAndValidateAllHives.c)
 *     CmpFreezeThawWorker @ 0x140A13760 (CmpFreezeThawWorker.c)
 *     CmpLazyCommitWorker @ 0x140A1C0C0 (CmpLazyCommitWorker.c)
 *     CmSaveKeyToBuffer @ 0x140AF57B0 (CmSaveKeyToBuffer.c)
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
 *     CmpGetSystemControlValues @ 0x140B59984 (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall CmpInitializeThreadInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _OWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = *(_OWORD **)&CurrentThread[1].ResourceIndex;
  if ( result )
  {
    *(_OWORD *)a1 = *result;
    *(_QWORD *)a1 = result;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)&CurrentThread[1].ResourceIndex = a1;
  return result;
}
