/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x18005594C
 * Callers:
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002A180 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x180055908 (RtlpHpTaggableHeap.c)
 *     RtlpHpTagContextGetTag @ 0x1800A3794 (RtlpHpTagContextGetTag.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3)
{
  __int64 v6; // rcx
  unsigned __int16 Tag; // di
  unsigned __int64 result; // rax

  if ( RtlpHpTaggableHeap((__int64)HeapHandle) )
    Tag = RtlpHpTagContextGetTag(v6, a2);
  else
    Tag = 0;
  result = RtlpAllocateHeapInternal(HeapHandle, a2, a3, Tag);
  if ( !result )
  {
    if ( Tag )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(qword_180178B38 + 8LL * Tag - 8) + 32LL),
        -(__int64)a2);
  }
  return result;
}
