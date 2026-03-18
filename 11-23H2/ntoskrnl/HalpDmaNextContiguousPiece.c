/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x14045B428
 * Callers:
 *     HalPutScatterGatherListV2 @ 0x1403CE938 (HalPutScatterGatherListV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14045DF76 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x14045E08C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x14045E1E8 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x14045E328 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1404FFA24 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404FFB74 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404FFFBC (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1405000E0 (HalpDmaMapScatterTransferV3.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9834 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14045E4B4 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1405002A0 (HalpDmaNextContiguousPieceV3.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaNextContiguousPieceV2(v8, v9, v6, v7, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(v8, v9, v6, v7, a5, a6);
}
