/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402A14D0
 * Callers:
 *     CcUnmapAndPurge @ 0x140299F38 (CcUnmapAndPurge.c)
 *     CcWriteBehindPostProcess @ 0x14029B038 (CcWriteBehindPostProcess.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402F42A8 (CcIsFatalWriteError.c)
 *     CcGetDirtyPagesHelper @ 0x140338840 (CcGetDirtyPagesHelper.c)
 *     CcUnpinRepinnedBcb @ 0x140394190 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x140394304 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403943EC (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140395554 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnmapVacb @ 0x140721E10 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x1402A1650 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402A1D48 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96, 1666409283LL);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
