/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x18002A180
 * Callers:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x18005594C (RtlpHpTagAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap(a1, a2, a3);
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, 0);
}
