/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14045B75A
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14045C39E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140934150 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9A14 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x14045DFFE (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404FF538 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPool(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v1, v2);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v1, v2);
}
