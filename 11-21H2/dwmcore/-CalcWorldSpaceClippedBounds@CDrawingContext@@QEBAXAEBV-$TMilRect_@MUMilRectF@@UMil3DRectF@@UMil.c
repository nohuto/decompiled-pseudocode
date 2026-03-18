/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800D842C
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18001102C (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_6991071fcff892ffb13e08e0d7abc234___ @ 0x1801AF264 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801D8EC0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, __int64 a2, __int64 a3)
{
  const struct CMILMatrix *TopByReference; // rax
  float *v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  v15 = 0LL;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 368));
  CMILMatrix::Transform2DBoundsHelper<1>((__int64)TopByReference, v7, v6, v7);
  result = CDrawingContext::GetClipBoundsWorld(a1, &v15);
  v9 = *(float *)a3;
  v10 = *(float *)&v15;
  if ( *(float *)&v15 > *(float *)a3 )
  {
    *(_DWORD *)a3 = v15;
    v9 = v10;
  }
  if ( *((float *)&v15 + 1) > *(float *)(a3 + 4) )
    *(_DWORD *)(a3 + 4) = DWORD1(v15);
  v11 = *(float *)(a3 + 8);
  v12 = *((float *)&v15 + 2);
  if ( v11 > *((float *)&v15 + 2) )
  {
    *(_DWORD *)(a3 + 8) = DWORD2(v15);
    v11 = v12;
  }
  v13 = *(float *)(a3 + 12);
  v14 = *((float *)&v15 + 3);
  if ( v13 > *((float *)&v15 + 3) )
  {
    *(_DWORD *)(a3 + 12) = HIDWORD(v15);
    v13 = v14;
    v11 = *(float *)(a3 + 8);
  }
  if ( v11 <= v9 || v13 <= *(float *)(a3 + 4) )
  {
    result = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
