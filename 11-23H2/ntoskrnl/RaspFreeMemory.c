/*
 * XREFs of RaspFreeMemory @ 0x140386264
 * Callers:
 *     BgpRasPrintGlyph @ 0x140385904 (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x140385E6C (RaspRectangleDestroy.c)
 *     RaspGetXExtent @ 0x140385E84 (RaspGetXExtent.c)
 *     RaspRasterize @ 0x1403860A0 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1403861A0 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x140386338 (RaspGetUnscaledGlyphData.c)
 *     RaspInitializeGlyphData @ 0x140386FFC (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1406739FC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140673D2C (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140674090 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140AEDB20 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory(a1);
  return result;
}
