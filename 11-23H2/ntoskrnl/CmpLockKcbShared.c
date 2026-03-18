/*
 * XREFs of CmpLockKcbShared @ 0x140AF5530
 * Callers:
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB38 (CmQueryMultipleValueKey.c)
 *     CmpLockKcbStackShared @ 0x1406D5638 (CmpLockKcbStackShared.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     CmpLockTwoKcbsShared @ 0x1406DBD6C (CmpLockTwoKcbsShared.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E02C0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmEnumerateValueKey @ 0x14070E840 (CmEnumerateValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FB48 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768090 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407692E0 (CmpFindSubkeyInHashByChildCell.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E251C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmDumpKeyToFile @ 0x140A0AAA4 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17EE0 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FABC (CmpEnumerateAllHigherLayerKcbs.c)
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
