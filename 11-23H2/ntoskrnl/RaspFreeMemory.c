/*
 * XREFs of RaspFreeMemory @ 0x140386084
 * Callers:
 *     BgpRasPrintGlyph @ 0x140385724 (BgpRasPrintGlyph.c)
 *     RaspRectangleDestroy @ 0x140385C8C (RaspRectangleDestroy.c)
 *     RaspGetXExtent @ 0x140385CA4 (RaspGetXExtent.c)
 *     RaspRasterize @ 0x140385EC0 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140385FC0 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x140386158 (RaspGetUnscaledGlyphData.c)
 *     RaspInitializeGlyphData @ 0x140386E1C (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1406734AC (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1406737DC (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140673B40 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x140AEDB20 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403860A0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory(a1);
  return result;
}
