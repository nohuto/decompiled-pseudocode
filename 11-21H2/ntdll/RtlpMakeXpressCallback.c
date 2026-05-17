/*
 * XREFs of RtlpMakeXpressCallback @ 0x18011EF88
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005C580 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x18011DA9C (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x18011E270 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x18011E8A8 (RtlCompressBufferXpressLzStandard.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
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
