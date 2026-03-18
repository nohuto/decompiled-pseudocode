/*
 * XREFs of CmpReferenceHive @ 0x14076A58C
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751D34 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntryShared @ 0x1407694DC (CmpLockHashEntryShared.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769590 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x140769F50 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A06C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14076A418 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A4D0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpGetLastHive @ 0x1407D8B74 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1407DD7A8 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x140A137A4 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x140A13858 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140A1F4D0 (CmpLockHashEntryByIndexExclusive.c)
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
