/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800827A4
 * Callers:
 *     ?InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@PEBU4@@Z @ 0x180030238 (-InitializeFromSurface@CBitmapInfoBack@DirectComposition@@QEAAXPEAVCAtlasSurface@2@AEBUtagRECT@@.c)
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 *     ?CalcScrollBltRects@DirectComposition@@YA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@0HHPEAV2@1@Z @ 0x1800F915C (-CalcScrollBltRects@DirectComposition@@YA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800FE370 (-Scroll@CVirtualSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(int *a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  int v7; // r10d
  int v8; // r11d
  int v9; // eax
  char result; // al

  v2 = *a2;
  v3 = *a1;
  if ( *a2 > *a1 )
  {
    *a1 = v2;
    v3 = v2;
  }
  v4 = a2[1];
  v5 = a1[1];
  if ( v4 > v5 )
  {
    a1[1] = v4;
    v5 = v4;
  }
  v6 = a2[2];
  v7 = a1[2];
  if ( v6 < v7 )
  {
    a1[2] = v6;
    v7 = v6;
  }
  v8 = a2[3];
  v9 = a1[3];
  if ( v8 < v9 )
  {
    a1[3] = v8;
    v9 = v8;
  }
  if ( v7 > v3 && v9 > v5 )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
