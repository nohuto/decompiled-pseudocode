/*
 * XREFs of MiMakeDemandZeroPte @ 0x140284C08
 * Callers:
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiAddMappedPtes @ 0x1406AD7D0 (MiAddMappedPtes.c)
 *     MiParseImageSectionHeaders @ 0x1406B0B00 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1406B0F14 (MiInitializePrototypePtes.c)
 *     MiPrefetchDriverPages @ 0x1406FA390 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x1407481F8 (MiChargeSegmentCommit.c)
 *     MmFreeNonCachedMemory @ 0x140A2DDB0 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}
