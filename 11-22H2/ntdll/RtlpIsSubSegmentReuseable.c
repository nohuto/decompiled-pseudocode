/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x18006354C
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003D6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180118AA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180063578 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 */

bool __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_WORD *)(a2 + 32) )
    return (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded(a1, a2) == 0;
  return v2;
}
