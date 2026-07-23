/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x180043778
 * Callers:
 *     RtlReAllocateHeap @ 0x1800421C0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x180045C54 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

_QWORD *__fastcall RtlpHpReAllocWithExceptionProtection(
        unsigned __int16 *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (_QWORD *)RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
