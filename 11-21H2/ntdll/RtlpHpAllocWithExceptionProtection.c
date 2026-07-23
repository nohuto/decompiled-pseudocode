/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x18002A180
 * Callers:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x18005594C (RtlpHpTagAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

unsigned __int64 __fastcall RtlpHpAllocWithExceptionProtection(void *a1, unsigned __int64 a2, int a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap(a1);
  else
    return RtlpAllocateHeapInternal((unsigned __int16 *)a1, a2, a3, 0);
}
