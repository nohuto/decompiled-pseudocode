/*
 * XREFs of ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180004650 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x18009507C (-UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801AFF60 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetContentOffset@CRemoteAppRenderTarget@@IEBA?AUD2D_POINT_2F@@XZ @ 0x1801C2538 (-GetContentOffset@CRemoteAppRenderTarget@@IEBA-AUD2D_POINT_2F@@XZ.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801C27E8 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801C2BF8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x180243BB0 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x180049050 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800D59F0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 */

char __fastcall CVisual::GetRootTransform(CVisual *this, struct CMILMatrix *a2, char a3, char a4)
{
  char v7; // si
  char v8; // cl
  float v9; // xmm2_4
  CTransform3D *v10; // rcx
  CTransform3D *Transform3DEffectNoRef; // rbp
  const struct CMILMatrix *Matrix; // rax
  int v14; // xmm0_4
  int v15; // xmm1_4
  char v16; // al
  const struct CMILMatrix *v17; // rax

  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  v7 = 0;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  v8 = *((_BYTE *)a2 + 65) & 0xC0 | 0x17;
  *((_BYTE *)a2 + 65) = v8;
  *((_BYTE *)a2 + 64) = 85;
  if ( !a4 )
  {
    v9 = *((float *)this + 31);
    if ( v9 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      v14 = *((_DWORD *)this + 32);
      v15 = *((_DWORD *)this + 30);
      v7 = 1;
      *((float *)a2 + 12) = v9;
      *((_DWORD *)a2 + 13) = v14;
      *((_DWORD *)a2 + 14) = v15;
      *((_BYTE *)a2 + 64) = 84;
      *((_BYTE *)a2 + 65) = v8;
    }
    v10 = (CTransform3D *)*((_QWORD *)this + 30);
    if ( v10 )
    {
      Matrix = CTransform3D::GetMatrix(v10, (const struct D2D_SIZE_F *)((char *)this + 140));
      CMILMatrix::Multiply(Matrix, a2, a2);
      v7 = 1;
    }
  }
  if ( !a3 )
  {
    Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
    if ( Transform3DEffectNoRef && *((_DWORD *)this + 27) != 2
      || CVisual::IsSimple3DRootOrHasEffects(this, *((const struct CVisual **)this + 11)) )
    {
      v7 = 1;
      v16 = *((_BYTE *)a2 + 64) | 3;
      *((_QWORD *)a2 + 4) = 0LL;
      *((_QWORD *)a2 + 5) = 0LL;
      *((_BYTE *)a2 + 64) = v16 & 0xF3;
    }
    if ( Transform3DEffectNoRef )
    {
      v17 = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)this + 140));
      CMILMatrix::Multiply(v17, a2, a2);
      return 1;
    }
  }
  return v7;
}
