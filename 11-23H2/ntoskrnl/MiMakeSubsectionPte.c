/*
 * XREFs of MiMakeSubsectionPte @ 0x14021BEFC
 * Callers:
 *     MiBuildImageControlArea @ 0x1406A9D30 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1406B0B00 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1406B0F14 (MiInitializePrototypePtes.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6140 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}
