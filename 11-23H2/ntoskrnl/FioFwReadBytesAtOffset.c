/*
 * XREFs of FioFwReadBytesAtOffset @ 0x1403871C8
 * Callers:
 *     RaspLoadBearings @ 0x140386ACC (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x140386DE8 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140386E1C (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x140387E14 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406737DC (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x140B9C144 (BgpRasInitializeRasterizer.c)
 *     FopReadNamingTable @ 0x140B9C740 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140B9C868 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140B9C8D8 (FopGetTableOffsetAndSize.c)
 *     FopReadMappingTable @ 0x140B9CAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B9CC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B9CE00 (FopReadCmapTable.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
