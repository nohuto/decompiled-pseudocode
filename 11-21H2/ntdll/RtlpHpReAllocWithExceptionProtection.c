/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x180024214
 * Callers:
 *     RtlReAllocateHeap @ 0x180024530 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpHpTagReAllocateHeap @ 0x180021E40 (RtlpHpTagReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpReAllocWithExceptionProtection(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4);
  else
    return RtlpReAllocateHeapInternal(a1, 0LL, 0LL);
}
