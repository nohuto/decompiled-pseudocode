/*
 * XREFs of ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180052010
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A984 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000B384 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x1800194F4 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022260 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18003D460 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051334 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800523D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800542D4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180057C00 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800667E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800690A0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18008EFCC (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E1180 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18013010E (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801D7440 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180211E8C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180212EE4 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x180213238 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025A274 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A96F4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800539C0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180053AB0 (--$IsTranslateIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180054020 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800579A0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18006A3E0 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180070318 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18008E8AC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CC774 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800CD9B8 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D0498 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFE94 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFEC8 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18026FA2C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

void __fastcall CMILMatrix::Multiply(const struct CMILMatrix *a1, const struct CMILMatrix *a2, struct CMILMatrix *a3)
{
  int v5; // eax
  char v6; // al
  char v7; // al
  bool v8; // si
  bool v9; // dl
  bool v10; // dl
  char v11; // al
  float v12; // xmm3_4
  CMILMatrix *v13; // rcx
  float v14; // xmm2_4
  float v15; // xmm1_4
  int v16; // eax
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm8_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  __int128 v23; // xmm1
  int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // xmm1_4
  float v31; // xmm6_4
  float v32; // xmm7_4
  int v33; // xmm0_4
  int v34; // xmm1_4
  int v35; // xmm0_4
  int v36; // xmm1_4
  int v37; // xmm0_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  _OWORD *v43; // rax
  __int128 v44; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+58h] [rbp-B0h]
  __int128 v46; // [rsp+68h] [rbp-A0h]
  __int128 v47; // [rsp+78h] [rbp-90h]
  int v48; // [rsp+88h] [rbp-80h]
  _DWORD v49[6]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v50[6]; // [rsp+B0h] [rbp-58h] BYREF
  float v51[6]; // [rsp+C8h] [rbp-40h] BYREF

  if ( a3 == a2 )
  {
    v23 = *((_OWORD *)a1 + 1);
    v24 = *((_DWORD *)a1 + 16);
    v44 = *(_OWORD *)a1;
    v25 = *((_OWORD *)a1 + 2);
    v48 = v24;
    v45 = v23;
    v26 = *((_OWORD *)a1 + 3);
    v46 = v25;
    v47 = v26;
    CMILMatrix::Multiply((CMILMatrix *)&v44, a2);
    v27 = v45;
    v16 = v48;
    *(_OWORD *)a3 = v44;
    v28 = v46;
    *((_OWORD *)a3 + 1) = v27;
    v29 = v47;
    *((_OWORD *)a3 + 2) = v28;
    *((_OWORD *)a3 + 3) = v29;
    goto LABEL_25;
  }
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a1 + 3);
  v5 = *((_DWORD *)a1 + 16);
  *((_DWORD *)a3 + 16) = v5;
  v6 = (char)((_BYTE)v5 << 6) >> 6;
  if ( v6 )
  {
    v8 = 1;
    v10 = v6 == 1;
  }
  else
  {
    v7 = (char)(16 * *((_BYTE *)a3 + 65)) >> 6;
    if ( v7 )
    {
      v8 = 1;
      v9 = v7 == 1;
    }
    else
    {
      v8 = 1;
      v9 = (unsigned __int8)CMILMatrix::IsAffine<1>(a3, 0LL)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 8) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 9) - 0.0) & _xmm) < 0.000081380211;
      *((_BYTE *)a3 + 65) &= 0xF3u;
      *((_BYTE *)a3 + 65) |= (-4 - 8 * v9) & 0xC;
    }
    v10 = v9
       && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(a3)
       && (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a3)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 10) - 1.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 12) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 13) - 0.0) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a3 + 14) - 0.0) & _xmm) < 0.000081380211;
    *((_BYTE *)a3 + 64) &= 0xFCu;
    *((_BYTE *)a3 + 64) |= (-1 - 2 * v10) & 3;
  }
  if ( v10 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
    v16 = *((_DWORD *)a2 + 16);
LABEL_25:
    *((_DWORD *)a3 + 16) = v16;
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(a2) )
    return;
  v11 = (char)(16 * *((_BYTE *)a2 + 65)) >> 6;
  if ( v11 )
  {
    v8 = v11 == 1;
  }
  else
  {
    if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(a2, 0LL)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 8) - 0.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 9) - 0.0) & _xmm) >= 0.000081380211 )
    {
      v8 = 0;
    }
    *((_BYTE *)a2 + 65) &= 0xF3u;
    *((_BYTE *)a2 + 65) |= (-4 - 8 * v8) & 0xC;
  }
  if ( v8
    && (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(a2)
    && (unsigned __int8)CMILMatrix::IsTranslateIgnoreZ<1>(a2)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a2 + 10) - 1.0) & _xmm) < 0.000081380211 )
  {
    v12 = *((float *)a2 + 14);
    v13 = a3;
    v14 = *((float *)a2 + 13);
    v15 = *((float *)a2 + 12);
LABEL_21:
    CMILMatrix::Translate(v13, v15, v14, v12);
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(a3) )
  {
    v17 = *((float *)a3 + 12);
    v18 = *((float *)a3 + 13);
    v19 = *((float *)a3 + 14);
    *(_OWORD *)a3 = *(_OWORD *)a2;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a2 + 16);
    CMILMatrix::PrependTranslate(a3, v17, v18, v19);
    return;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a2) )
  {
    v20 = *((float *)a2 + 12);
    v21 = *((float *)a2 + 13);
    v22 = *((float *)a2 + 14);
    CMILMatrix::Scale(a3, *(float *)a2, *((float *)a2 + 5), *((float *)a2 + 10));
    v12 = v22;
    v14 = v21;
    v15 = v20;
    goto LABEL_21;
  }
  if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a3) && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a2) )
  {
    v30 = *((_DWORD *)a3 + 1);
    v31 = *((float *)a3 + 10);
    v32 = *((float *)a3 + 14);
    v50[0] = *(_DWORD *)a3;
    v33 = *((_DWORD *)a3 + 4);
    v50[1] = v30;
    v34 = *((_DWORD *)a3 + 5);
    v50[2] = v33;
    v35 = *((_DWORD *)a3 + 12);
    v50[3] = v34;
    v36 = *((_DWORD *)a3 + 13);
    v50[4] = v35;
    v37 = *(_DWORD *)a2;
    v50[5] = v36;
    v38 = *((_DWORD *)a2 + 1);
    v49[0] = v37;
    v39 = *((_DWORD *)a2 + 4);
    v49[1] = v38;
    v40 = *((_DWORD *)a2 + 5);
    v49[2] = v39;
    v41 = *((_DWORD *)a2 + 12);
    v49[3] = v40;
    v42 = *((_DWORD *)a2 + 13);
    v49[4] = v41;
    v49[5] = v42;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)v51,
      (const struct D2D1::Matrix3x2F *)v50,
      (const struct D2D1::Matrix3x2F *)v49);
    CMILMatrix::Set2DAffineMatrix(a3, v51[0], v51[1], v51[2], v51[3], v51[4], v51[5]);
    *((float *)a3 + 10) = v31 * *((float *)a2 + 10);
    *((float *)a3 + 14) = (float)(v32 * *((float *)a2 + 10)) + *((float *)a2 + 14);
  }
  else
  {
    v43 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v44, a3, a2);
    *(_OWORD *)a3 = *v43;
    *((_OWORD *)a3 + 1) = v43[1];
    *((_OWORD *)a3 + 2) = v43[2];
    *((_OWORD *)a3 + 3) = v43[3];
    *((_DWORD *)a3 + 16) = 0;
  }
}
