/*
 * XREFs of ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000923C (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800093A4 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18008BB4C (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18018C6F0 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018CBA8 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801B0B14 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x1801B4564 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801D6A58 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A5C4C (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ??$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D059C (--$ProducesUniformZ@$0A@@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::IsIdentity<0>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  char v5; // dl
  __int64 v6; // rcx
  char v7; // r9
  char v8; // r10
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  char v12; // al
  float v13; // xmm0_4
  char v14; // al

  LOBYTE(a2) = 1;
  LOBYTE(a4) = -33;
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a1 + 12) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 28) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(a1 + 60) & _xmm)) == 1.0 )
  {
    *(_BYTE *)(a1 + 65) &= ~0x20u;
    v4 = 1;
    *(_BYTE *)(a1 + 65) |= 0x10u;
  }
  else
  {
    v4 = 0;
  }
  LOBYTE(a3) = (float)(COERCE_FLOAT(*(_DWORD *)(a1 + 44) & _xmm) * 61440.0) == 0.0;
  if ( ((unsigned __int8)a3 & (unsigned __int8)v4) == 0 )
    return 0;
  if ( *(float *)(a1 + 32) != 0.0 )
    return 0;
  if ( *(float *)(a1 + 36) != 0.0 )
    return 0;
  *(_BYTE *)(a1 + 65) &= ~8u;
  *(_BYTE *)(a1 + 65) |= 4u;
  if ( !(unsigned __int8)CMILMatrix::ProducesUniformZ<0>(a1, a2, a3, a4) )
    return 0;
  if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v6 + 12) & _xmm) * 61440.0)
                     + (float)(COERCE_FLOAT(*(_DWORD *)(v6 + 28) & _xmm) * 61440.0))
             + COERCE_FLOAT(*(_DWORD *)(v6 + 60) & _xmm)) != v10 )
    return 0;
  *(_BYTE *)(v6 + 65) &= v7;
  *(_BYTE *)(v6 + 65) |= v8;
  if ( *(float *)(v6 + 4) != v9 )
    return 0;
  if ( *(float *)(v6 + 16) != v9 )
    return 0;
  v11 = *(float *)v6;
  v12 = *(_BYTE *)(v6 + 64) & 0x3F | 0x40;
  *(_BYTE *)(v6 + 64) = v12;
  if ( v11 != v10 )
    return 0;
  if ( *(float *)(v6 + 20) != v10 )
    return 0;
  v13 = *(float *)(v6 + 40);
  v14 = v8 | v7 & v12;
  *(_BYTE *)(v6 + 64) = v14;
  if ( v13 != v10 || *(float *)(v6 + 48) != v9 || *(float *)(v6 + 52) != v9 || *(float *)(v6 + 56) != v9 )
    return 0;
  *(_BYTE *)(v6 + 64) = v5 | v14 & 0xFD;
  return v5;
}
