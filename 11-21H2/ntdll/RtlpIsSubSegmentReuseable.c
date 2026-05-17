/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x180025A98
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006CAE4 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x180025AC4 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 */

bool __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( *(_WORD *)(a2 + 32) )
    return (unsigned __int8)RtlpIsSubSegmentReuseThresholdExceeded() == 0;
  return v2;
}
