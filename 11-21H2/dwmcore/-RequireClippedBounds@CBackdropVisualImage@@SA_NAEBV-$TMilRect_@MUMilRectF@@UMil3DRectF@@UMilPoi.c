/*
 * XREFs of ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B7C08
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800B73B8 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x180086DD4 (-GetMinSupportedMax2DTextureSize@CComposition@@QEBA-BIXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CBackdropVisualImage::RequireClippedBounds(float *a1)
{
  CComposition *v1; // rcx
  float *v2; // r8
  float MinSupportedMax2DTextureSize; // xmm1_4
  bool result; // al

  result = 1;
  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a1) )
  {
    MinSupportedMax2DTextureSize = (float)(int)CComposition::GetMinSupportedMax2DTextureSize(v1);
    if ( (float)(v2[2] - *v2) <= MinSupportedMax2DTextureSize && (float)(v2[3] - v2[1]) <= MinSupportedMax2DTextureSize )
      return 0;
  }
  return result;
}
