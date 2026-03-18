/*
 * XREFs of HalpDmaGetAdapterVersion @ 0x1403B9834
 * Callers:
 *     HalJoinDmaDomain @ 0x140390610 (HalJoinDmaDomain.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x1403B980C (HalpDmaGetAdapterCacheAlignment.c)
 *     HalGetScatterGatherList @ 0x1403D0E00 (HalGetScatterGatherList.c)
 *     HalAllocateAdapterChannel @ 0x14045B300 (HalAllocateAdapterChannel.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14045B35A (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaNextContiguousPiece @ 0x14045B428 (HalpDmaNextContiguousPiece.c)
 *     IoMapTransferInternal @ 0x14045B4BE (IoMapTransferInternal.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x140500FE0 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x140501064 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     IoFreeMapRegistersThunk @ 0x1405010C4 (IoFreeMapRegistersThunk.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140510504 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalGetAdapterV3 @ 0x140827530 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140827AC0 (HalGetAdapterV2.c)
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
