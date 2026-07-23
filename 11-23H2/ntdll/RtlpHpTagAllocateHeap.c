/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x180065D30
 * Callers:
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18003E210 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180065DA4 (RtlpHpTaggableHeap.c)
 *     RtlpHpTagContextGetTag @ 0x1800A04A4 (RtlpHpTagContextGetTag.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned __int16 Tag; // di
  unsigned __int64 result; // rax

  if ( (unsigned int)RtlpHpTaggableHeap() )
    Tag = RtlpHpTagContextGetTag(v6, a2);
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(HeapHandle, a2, a3, Tag);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180185DF8 + 8LL * Tag - 8) + 32LL),
        -(__int64)a2);
  }
  return result;
}
