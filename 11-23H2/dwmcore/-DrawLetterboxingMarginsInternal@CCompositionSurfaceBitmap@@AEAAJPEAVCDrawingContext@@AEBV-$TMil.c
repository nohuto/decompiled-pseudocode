/*
 * XREFs of ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180012244
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800120BC (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180226A64 (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002031C (-GetScaledLetterboxingMargins@CCompositionSurfaceBitmap@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18008F1C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800DD870 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x180226868 (-DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawLetterboxingMarginsInternal(
        __int64 a1,
        CDrawingContext *a2,
        float *a3,
        const struct CMILMatrix *a4)
{
  unsigned int v7; // edi
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  int v12; // eax
  unsigned int v13; // ecx
  __int128 v14; // [rsp+38h] [rbp-50h] BYREF
  float v15[4]; // [rsp+48h] [rbp-40h] BYREF

  v14 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)CCompositionSurfaceBitmap::GetScaledLetterboxingMargins(a1, &v14) )
  {
    CDrawingContext::PushTransformInternal(a2, 0LL, a4, 1, 1);
    v9 = a3[1] - *((float *)&v14 + 1);
    v15[0] = *a3 - *(float *)&v14;
    v10 = *((float *)&v14 + 2) + a3[2];
    v15[1] = v9;
    v11 = *((float *)&v14 + 3) + a3[3];
    v15[2] = v10;
    v15[3] = v11;
    v12 = CCompositionSurfaceBitmap::DrawContentBorders(a2, v15, a3, &stru_180386510);
    v7 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x311u, 0LL);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v7;
}
