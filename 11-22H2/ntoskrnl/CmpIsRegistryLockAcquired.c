/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x14022FB70
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x1406D2AB0 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406D5980 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6C60 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     NtEnumerateKey @ 0x1406DBEC0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DE10 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E3E0 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EAF0 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407ACFA0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140A0E060 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E560 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0E8C0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EC80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0EF10 (NtSaveMergedKeys.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1402A06D0 (ExIsResourceAcquiredSharedLite.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x1404190C8 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x14061607C (CmpThreadInfoLogStack.c)
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
