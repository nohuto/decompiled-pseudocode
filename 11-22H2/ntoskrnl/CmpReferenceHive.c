/*
 * XREFs of CmpReferenceHive @ 0x14076AA9C
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140752244 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntryShared @ 0x1407699EC (CmpLockHashEntryShared.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769AA0 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x14076A460 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A57C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14076A928 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A9E0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpGetLastHive @ 0x1407D90F4 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DDD28 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x140A13854 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13908 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1F580 (CmpLockHashEntryByIndexExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4232));
  v1 = *(_DWORD *)(a1 + 4232);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4232), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
