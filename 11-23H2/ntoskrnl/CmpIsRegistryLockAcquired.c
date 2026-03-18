/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x14022FB70
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x1406D2A00 (NtSetValueKey.c)
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
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407AC9F0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140A0DFB0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E4B0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E810 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EBD0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EE60 (NtSaveMergedKeys.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1402A07F0 (ExIsResourceAcquiredSharedLite.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140419778 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x14061600C (CmpThreadInfoLogStack.c)
 */

ULONG CmpIsRegistryLockAcquired()
{
  __int64 v0; // rcx

  Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage();
  v0 = *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex;
  if ( v0 )
    return *(_DWORD *)(v0 + 8);
  CmpThreadInfoLogStack();
  return ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock);
}
