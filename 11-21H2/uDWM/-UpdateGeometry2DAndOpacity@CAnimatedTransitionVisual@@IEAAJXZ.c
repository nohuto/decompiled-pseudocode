/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017AAC
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180018690 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180005F40 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180015A80 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AB4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180018180 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180018390 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18002726C (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18002F410 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1801085A4 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v2; // r13
  char v3; // r12
  char v4; // r14
  char v5; // r15
  char v6; // bl
  int v7; // eax
  float v8; // xmm10_4
  float v9; // xmm9_4
  float v10; // xmm12_4
  int v11; // edx
  int v12; // eax
  float v13; // xmm11_4
  float v14; // xmm13_4
  int v15; // eax
  float v16; // xmm8_4
  float v17; // xmm9_4
  LONG v18; // edi
  LONG v19; // eax
  __int64 v20; // rbx
  float v21; // xmm14_4
  float v22; // xmm15_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm1_4
  struct CBaseImageProxy *v28; // rcx
  int v29; // eax
  unsigned int v30; // ebx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  float v34; // xmm0_4
  const struct D2DVector2 *v35; // r8
  CBaseObject *v36; // rcx
  __int64 v37; // rdx
  CBaseObject *v38; // [rsp+50h] [rbp-B8h] BYREF
  CBaseObject *v39; // [rsp+58h] [rbp-B0h] BYREF
  float v40[2]; // [rsp+60h] [rbp-A8h] BYREF
  float v41[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v42[2]; // [rsp+70h] [rbp-98h] BYREF
  CBaseObject *v43; // [rsp+78h] [rbp-90h] BYREF
  struct tagRECT v44; // [rsp+80h] [rbp-88h] BYREF
  float v45; // [rsp+90h] [rbp-78h]
  float v46[4]; // [rsp+98h] [rbp-70h]
  float v47[4]; // [rsp+A8h] [rbp-60h] BYREF
  struct _MilMatrix3x2D v48; // [rsp+B8h] [rbp-50h] BYREF
  float v49; // [rsp+E8h] [rbp-20h]
  float v50; // [rsp+ECh] [rbp-1Ch]
  int v51; // [rsp+F0h] [rbp-18h]
  int v52; // [rsp+F4h] [rbp-14h]
  float v53; // [rsp+F8h] [rbp-10h] BYREF
  float v54; // [rsp+FCh] [rbp-Ch]
  int v55; // [rsp+100h] [rbp-8h]
  int v56; // [rsp+104h] [rbp-4h]
  float v57; // [rsp+108h] [rbp+0h]
  float v58; // [rsp+10Ch] [rbp+4h]
  int v59; // [rsp+110h] [rbp+8h]
  int v60; // [rsp+114h] [rbp+Ch]
  int v61; // [rsp+118h] [rbp+10h]
  int v62; // [rsp+11Ch] [rbp+14h]
  int v63; // [rsp+120h] [rbp+18h]
  int v64; // [rsp+124h] [rbp+1Ch]
  float v65; // [rsp+128h] [rbp+20h]
  float v66; // [rsp+12Ch] [rbp+24h]
  int v67; // [rsp+130h] [rbp+28h]
  int v68; // [rsp+134h] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v2 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  *(_QWORD *)v46 = *(_QWORD *)((char *)this + 764);
  v44 = *(struct tagRECT *)((char *)this + 856);
  v7 = 0;
  if ( *((_DWORD *)this + 216) - *((_DWORD *)this + 214) >= 0 )
    v7 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v8 = (float)v7;
  v9 = (float)*((int *)this + 214);
  v41[0] = v9;
  v10 = (float)((float)v7 * *((float *)this + 194)) + v9;
  v47[0] = v10;
  v11 = *((_DWORD *)this + 215);
  v12 = 0;
  if ( *((_DWORD *)this + 217) - v11 >= 0 )
    v12 = *((_DWORD *)this + 217) - v11;
  v13 = (float)v12;
  v42[0] = (float)v11;
  v14 = (float)((float)v12 * *((float *)this + 195)) + (float)v11;
  v47[1] = v14;
  v15 = *((_DWORD *)this + 238);
  if ( v15 || *((_DWORD *)this + 239) )
  {
    v16 = v8 / (float)((float)v15 / *((float *)this + 203));
    v17 = v13 / (float)((float)*((int *)this + 239) / *((float *)this + 204));
    v40[0] = v46[0] * v16;
    v45 = v46[1] * v17;
    v18 = RoundToNearestInt((float)((float)((float)v44.left - v10) / v16) + v10);
    v19 = RoundToNearestInt((float)((float)((float)v44.top - v14) / v17) + v14);
    v20 = HIDWORD(*(_QWORD *)&v44.right);
    v21 = (float)((float)((float)((float)((float)v18 - v10) * v16) + v10) - (float)v44.left) * *((float *)this + 191);
    v22 = (float)((float)((float)((float)((float)v19 - v14) * v17) + v14) - (float)v44.top) * *((float *)this + 192);
    v44.left = v18;
    v44.top = v19;
    v44.right = RoundToNearestInt((float)((float)((float)v44.right - v10) / v16) + v10);
    v44.bottom = RoundToNearestInt((float)((float)((float)(int)v20 - v14) / v17) + v14);
    v23 = v46[1] * v17;
    v24 = v46[0] * v16;
    v9 = v41[0];
    v11 = *((_DWORD *)this + 215);
    v6 = 0;
  }
  else
  {
    v21 = 0.0;
    v22 = 0.0;
    v23 = v46[1];
    v24 = v46[0];
  }
  v25 = (float)(*((_DWORD *)this + 214) + *((_DWORD *)this + 216)) * 0.5;
  v26 = (float)(v11 + *((_DWORD *)this + 217)) * 0.5;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v40[0] = v24;
    v40[1] = v23;
    v4 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 197) & _xmm) >= 0.0000011920929 )
  {
    v41[0] = (float)(v8 * *((float *)this + 200)) + v9;
    v41[1] = (float)(v13 * *((float *)this + 201)) + v42[0];
    v3 = 1;
  }
  v27 = *((float *)this + 189);
  if ( COERCE_FLOAT(*((_DWORD *)this + 188) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v27) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v22) & _xmm) >= 0.0000011920929 )
  {
    v42[0] = *((float *)this + 188) - v21;
    v42[1] = v27 - v22;
    v5 = 1;
  }
  v67 = 0;
  v66 = 0.0;
  v65 = 0.0;
  v64 = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v59 = 0;
  v57 = 0.0;
  v56 = 0;
  v55 = 0;
  v54 = 0.0;
  v68 = 1065353216;
  v63 = 1065353216;
  v58 = 1.0;
  v53 = 1.0;
  if ( COERCE_FLOAT(*((_DWORD *)this + 235) & _xmm) >= 0.0000011920929 )
  {
    v6 = 1;
    v48.DX = 0.0;
    v48.S_22 = 0.0;
    v48.S_21 = 0.0078125;
    v48.S_12 = 0.0;
    v52 = 1065353216;
    *(_QWORD *)&v48.DY = 1065353216LL;
    *(_QWORD *)&v48.S_11 = 1065353216LL;
    LODWORD(v49) = LODWORD(v25) ^ _xmm;
    LODWORD(v50) = LODWORD(v26) ^ _xmm;
    v51 = 0;
    D2DMatrixMultiply((struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v48);
    D2DMatrixRotationZ((struct D2DMatrix *)&v48, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v48);
    v48.DX = 0.0;
    v48.S_22 = 0.0;
    v48.S_21 = 0.0078125;
    v48.S_12 = 0.0;
    v52 = 1065353216;
    *(_QWORD *)&v48.DY = 1065353216LL;
    *(_QWORD *)&v48.S_11 = 1065353216LL;
    v49 = v25;
    v50 = v26;
    v51 = 0;
    D2DMatrixMultiply((struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v48);
  }
  if ( !v4 && !v3 && !v5
    || (v3 ? (v34 = *((float *)this + 197), v35 = (const struct D2DVector2 *)v41) : (v34 = 0.0, v35 = 0LL),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v48,
           (const struct D2DVector2 *)((unsigned __int64)v47 & -(__int64)(v4 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)v40 & -(__int64)(v4 != 0)),
           v35,
           v34,
           (const struct D2DVector2 *)((unsigned __int64)v42 & -(__int64)(v5 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v53, (const struct D2DMatrix *)&v48),
         !v3)
     && !v4
     && !v5) )
  {
    if ( !v6 )
      goto LABEL_21;
  }
  v48.S_11 = v53;
  v48.S_12 = v54;
  v48.S_21 = v57;
  v48.S_22 = v58;
  v48.DX = v65;
  v48.DY = v66;
  v29 = CMatrixTransformProxy::Update(*((CMatrixTransformProxy **)this + 42), &v48);
  v30 = v29;
  if ( v29 < 0 )
  {
    v37 = 1347LL;
    goto LABEL_57;
  }
  v29 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 42), &v38);
  v30 = v29;
  if ( v29 < 0 )
  {
    v37 = 1349LL;
    goto LABEL_57;
  }
  v29 = CRenderDataVisual::AddInstruction(v2, v38);
  v30 = v29;
  if ( v29 < 0 )
  {
    v37 = 1350LL;
  }
  else
  {
LABEL_21:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v43);
    v28 = (struct CBaseImageProxy *)*((_QWORD *)this + 75);
    if ( !v28 )
      v28 = (struct CBaseImageProxy *)*((_QWORD *)this + 73);
    v29 = CDrawTileImageInstruction::Create(
            v28,
            &v44,
            (const struct tagPOINT *)this + 118,
            *((float *)this + 186),
            &v43);
    v30 = v29;
    if ( v29 < 0 )
    {
      v37 = 1359LL;
    }
    else
    {
      v29 = CRenderDataVisual::AddInstruction(v2, v43);
      v30 = v29;
      if ( v29 < 0 )
      {
        v37 = 1360LL;
      }
      else
      {
        if ( !v38 )
        {
LABEL_26:
          v30 = 0;
          goto LABEL_27;
        }
        v36 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          CBaseObject::Release(v36);
        }
        v29 = CPopInstruction::Create(&v39);
        v30 = v29;
        if ( v29 < 0 )
        {
          v37 = 1364LL;
        }
        else
        {
          v29 = CRenderDataVisual::AddInstruction(v2, v39);
          v30 = v29;
          if ( v29 >= 0 )
            goto LABEL_26;
          v37 = 1365LL;
        }
      }
    }
  }
LABEL_57:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v37,
    (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v29);
LABEL_27:
  v31 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    CBaseObject::Release(v31);
  }
  v32 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    CBaseObject::Release(v32);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v43);
  return v30;
}
