/*
 * XREFs of ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180080884
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18003B418 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180041B9C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?GetMinSupportedMax2DTextureSize@CComposition@@QEBA?BIXZ @ 0x180080D40 (-GetMinSupportedMax2DTextureSize@CComposition@@QEBA-BIXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180080D68 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CBackdropVisualImage::RequireClippedBounds(__int64 a1)
{
  CComposition *v1; // rcx
  float *v2; // r8
  float MinSupportedMax2DTextureSize; // xmm1_4
  bool result; // al

  result = (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a1)
        || (MinSupportedMax2DTextureSize = (float)(int)CComposition::GetMinSupportedMax2DTextureSize(v1),
            (float)(v2[2] - *v2) > MinSupportedMax2DTextureSize)
        || (float)(v2[3] - v2[1]) > MinSupportedMax2DTextureSize;
  return result;
}
