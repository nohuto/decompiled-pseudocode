/*
 * XREFs of ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DE2C
 * Callers:
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008560 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A984 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000DCF0 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1800122DC (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180041B9C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060300 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007DC00 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800AE77C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1801D2E98 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D2F38 (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z @ 0x1801D302C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEBAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D42C4 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCColorTransformResource@@@Z @ 0x1801D6150 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022CD38 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026B550 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007E0A4 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetClipBoundsWorld(__int64 a1, float *a2)
{
  void (__fastcall ***v4)(_QWORD, _DWORD *); // rcx
  __int64 v5; // rax
  int v6; // eax
  __int128 v7; // xmm0
  __int64 result; // rax
  __int64 v9; // r9
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm4_4
  _DWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v19; // [rsp+28h] [rbp-20h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL)
                                               + *(_QWORD *)(a1 + 32)
                                               + 8LL);
  (**v4)(v4, v18);
  *(_QWORD *)&v19 = 0LL;
  v5 = *(_QWORD *)(a1 + 904);
  *((float *)&v19 + 2) = (float)v18[0];
  *((float *)&v19 + 3) = (float)v18[1];
  if ( v5 == *(_QWORD *)(a1 + 896) || !*(_QWORD *)(v5 - 184) )
  {
    v7 = v19;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 3184);
    if ( !v6 )
    {
      *(_OWORD *)a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      goto LABEL_6;
    }
    v7 = *(_OWORD *)(*(_QWORD *)(a1 + 3200) + 16LL * (unsigned int)(v6 - 1));
  }
  *(_OWORD *)a2 = v7;
LABEL_6:
  result = *(_QWORD *)(a1 + 904);
  if ( result != *(_QWORD *)(a1 + 896) && *(_QWORD *)(result - 168) )
  {
    v19 = 0LL;
    result = CBaseClipStack::Top(a1 + 3216, &v19);
    v10 = *a2;
    v11 = *(float *)&v19;
    if ( *(float *)&v19 > *a2 )
    {
      *(_DWORD *)a2 = v19;
      v10 = v11;
    }
    v12 = a2[1];
    v13 = *((float *)&v19 + 1);
    if ( *((float *)&v19 + 1) > v12 )
    {
      a2[1] = *((float *)&v19 + 1);
      v12 = v13;
    }
    v14 = a2[2];
    v15 = *((float *)&v19 + 2);
    if ( v14 > *((float *)&v19 + 2) )
    {
      a2[2] = *((float *)&v19 + 2);
      v14 = v15;
    }
    v16 = a2[3];
    v17 = *((float *)&v19 + 3);
    if ( v16 > *((float *)&v19 + 3) )
    {
      a2[3] = *((float *)&v19 + 3);
      v16 = v17;
    }
    if ( v14 <= v10 || v16 <= v12 )
    {
      *((_QWORD *)a2 + 1) = v9;
      *(_QWORD *)a2 = v9;
    }
  }
  return result;
}
