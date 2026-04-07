/*
 * XREFs of ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BBB74
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBBFC (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180108C20 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
