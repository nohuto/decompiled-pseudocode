/*
 * XREFs of ?IsInfinite@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BFC84
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BFAD4 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (unsigned int)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::sc_rcInfinite
      && a1[2] >= (unsigned int)dword_180147B88
      || a1[1] <= (unsigned int)dword_180147B84 && a1[3] >= (unsigned int)dword_180147B8C;
}
