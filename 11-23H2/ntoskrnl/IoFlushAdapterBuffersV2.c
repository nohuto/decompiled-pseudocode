/*
 * XREFs of IoFlushAdapterBuffersV2 @ 0x14045D960
 * Callers:
 *     HalPutScatterGatherListV2 @ 0x1403CEB18 (HalPutScatterGatherListV2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14045E376 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x14045E48C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaFlushBuffer @ 0x140511160 (HalpDmaFlushBuffer.c)
 */

char __fastcall IoFlushAdapterBuffersV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  if ( a5 )
  {
    if ( a1 && !*(_BYTE *)(a1 + 441) )
      (*(void (__fastcall **)(_QWORD))(DmaDispatch + 48))(*(_QWORD *)(a1 + 432));
    if ( a3 )
    {
      if ( a1 && *(_BYTE *)(a1 + 442) )
        HalpDmaFlushScatterTransferV2(a1, a2, a3, a4, a5, a6);
      else
        HalpDmaFlushContiguousTransferV2(a1, a2, a3, a4, a5, a6);
    }
    else if ( !a6 && !*(_BYTE *)(a1 + 445) )
    {
      HalpDmaFlushBuffer(a1, a2, a4, a5, 0, 0);
    }
  }
  return 1;
}
