/*
 * XREFs of HalpDmaGetAdapterCacheAlignment @ 0x1403B99EC
 * Callers:
 *     HalpCalculateScatterGatherListSize @ 0x1403B9890 (HalpCalculateScatterGatherListSize.c)
 *     HalPutScatterGatherListV2 @ 0x1403CEB18 (HalPutScatterGatherListV2.c)
 *     HalGetDmaTransferInfoInternal @ 0x14045BEBC (HalGetDmaTransferInfoInternal.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14045E376 (HalpDmaFlushContiguousTransferV2.c)
 *     HalpDmaFlushScatterTransferV2 @ 0x14045E48C (HalpDmaFlushScatterTransferV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x14045E5E8 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaMapScatterTransferV2 @ 0x14045E728 (HalpDmaMapScatterTransferV2.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14045E8B4 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaCheckMdlAccessibility @ 0x1404FFC74 (HalpDmaCheckMdlAccessibility.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x1405000C4 (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140500630 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x1405007F0 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140511A74 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x140511FD0 (HalpFlushMapBuffers.c)
 *     HalFlushAdapterBuffersEx @ 0x140514930 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B9A14 (HalpDmaGetAdapterVersion.c)
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
