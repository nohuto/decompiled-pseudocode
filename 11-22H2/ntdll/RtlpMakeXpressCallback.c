/*
 * XREFs of RtlpMakeXpressCallback @ 0x180120680
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x180055FE0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18011F12C (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18011F940 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x18011FFB4 (RtlCompressBufferXpressLzStandard.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
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
