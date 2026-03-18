/*
 * XREFs of MiMakeSubsectionPte @ 0x14026EA48
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     MiParseImageSectionHeaders @ 0x1406F4230 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x1406F4768 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x14070893C (MiBuildImageControlArea.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1, __int64 a2)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40), a2);
}
