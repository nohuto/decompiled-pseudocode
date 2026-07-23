/*
 * XREFs of CmpReferenceHive @ 0x14076A77C
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntryShared @ 0x1407696CC (CmpLockHashEntryShared.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769780 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x14076A140 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A25C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14076A608 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A6C0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpGetLastHive @ 0x1407D8E44 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DDA78 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x140A13A54 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13B08 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1F780 (CmpLockHashEntryByIndexExclusive.c)
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
