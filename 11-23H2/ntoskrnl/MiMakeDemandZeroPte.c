/*
 * XREFs of MiMakeDemandZeroPte @ 0x140284978
 * Callers:
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiAddMappedPtes @ 0x1406AD7A0 (MiAddMappedPtes.c)
 *     MiParseImageSectionHeaders @ 0x1406B0AD0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1406B0EE4 (MiInitializePrototypePtes.c)
 *     MiPrefetchDriverPages @ 0x1406FA180 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x140748008 (MiChargeSegmentCommit.c)
 *     MmFreeNonCachedMemory @ 0x140A2DB00 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402857A0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
