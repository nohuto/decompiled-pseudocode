/*
 * XREFs of RtlpMakeXpressCallback @ 0x180121B00
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x180055E80 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1801205AC (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x180120DC0 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x180121434 (RtlCompressBufferXpressLzStandard.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
