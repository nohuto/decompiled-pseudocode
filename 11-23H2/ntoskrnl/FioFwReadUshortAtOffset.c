/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140386FC8
 * Callers:
 *     RaspLoadBearings @ 0x140386CAC (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x140386F2C (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x140386FFC (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1403879DC (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1406739FC (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x140674090 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1403873A8 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
