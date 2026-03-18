/*
 * XREFs of ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x1801D9590
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800F3278 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801D9CB8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 */

_DWORD *__fastcall CTreeEffectLayer::GetDestToTexSpaceTransform(__int64 a1, _DWORD *a2, unsigned int a3)
{
  void (__fastcall ***v6)(_QWORD, int *); // rcx
  float v7; // xmm1_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  __int64 v10; // rax
  float v11; // xmm3_4
  float v12; // xmm4_4
  int v13; // xmm0_4
  _DWORD *result; // rax
  float v15; // xmm1_4
  float v16; // xmm3_4
  int v17; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  int v20; // [rsp+28h] [rbp-49h] BYREF
  int v21; // [rsp+2Ch] [rbp-45h]
  float v22; // [rsp+30h] [rbp-41h] BYREF
  int v23; // [rsp+34h] [rbp-3Dh]
  int v24; // [rsp+38h] [rbp-39h]
  float v25; // [rsp+3Ch] [rbp-35h]
  float v26; // [rsp+40h] [rbp-31h]
  float v27; // [rsp+44h] [rbp-2Dh]
  __int128 v28; // [rsp+48h] [rbp-29h] BYREF
  __int64 v29; // [rsp+58h] [rbp-19h]
  _BYTE v30[24]; // [rsp+60h] [rbp-11h] BYREF

  v6 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 16LL)
                                            + *(_QWORD *)(a1 + 8)
                                            + 8LL);
  (**v6)(v6, &v20);
  v7 = *(float *)(a1 + 280);
  v8 = (float)(*(float *)(a1 + 196) - (float)*(int *)(a1 + 16)) * v7;
  v9 = (float)(*(float *)(a1 + 200) - (float)*(int *)(a1 + 20)) * v7;
  if ( CLayerVisual::GetAutomaticBoundsExpansion(*(CLayerVisual **)(a1 + 256)) )
  {
    v8 = *(float *)(a1 + 228) - (float)*(int *)(a1 + 16);
    v9 = *(float *)(a1 + 232) - (float)*(int *)(a1 + 20);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 112LL) + 24LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 248) + 112LL),
          a3);
  v28 = *(_OWORD *)v10;
  v29 = *(_QWORD *)(v10 + 16);
  if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v28) )
  {
    D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v28);
    v8 = v8 + *(float *)&v29;
    v9 = v9 + *((float *)&v29 + 1);
    v29 = 0LL;
  }
  v23 = 0;
  v24 = 0;
  v11 = (float)v21;
  v22 = 1.0 / (float)v20;
  v25 = 1.0 / (float)v21;
  v26 = 0.0 - (float)(v22 * 0.0);
  v27 = 0.0 - (float)(v25 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)v30,
    (const struct D2D1::Matrix3x2F *)&v22,
    (const struct D2D1::Matrix3x2F *)&v28);
  *(float *)&v29 = v8 / v12;
  *((float *)&v29 + 1) = v9 / v11;
  v28 = *(_OWORD *)&_xmm;
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v22,
    (const struct D2D1::Matrix3x2F *)v30,
    (const struct D2D1::Matrix3x2F *)&v28);
  v13 = v24;
  result = a2;
  v15 = v25;
  v16 = v22;
  v17 = v23;
  a2[2] = 0;
  a2[5] = 0;
  a2[3] = v13;
  v18 = v26;
  *((float *)a2 + 4) = v15;
  v19 = v27;
  *((float *)a2 + 6) = v18;
  *((float *)a2 + 7) = v19;
  *(float *)a2 = v16;
  a2[1] = v17;
  a2[8] = 1065353216;
  return result;
}
