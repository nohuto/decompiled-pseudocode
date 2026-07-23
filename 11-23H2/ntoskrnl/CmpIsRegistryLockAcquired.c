/*
 * XREFs of CmpIsRegistryLockAcquired @ 0x14022FC60
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     NtSetValueKey @ 0x1406D2A30 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1406D5900 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1406D6BE0 (NtQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1406E69B0 (CmpParseKey.c)
 *     NtQueryMultipleValueKey @ 0x14070DF70 (NtQueryMultipleValueKey.c)
 *     NtEnumerateValueKey @ 0x14070E540 (NtEnumerateValueKey.c)
 *     NtDeleteValueKey @ 0x14070EC50 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FEC0 (NtDeleteKey.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     NtSetInformationKey @ 0x1407ACBE0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x140A0E260 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140A0E760 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0EAC0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0EE80 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0F110 (NtSaveMergedKeys.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1402A0A80 (ExIsResourceAcquiredSharedLite.c)
 *     Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage @ 0x140419B08 (Feature_AccessRegistryLockAcquireCount__private_ReportDeviceUsage.c)
 *     CmpThreadInfoLogStack @ 0x14061655C (CmpThreadInfoLogStack.c)
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
