/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402A13B0
 * Callers:
 *     CcUnmapAndPurge @ 0x140299E18 (CcUnmapAndPurge.c)
 *     CcWriteBehindPostProcess @ 0x14029AF18 (CcWriteBehindPostProcess.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F12D4 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1402F42A8 (CcIsFatalWriteError.c)
 *     CcGetDirtyPagesHelper @ 0x1403386A0 (CcGetDirtyPagesHelper.c)
 *     CcUnpinRepinnedBcb @ 0x140392610 (CcUnpinRepinnedBcb.c)
 *     CcPerfLogFlushSection @ 0x140392784 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x14039286C (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403939D4 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnmapVacb @ 0x140721E80 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x1402A1530 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402A1C28 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96, 1666409283LL);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}
