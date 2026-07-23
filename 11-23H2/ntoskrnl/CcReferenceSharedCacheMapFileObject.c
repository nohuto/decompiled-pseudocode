/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402A1760
 * Callers:
 *     CcUnmapAndPurge @ 0x14029A1C8 (CcUnmapAndPurge.c)
 *     CcWriteBehindPostProcess @ 0x14029B2C8 (CcWriteBehindPostProcess.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F1564 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402F4538 (CcIsFatalWriteError.c)
 *     CcGetDirtyPagesHelper @ 0x140338AD0 (CcGetDirtyPagesHelper.c)
 *     CcUnpinRepinnedBcb @ 0x140394370 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x1403944E4 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403945CC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395734 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnmapVacb @ 0x140722010 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x1402A18E0 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402A1FD8 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96, 1666409283LL);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
