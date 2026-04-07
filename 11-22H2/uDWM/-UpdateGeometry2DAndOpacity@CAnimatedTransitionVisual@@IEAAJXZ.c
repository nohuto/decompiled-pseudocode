/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180025B78
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18001C3E0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x18001430C (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180015310 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180029740 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180038324 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180045468 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180051574 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180052140 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6848 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18010ECDC (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v2; // r13
  char v3; // r12
  char v4; // r14
  char v5; // r15
  char v6; // bl
  int v7; // ecx
  float v8; // xmm9_4
  int v9; // eax
  float v10; // xmm10_4
  float v11; // xmm14_4
  int v12; // ecx
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm11_4
  float v16; // xmm15_4
  int v17; // ecx
  int *v18; // rax
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm13_4
  LONG v22; // edi
  LONG v23; // eax
  __int64 v24; // rbx
  float v25; // xmm12_4
  float v26; // xmm7_4
  float v27; // xmm4_4
  float v28; // xmm6_4
  float v29; // xmm8_4
  struct CBaseImageProxy *v30; // rcx
  int v31; // eax
  unsigned int v32; // ebx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  float v36; // xmm0_4
  const struct D2DVector2 *v37; // r8
  CBaseObject *v38; // rcx
  __int64 v39; // rdx
  int v40; // [rsp+28h] [rbp-E0h]
  CBaseObject *v41; // [rsp+50h] [rbp-B8h] BYREF
  CBaseObject *v42; // [rsp+58h] [rbp-B0h] BYREF
  float v43[2]; // [rsp+60h] [rbp-A8h] BYREF
  float v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v45[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CDrawTileImageInstruction *v46; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v47; // [rsp+80h] [rbp-88h] BYREF
  float v48[4]; // [rsp+90h] [rbp-78h]
  float v49[2]; // [rsp+A0h] [rbp-68h] BYREF
  _MilMatrix3x2D v50; // [rsp+A8h] [rbp-60h] BYREF
  float v51; // [rsp+D8h] [rbp-30h]
  float v52; // [rsp+DCh] [rbp-2Ch]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  float v55; // [rsp+E8h] [rbp-20h] BYREF
  float v56; // [rsp+ECh] [rbp-1Ch]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  float v59; // [rsp+F8h] [rbp-10h]
  float v60; // [rsp+FCh] [rbp-Ch]
  int v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+104h] [rbp-4h]
  int v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+10Ch] [rbp+4h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  float v67; // [rsp+118h] [rbp+10h]
  float v68; // [rsp+11Ch] [rbp+14h]
  int v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+124h] [rbp+1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v2 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v46 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  *(_QWORD *)v48 = *(_QWORD *)((char *)this + 764);
  v47 = *(struct tagRECT *)((char *)this + 856);
  v7 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v8 = (float)*((int *)this + 214);
  v44[0] = v8;
  v9 = 0;
  if ( v7 >= 0 )
    v9 = v7;
  v10 = (float)v9;
  v11 = (float)((float)v9 * *((float *)this + 194)) + v8;
  v49[0] = v11;
  v12 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
  v13 = (float)*((int *)this + 215);
  v45[0] = v13;
  v14 = 0;
  if ( v12 >= 0 )
    v14 = v12;
  v15 = (float)v14;
  v16 = (float)((float)v14 * *((float *)this + 195)) + v13;
  v49[1] = v16;
  v17 = *((_DWORD *)this + 238);
  v18 = (int *)((char *)this + 956);
  if ( v17 || *v18 )
  {
    v19 = v10 / (float)((float)v17 / *((float *)this + 203));
    v20 = v15 / (float)((float)*v18 / *((float *)this + 204));
    v43[0] = v48[0] * v19;
    v21 = v48[1] * v20;
    v22 = RoundToNearestInt((float)((float)((float)v47.left - v11) / v19) + v11);
    v23 = RoundToNearestInt((float)((float)((float)v47.top - v16) / v20) + v16);
    v24 = HIDWORD(*(_QWORD *)&v47.right);
    v25 = (float)((float)((float)((float)((float)v22 - v11) * v19) + v11) - (float)v47.left) * *((float *)this + 191);
    v26 = (float)((float)((float)((float)((float)v23 - v16) * v20) + v16) - (float)v47.top) * *((float *)this + 192);
    v47.left = v22;
    v47.top = v23;
    v47.right = RoundToNearestInt((float)((float)((float)v47.right - v11) / v19) + v11);
    v47.bottom = RoundToNearestInt((float)((float)((float)(int)v24 - v16) / v20) + v16);
    v27 = v48[0] * v19;
    v8 = v44[0];
    v6 = 0;
  }
  else
  {
    v25 = 0.0;
    v26 = 0.0;
    v21 = v48[1];
    v27 = v48[0];
  }
  v28 = (float)(*((_DWORD *)this + 214) + *((_DWORD *)this + 216)) * 0.5;
  v29 = (float)(*((_DWORD *)this + 217) + *((_DWORD *)this + 215)) * 0.5;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v43[0] = v27;
    v43[1] = v21;
    v4 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 197) & _xmm) >= 0.0000011920929 )
  {
    v44[0] = (float)(v10 * *((float *)this + 200)) + v8;
    v44[1] = (float)(v15 * *((float *)this + 201)) + v45[0];
    v3 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 188) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 189) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v25) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v26) & _xmm) >= 0.0000011920929 )
  {
    v45[0] = *((float *)this + 188) - v25;
    v45[1] = *((float *)this + 189) - v26;
    v5 = 1;
  }
  v69 = 0;
  v68 = 0.0;
  v67 = 0.0;
  v66 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v59 = 0.0;
  v58 = 0;
  v57 = 0;
  v56 = 0.0;
  v70 = 1065353216;
  v65 = 1065353216;
  v60 = 1.0;
  v55 = 1.0;
  if ( COERCE_FLOAT(*((_DWORD *)this + 235) & _xmm) >= 0.0000011920929 )
  {
    v6 = 1;
    v50.DX = 0.0;
    v50.S_22 = 0.0;
    v50.S_21 = 0.0078125;
    v50.S_12 = 0.0;
    v54 = 1065353216;
    *(_QWORD *)&v50.DY = 1065353216LL;
    *(_QWORD *)&v50.S_11 = 1065353216LL;
    LODWORD(v51) = LODWORD(v28) ^ _xmm;
    LODWORD(v52) = LODWORD(v29) ^ _xmm;
    v53 = 0;
    D2DMatrixMultiply((struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v50);
    D2DMatrixRotationZ((struct D2DMatrix *)&v50, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v50);
    v50.DX = 0.0;
    v50.S_22 = 0.0;
    v50.S_21 = 0.0078125;
    v50.S_12 = 0.0;
    v54 = 1065353216;
    *(_QWORD *)&v50.DY = 1065353216LL;
    *(_QWORD *)&v50.S_11 = 1065353216LL;
    v51 = v28;
    v52 = v29;
    v53 = 0;
    D2DMatrixMultiply((struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v50);
  }
  if ( (v4 || v3 || v5)
    && (v3 ? (v36 = *((float *)this + 197), v37 = (const struct D2DVector2 *)v44) : (v36 = 0.0, v37 = 0LL),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v50,
           (const struct D2DVector2 *)((unsigned __int64)v49 & -(__int64)(v4 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)v43 & -(__int64)(v4 != 0)),
           v37,
           v36,
           (const struct D2DVector2 *)((unsigned __int64)v45 & -(__int64)(v5 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v55, (const struct D2DMatrix *)&v50),
         v3)
     || v4
     || v5)
    || v6 )
  {
    v50.S_11 = v55;
    v50.S_12 = v56;
    v50.S_21 = v59;
    v50.S_22 = v60;
    v50.DX = v67;
    v50.DY = v68;
    v31 = CMatrixTransformProxy::Update(*((CMatrixTransformProxy **)this + 42), &v50);
    v32 = v31;
    if ( v31 < 0 )
    {
      v39 = 1347LL;
      goto LABEL_57;
    }
    v31 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 42), &v41);
    v32 = v31;
    if ( v31 < 0 )
    {
      v39 = 1349LL;
      goto LABEL_57;
    }
    v31 = CRenderDataVisual::AddInstruction(v2, v41);
    v32 = v31;
    if ( v31 < 0 )
    {
      v39 = 1350LL;
      goto LABEL_57;
    }
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
  v30 = (struct CBaseImageProxy *)*((_QWORD *)this + 75);
  if ( !v30 )
    v30 = (struct CBaseImageProxy *)*((_QWORD *)this + 73);
  v31 = CDrawTileImageInstruction::Create(v30, &v47, (const struct tagPOINT *)this + 118, *((float *)this + 186), &v46);
  v32 = v31;
  if ( v31 < 0 )
  {
    v39 = 1359LL;
    goto LABEL_57;
  }
  v31 = CRenderDataVisual::AddInstruction(v2, v46);
  v32 = v31;
  if ( v31 < 0 )
  {
    v39 = 1360LL;
    goto LABEL_57;
  }
  if ( v41 )
  {
    v38 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      CBaseObject::Release(v38);
    }
    v31 = CPopInstruction::Create(&v42);
    v32 = v31;
    if ( v31 < 0 )
    {
      v39 = 1364LL;
    }
    else
    {
      v31 = CRenderDataVisual::AddInstruction(v2, v42);
      v32 = v31;
      if ( v31 >= 0 )
        goto LABEL_26;
      v39 = 1365LL;
    }
LABEL_57:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v31,
      v40);
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v42);
    Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v41);
    goto LABEL_31;
  }
LABEL_26:
  v33 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    CBaseObject::Release(v33);
  }
  v34 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    CBaseObject::Release(v34);
  }
  v32 = 0;
LABEL_31:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v46);
  return v32;
}
