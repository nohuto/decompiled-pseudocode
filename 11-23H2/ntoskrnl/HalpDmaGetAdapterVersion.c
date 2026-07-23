/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x1403B9A14
 * Callers:
 *     HalJoinDmaDomain @ 0x1403907F0 (HalJoinDmaDomain.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B99EC (HalpDmaGetAdapterCacheAlignment.c)
 *     HalGetScatterGatherList @ 0x1403D0FE0 (HalGetScatterGatherList.c)
 *     HalAllocateAdapterChannel @ 0x14045B700 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14045B75A (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaNextContiguousPiece @ 0x14045B828 (HalpDmaNextContiguousPiece.c)
 *     IoMapTransferInternal @ 0x14045B8BE (IoMapTransferInternal.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x140501530 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1405015B4 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x140501614 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140510A54 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x140827830 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827DC0 (HalGetAdapterV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 156);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
