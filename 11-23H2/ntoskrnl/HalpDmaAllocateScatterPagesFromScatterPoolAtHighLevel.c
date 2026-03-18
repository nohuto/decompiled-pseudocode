/*
 * XREFs of HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x140501064
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x140510504 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9834 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3 @ 0x1404FF4A8 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2 @ 0x140515EC4 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // r8d
  unsigned int *v3; // r9
  __int64 v4; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV2(v1, v4);
  else
    return HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevelV3(v1, v4, v2, v3);
}
