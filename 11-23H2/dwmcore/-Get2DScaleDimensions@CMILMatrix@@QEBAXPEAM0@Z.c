/*
 * XREFs of ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009849C
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18000F990 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1800108F4 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z @ 0x180013A34 (-GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ??0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18003AD54 (--0CShapeDrawingContext@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180049F40 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x180053BBC (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098418 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE224 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180135C2C (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z @ 0x180279EC4 (-GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x18011B62C (sqrtf_0.c)
 */

void __fastcall CMILMatrix::Get2DScaleDimensions(CMILMatrix *this, float *a2, float *a3)
{
  float v6; // xmm6_4
  float v7; // xmm0_4

  v6 = sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v7 = sqrtf_0((float)(*((float *)this + 4) * *((float *)this + 4)) + (float)(*((float *)this + 5) * *((float *)this + 5)));
  *a2 = v6;
  *a3 = v7;
}
