/*
 * XREFs of HalpDmaFlushContiguousTransferV2 @ 0x140458C22
 * Callers:
 *     IoFlushAdapterBuffersV2 @ 0x140393E40 (IoFlushAdapterBuffersV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x14045693C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaNextContiguousPiece @ 0x14045699C (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140457A42 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushBuffer @ 0x140513310 (HalpDmaFlushBuffer.c)
 */

void __fastcall HalpDmaFlushContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int ContiguousPiece; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  char v13; // r10
  __int64 v14; // r11
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, a5);
  if ( ContiguousPiece != a5
    || (v11 = (a4 & 0xFFF)
            + (*(_QWORD *)(a2 + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
            + ContiguousPiece,
        *(_QWORD *)(a1 + 136) < (unsigned __int64)(v11 - 1)) )
  {
    v13 = 0;
    if ( a6 )
      return;
    goto LABEL_9;
  }
  if ( !a6 && !*(_BYTE *)(a1 + 437) )
  {
    v12 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
    if ( (v12 & v14) == 0 && (v12 & v11) == 0 )
    {
      LOBYTE(v16) = v13;
      LOBYTE(v15) = v13;
      HalpDmaFlushBuffer(v12, a2, a4, a5, v15, v16);
      return;
    }
LABEL_9:
    HalpDmaSyncMapBuffers(a1, a2, a4, a3, a5, v13, v13, v13);
  }
}
