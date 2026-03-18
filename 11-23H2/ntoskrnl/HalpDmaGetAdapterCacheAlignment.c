/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1403B980C
 * Callers:
 *     HalpCalculateScatterGatherListSize @ 0x1403B96B0 (HalpCalculateScatterGatherListSize.c)
 *     HalPutScatterGatherListV2 @ 0x1403CE938 (HalPutScatterGatherListV2.c)
 *     HalGetDmaTransferInfoInternal @ 0x14045BABC (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14045DF76 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x14045E08C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x14045E1E8 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x14045E328 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14045E4B4 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FF724 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1404FFB74 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1405000E0 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1405002A0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140511524 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x140511A80 (HalpFlushMapBuffers.c)
 *     HalFlushAdapterBuffersEx @ 0x1405143E0 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9834 (HalpDmaGetAdapterVersion.c)
 */

__int64 __fastcall HalpDmaGetAdapterCacheAlignment(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1, a2, a1) == 2 )
    return 1LL;
  result = (unsigned int)HalpCoreDmaAlignment;
  if ( *(_BYTE *)(v2 + 445) )
    return 1LL;
  return result;
}
