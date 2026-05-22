/*
 * XREFs of ?CalcScrollBltRects@DirectComposition@@YA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@0HHPEAV2@1@Z @ 0x1800F915C
 * Callers:
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800827A4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 */

bool __fastcall DirectComposition::CalcScrollBltRects(_OWORD *a1, int *a2, int a3, int a4, __int64 a5, int *a6)
{
  int *v8; // rdx
  int *v9; // rcx

  *(_OWORD *)a6 = *a1;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a6, a2);
  *a6 += a3;
  a6[1] += a4;
  a6[2] += a3;
  a6[3] += a4;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v9, v8);
  *(_OWORD *)a5 = *(_OWORD *)a6;
  *(_DWORD *)a5 -= a3;
  *(_DWORD *)(a5 + 4) -= a4;
  *(_DWORD *)(a5 + 8) -= a3;
  *(_DWORD *)(a5 + 12) -= a4;
  return a6[2] > *a6 && a6[3] > a6[1];
}
