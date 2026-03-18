/*
 * XREFs of CmpLockKcbShared @ 0x140AF6530
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpLockKcbStackShared @ 0x1406D56E8 (CmpLockKcbStackShared.c)
 *     CmQueryKey @ 0x1406D7280 (CmQueryKey.c)
 *     CmpLockTwoKcbsShared @ 0x1406DBE1C (CmpLockTwoKcbsShared.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E0370 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E23B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     CmEnumerateValueKey @ 0x14070E8F0 (CmEnumerateValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FBF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1407685A0 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407697F0 (CmpFindSubkeyInHashByChildCell.c)
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E2A9C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmDumpKeyToFile @ 0x140A0AB54 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17F90 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FB6C (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  unsigned __int64 v2; // rdi
  signed __int64 result; // rax

  v2 = KeAbPreAcquire(a1 + 48, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0LL, v2, a1 + 48);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
