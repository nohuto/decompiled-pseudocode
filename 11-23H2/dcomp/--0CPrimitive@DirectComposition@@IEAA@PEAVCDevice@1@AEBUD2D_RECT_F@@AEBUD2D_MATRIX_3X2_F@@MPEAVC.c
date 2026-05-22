/*
 * XREFs of ??0CPrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@@Z @ 0x180032448
 * Callers:
 *     ??0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@34_N6@Z @ 0x180031750 (--0CTexturedRectanglePrimitive@DirectComposition@@IEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MAT.c)
 *     ??0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAVCVirtualSurface@1@4_N@Z @ 0x18003B3F4 (--0CVirtualSurfacePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX.c)
 *     ??0CDynamicColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@@Z @ 0x1800F7A40 (--0CDynamicColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D.c)
 *     ??0CSolidColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAVCBitmapInfoFront@1@PEBU4@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800FB45C (--0CSolidColorRectanglePrimitive@DirectComposition@@AEAA@PEAVCDevice@1@AEBUD2D_RECT_F@@AEBUD2D_M.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800326A0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007E478 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitive::CPrimitive(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  float *v8; // rsi
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  char v12; // dl
  __int64 v13; // r11
  char v14; // dl
  float *v15; // rax
  float v16; // xmm2_4
  unsigned int v17; // xmm0_4
  __int64 v18; // rcx
  int v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  __int64 result; // rax
  char v37; // dl
  char v38; // al
  __int128 v39; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+30h] [rbp-48h]
  int v41; // [rsp+34h] [rbp-44h]
  float v42; // [rsp+38h] [rbp-40h]
  int v43; // [rsp+3Ch] [rbp-3Ch]

  *(_DWORD *)(a1 + 8) = 0;
  v8 = (float *)(a1 + 72);
  *(_QWORD *)a1 = &DirectComposition::CPrimitive::`vftable'{for `CMILCOMBaseT<IDCompositionPrimitivePartner>'};
  *(_QWORD *)(a1 + 16) = &DirectComposition::CSolidColorRectanglePrimitive::`vftable'{for `DirectComposition::CDirtyListener'};
  *(_OWORD *)(a1 + 72) = *(_OWORD *)a4;
  v10 = *(_QWORD *)(a4 + 16);
  *(_DWORD *)(a1 + 96) = a5;
  *(_QWORD *)(a1 + 88) = v10;
  v11 = *a3;
  *(_DWORD *)(a1 + 180) = a8;
  *(_DWORD *)(a1 + 200) = -1;
  *(_OWORD *)(a1 + 136) = v11;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  *(_DWORD *)(a1 + 204) = -1;
  *(_DWORD *)(a1 + 208) = -1;
  if ( D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)(a1 + 72)) )
  {
    v14 = v12 | 6;
  }
  else
  {
    v37 = v12 & 0xFB;
    if ( (COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 76)) & _xmm) > 9.999999717180685e-10
       || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 80)) & _xmm) > 9.999999717180685e-10)
      && (COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v8) & _xmm) > 9.999999717180685e-10
       || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 84)) & _xmm) > 9.999999717180685e-10) )
    {
      v38 = 0;
    }
    else
    {
      v38 = 2;
    }
    v14 = v38 | v37 & 0xFD;
  }
  *(_BYTE *)(a1 + 176) = v14;
  if ( a6 )
  {
    if ( a7 )
    {
      *(_OWORD *)(a1 + 112) = *(_OWORD *)a7;
      *(_QWORD *)(a1 + 128) = *(_QWORD *)(a7 + 16);
    }
    else
    {
      *(_DWORD *)(a1 + 112) = 1065353216;
      *(_DWORD *)(a1 + 124) = 1065353216;
    }
    if ( (*(_BYTE *)(a6 + 112) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 116) = 0;
      *(_DWORD *)(a1 + 124) = 0;
      *(_DWORD *)(a1 + 132) = 1056964608;
    }
  }
  *(_QWORD *)(a1 + 40) = v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  *(_QWORD *)(a1 + 104) = a6;
  if ( a6 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a6 + 8));
  v15 = (float *)&v39 + 2;
  v16 = *(float *)(a1 + 140);
  v17 = *(_DWORD *)(a1 + 144);
  v18 = 3LL;
  v19 = *(_DWORD *)(a1 + 148);
  v42 = *(float *)(a1 + 136);
  v20 = v42 * v8[1];
  *((_QWORD *)&v39 + 1) = __PAIR64__(LODWORD(v16), v17);
  v40 = v17;
  v21 = v16 * v8[2];
  v22 = v16 * v8[3];
  v41 = v19;
  v43 = v19;
  v23 = (float)(v42 + v21) + v8[4];
  v24 = (float)(v20 + v22) + v8[5];
  v25 = v23;
  v26 = v24;
  do
  {
    v27 = *v15;
    v28 = v15[1];
    v29 = *v15;
    v15 += 2;
    v30 = (float)((float)(v29 * *v8) + (float)(v28 * v8[2])) + v8[4];
    v31 = fmaxf(v30, v25);
    v32 = fminf(v30, v23);
    v33 = (float)((float)(v27 * v8[1]) + (float)(v28 * v8[3])) + v8[5];
    v34 = fmaxf(v33, v26);
    v35 = fminf(v33, v24);
    v25 = v31;
    v23 = v32;
    v26 = v34;
    v24 = v35;
    --v18;
  }
  while ( v18 );
  result = a1;
  *(_QWORD *)&v39 = __PAIR64__(LODWORD(v35), LODWORD(v32));
  *((_QWORD *)&v39 + 1) = __PAIR64__(LODWORD(v34), LODWORD(v31));
  *(_OWORD *)(a1 + 184) = v39;
  return result;
}
