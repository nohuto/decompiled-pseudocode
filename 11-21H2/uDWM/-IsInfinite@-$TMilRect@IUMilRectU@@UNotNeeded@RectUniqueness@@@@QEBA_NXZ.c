/*
 * XREFs of ?IsInfinite@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800BBDAC
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BBBFC (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (unsigned int)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::sc_rcInfinite
      && a1[2] >= (unsigned int)dword_1801423E8
      || a1[1] <= (unsigned int)dword_1801423E4 && a1[3] >= (unsigned int)dword_1801423EC;
}
