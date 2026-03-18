/*
 * XREFs of ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800F49F0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180041B9C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z @ 0x1800A9DF0 (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXAEBVRenderTargetInfo@@@Z.c)
 *     ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x1800ACB40 (-GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA-AVRenderTargetInfo@@XZ.c)
 */

void __fastcall CBackdropVisualImage::InvalidateAllBlurCaches(CBackdropVisualImage *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rbx
  const struct RenderTargetInfo *RenderTargetInfo; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 25);
  for ( i = (__int64 *)*((_QWORD *)this + 24); i != v1; ++i )
  {
    RenderTargetInfo = (const struct RenderTargetInfo *)CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(
                                                          *i,
                                                          (__int64)v5);
    CBackdropVisualImage::InvalidateBlurCache(this, RenderTargetInfo);
  }
}
