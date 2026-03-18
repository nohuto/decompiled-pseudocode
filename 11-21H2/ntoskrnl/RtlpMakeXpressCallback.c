/*
 * XREFs of RtlpMakeXpressCallback @ 0x14038CF50
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x140377590 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzStandard @ 0x1403784C0 (RtlCompressBufferXpressLzStandard.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x14038C7A0 (RtlDecompressBufferXpressLzProgress.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1405F0724 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1405F0E44 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1405F1474 (RtlDecompressBufferXpressHuffProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
