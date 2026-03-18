/*
 * XREFs of ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E0D4
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18001DE54 (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800FF650 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801C8B90 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801C9C60 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801E16EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18001E4B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UniformDpiProgrammingModel@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001E5BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UniformDpiProgrammingModel@@@details@wil@.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18001E644 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800555F0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x180260AC8 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180260B00 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMonitorTransform::Initialize(__int64 a1, unsigned int *a2, __int64 a3, float a4, int a5, int *a6)
{
  char v6; // di
  __int64 v10; // rsi
  char v11; // al
  char v12; // al
  float v13; // xmm0_4
  unsigned int v14; // eax
  unsigned int v15; // eax
  float v16; // xmm1_4
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // eax
  float v25; // xmm0_4
  int v26; // eax
  bool v27; // al
  float v28; // xmm2_4
  float v29; // xmm1_4
  int v30; // ecx
  char v31; // [rsp+28h] [rbp-99h]
  float v32; // [rsp+2Ch] [rbp-95h] BYREF
  float v33; // [rsp+30h] [rbp-91h] BYREF
  _BYTE v34[64]; // [rsp+38h] [rbp-89h] BYREF
  int v35; // [rsp+78h] [rbp-49h]
  float v36; // [rsp+88h] [rbp-39h] BYREF
  float v37; // [rsp+8Ch] [rbp-35h]
  float v38; // [rsp+90h] [rbp-31h]
  float v39; // [rsp+94h] [rbp-2Dh]
  __int128 v40; // [rsp+98h] [rbp-29h] BYREF

  v36 = 0.0;
  v6 = 0;
  v37 = 0.0;
  if ( !*a2 || (v31 = 1, !a2[1]) )
    v31 = 0;
  *(float *)a1 = a4;
  *(_OWORD *)(a1 + 4) = *(_OWORD *)a3;
  if ( a6 )
  {
    *(_OWORD *)(a1 + 20) = *(_OWORD *)a6;
  }
  else
  {
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_QWORD *)(a1 + 20) = 0LL;
  }
  v10 = a1 + 48;
  *(_DWORD *)(a1 + 44) = a5;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 1065353216LL;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 88) = 1065353216LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 1065353216;
  v11 = *(_BYTE *)(a1 + 113);
  *(_BYTE *)(a1 + 112) = 85;
  *(_BYTE *)(a1 + 113) = v11 & 0xC0 | 0x17;
  *(_QWORD *)(a1 + 184) = 1065353216LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 204) = 1065353216LL;
  *(_QWORD *)(a1 + 212) = 0LL;
  *(_DWORD *)(a1 + 220) = 0;
  *(_QWORD *)(a1 + 224) = 1065353216LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 1065353216;
  v12 = *(_BYTE *)(a1 + 249) & 0xD7;
  *(_BYTE *)(a1 + 248) = 85;
  *(_BYTE *)(a1 + 249) = v12 | 0x17;
  v13 = (float)((float)(*(float *)(a3 + 8) - *(float *)a3) * a4) + 6291456.25;
  v32 = v13;
  *(_DWORD *)(a1 + 36) = (int)(LODWORD(v13) << 10) >> 11;
  v32 = (float)((float)(*(float *)(a3 + 12) - *(float *)(a3 + 4)) * a4) + 6291456.25;
  *(_DWORD *)(a1 + 40) = (int)(LODWORD(v32) << 10) >> 11;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UniformDpiProgrammingModel>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_UniformDpiProgrammingModel>::GetImpl'::`2'::impl,
    0LL);
  if ( v31 )
  {
    v14 = *(_DWORD *)(a1 + 36);
    if ( ((a5 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( v14 >= *a2 )
        v14 = *a2;
      *(_DWORD *)(a1 + 36) = v14;
      v15 = *(_DWORD *)(a1 + 40);
      if ( v15 >= a2[1] )
        v15 = a2[1];
    }
    else
    {
      if ( v14 >= a2[1] )
        v14 = a2[1];
      *(_DWORD *)(a1 + 36) = v14;
      v15 = *(_DWORD *)(a1 + 40);
      if ( v15 >= *a2 )
        v15 = *a2;
    }
    *(_DWORD *)(a1 + 40) = v15;
  }
  v16 = (float)*(int *)(a1 + 40);
  v38 = (float)*(int *)(a1 + 36);
  v39 = v16;
  CMILMatrix::InferAffineMatrix(v10, a3, &v36);
  v17 = *(_DWORD *)(v10 + 64);
  v18 = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)v10;
  v19 = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(a1 + 200) = v18;
  v20 = *(_OWORD *)(v10 + 48);
  *(_OWORD *)(a1 + 216) = v19;
  *(_OWORD *)(a1 + 232) = v20;
  *(_DWORD *)(a1 + 248) = v17;
  if ( a5 == 2 )
  {
    CMILMatrix::Rotate270((CMILMatrix *)v10);
    v30 = *(_DWORD *)(a1 + 36);
    v29 = 0.0;
    goto LABEL_38;
  }
  if ( a5 == 3 )
  {
    CMILMatrix::Scale((CMILMatrix *)v10, -1.0, -1.0, 1.0);
    v30 = *(_DWORD *)(a1 + 40);
    v29 = (float)*(int *)(a1 + 36);
LABEL_38:
    v28 = (float)v30;
    goto LABEL_39;
  }
  if ( a5 != 4 )
    goto LABEL_15;
  CMILMatrix::Rotate90((CMILMatrix *)v10);
  v28 = 0.0;
  v29 = (float)*(int *)(a1 + 40);
LABEL_39:
  CMILMatrix::Translate((CMILMatrix *)v10, v29, v28);
LABEL_15:
  if ( a6 )
  {
    v40 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v10, a3, &v40);
    v21 = *a6;
    v35 = 0;
    v22 = (float)v21;
    v23 = (float)a6[1];
    v24 = a6[2];
    v36 = v22;
    v25 = (float)v24;
    v26 = a6[3];
    v37 = v23;
    v38 = v25;
    v39 = (float)v26;
    CMILMatrix::InferAffineMatrix(v34, &v40, &v36);
    CMILMatrix::Multiply((CMILMatrix *)v10, (const struct CMILMatrix *)v34);
  }
  *(_OWORD *)(a1 + 116) = *(_OWORD *)v10;
  *(_OWORD *)(a1 + 132) = *(_OWORD *)(v10 + 16);
  *(_OWORD *)(a1 + 148) = *(_OWORD *)(v10 + 32);
  *(_OWORD *)(a1 + 164) = *(_OWORD *)(v10 + 48);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(v10 + 64);
  CMILMatrix::Invert((CMILMatrix *)(a1 + 116));
  v27 = a6 && v31 && (*a6 || a6[1] || a6[2] != *a2 || a6[3] != a2[1]);
  *(_BYTE *)(a1 + 252) = v27;
  v40 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(v10, a1 + 4, &v40);
  *(_BYTE *)(a1 + 253) = IsPixelAligned((const struct MilRectF *)&v40);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v10, &v32, &v33);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - a4) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v33 - a4) & _xmm) > 0.0000011920929 )
  {
    v6 = 1;
  }
  *(_BYTE *)(a1 + 254) = v6;
}
