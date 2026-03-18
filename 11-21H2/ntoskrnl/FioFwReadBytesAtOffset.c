/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403A9E4C
 * Callers:
 *     RaspLoadBearings @ 0x1403A985C (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x1403A9A4C (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x1403A9A80 (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x1403CE3FC (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x14064F0C0 (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x140B563A4 (BgpRasInitializeRasterizer.c)
 *     FopReadMappingTable @ 0x140B565BC (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x140B5678C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x140B568E8 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x140B56A6C (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140B56B94 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140B56C04 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
