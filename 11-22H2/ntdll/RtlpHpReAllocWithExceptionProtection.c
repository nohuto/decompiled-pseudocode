/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x1800438D8
 * Callers:
 *     RtlReAllocateHeap @ 0x180042320 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x180045DB4 (RtlpHpTagReAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
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
