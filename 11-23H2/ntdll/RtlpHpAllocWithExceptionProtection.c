/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x18003E210
 * Callers:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x180065D30 (RtlpHpTagAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1801228A8 (RtlpHeapExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlpHpAllocWithExceptionProtection(void *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap(a1);
  else
    return RtlpAllocateHeapInternal((unsigned __int16 *)a1, a2, a3, 0);
}
