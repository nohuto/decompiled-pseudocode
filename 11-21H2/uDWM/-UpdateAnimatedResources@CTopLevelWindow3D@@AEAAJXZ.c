/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BF30
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x180005DEC (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProx.c)
 *     ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ @ 0x180006770 (-GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800067F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18002F410 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     cosf @ 0x180060EBC (cosf.c)
 *     _o_sinf_0 @ 0x180060EEC (_o_sinf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  float v5; // xmm4_4
  __int64 v6; // rax
  float v7; // xmm3_4
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rax
  float v11; // xmm6_4
  __int64 v12; // rax
  float v13; // xmm15_4
  __int64 v14; // rax
  __int64 v15; // rax
  float v16; // xmm12_4
  __int64 v17; // rax
  float v18; // xmm13_4
  __int64 v19; // rax
  float v20; // xmm8_4
  __int64 v21; // rax
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm11_4
  float v25; // xmm10_4
  float v26; // xmm12_4
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm13_4
  float v30; // xmm12_4
  float v31; // xmm0_4
  float v32; // xmm14_4
  float v33; // xmm13_4
  float v34; // xmm12_4
  float v35; // xmm1_4
  float v36; // xmm12_4
  float v37; // xmm9_4
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm10_4
  float v41; // xmm4_4
  float v42; // xmm6_4
  float v43; // xmm8_4
  _DWORD *v44; // rdx
  float v45; // xmm7_4
  float v46; // xmm6_4
  int v47; // eax
  int v48; // r8d
  float v49; // xmm5_4
  float v50; // xmm4_4
  int v51; // eax
  int v52; // ebx
  _DWORD *v54; // rdx
  float v55; // xmm2_4
  float v56; // xmm5_4
  int v57; // eax
  float v58; // xmm8_4
  __int64 v59; // r9
  __int64 v60; // rax
  float v61; // xmm1_4
  int v62; // r15d
  __int64 v63; // rax
  float v64; // xmm1_4
  int v65; // esi
  __int64 v66; // rax
  float v67; // xmm1_4
  int v68; // ebx
  __int64 v69; // rax
  float v70; // xmm1_4
  int v71; // r14d
  float DpiAdjustedFloatCornerRadius; // xmm0_4
  float v73; // xmm1_4
  int v74; // eax
  __int64 v75; // rax
  float v76; // xmm0_4
  CBaseObject *v77; // rbx
  int v78; // eax
  unsigned int v79; // esi
  CBaseObject *v80; // [rsp+38h] [rbp-D0h] BYREF
  float v81; // [rsp+40h] [rbp-C8h]
  float v82; // [rsp+44h] [rbp-C4h]
  float v83; // [rsp+48h] [rbp-C0h]
  float v84; // [rsp+4Ch] [rbp-BCh]
  __int64 v85; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v86; // [rsp+5Ch] [rbp-ACh]
  int v87; // [rsp+64h] [rbp-A4h]
  float v88; // [rsp+68h] [rbp-A0h]
  __int64 v89; // [rsp+6Ch] [rbp-9Ch]
  int v90; // [rsp+74h] [rbp-94h]
  __int64 v91; // [rsp+78h] [rbp-90h]
  float v92; // [rsp+80h] [rbp-88h]
  int v93; // [rsp+84h] [rbp-84h]
  __int128 v94; // [rsp+88h] [rbp-80h]
  _DWORD v95[4]; // [rsp+98h] [rbp-70h] BYREF
  float v96; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v97; // [rsp+ACh] [rbp-5Ch]
  __int64 v98; // [rsp+B4h] [rbp-54h]
  float v99; // [rsp+BCh] [rbp-4Ch]
  __int64 v100; // [rsp+C0h] [rbp-48h]
  __int64 v101; // [rsp+C8h] [rbp-40h]
  __int64 v102; // [rsp+D0h] [rbp-38h]
  float v103; // [rsp+D8h] [rbp-30h]
  float v104; // [rsp+DCh] [rbp-2Ch]
  int v105; // [rsp+E0h] [rbp-28h]
  int v106; // [rsp+E4h] [rbp-24h]
  double v107; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v108; // [rsp+F0h] [rbp-18h]
  double v109; // [rsp+100h] [rbp-8h]
  double v110; // [rsp+108h] [rbp+0h]
  double v111; // [rsp+110h] [rbp+8h]

  v4 = *((_QWORD *)this + 49);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  v81 = v5;
  v6 = *((_QWORD *)this + 50);
  if ( v6 )
    v7 = *(double *)(v6 + 48);
  else
    v7 = 0.0;
  v82 = v7;
  v8 = *((_QWORD *)this + 51);
  if ( v8 )
    v9 = *(double *)(v8 + 48);
  else
    v9 = 0.0;
  *(float *)&v80 = v9;
  v10 = *((_QWORD *)this + 55);
  if ( v10 )
    v11 = *(double *)(v10 + 48);
  else
    v11 = FLOAT_1_0;
  v83 = v11;
  v12 = *((_QWORD *)this + 56);
  if ( v12 )
    v13 = *(double *)(v12 + 48);
  else
    v13 = FLOAT_1_0;
  v14 = *((_QWORD *)this + 57);
  if ( v14 )
    v84 = *(double *)(v14 + 48);
  else
    v84 = FLOAT_1_0;
  v15 = *((_QWORD *)this + 52);
  if ( v15 )
    v16 = *(double *)(v15 + 48);
  else
    v16 = 0.0;
  v17 = *((_QWORD *)this + 53);
  if ( v17 )
    v18 = *(double *)(v17 + 48);
  else
    v18 = 0.0;
  v19 = *((_QWORD *)this + 54);
  if ( v19 )
    v20 = *(double *)(v19 + 48);
  else
    v20 = 0.0;
  v21 = *((_QWORD *)this + 58);
  if ( v21 )
    v22 = *(double *)(v21 + 48);
  else
    v22 = FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 24) - v22) & _xmm) > 0.0000011920929 )
  {
    *((double *)this + 24) = v22;
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
    v7 = v82;
    v5 = v81;
  }
  if ( !*((_BYTE *)this + 616) )
  {
    v102 = 1065353216LL;
    v101 = 0LL;
    v100 = 0LL;
    v98 = 0LL;
    v97 = 0LL;
    v106 = 1065353216;
    v99 = 1.0;
    v96 = 1.0;
    LODWORD(v103) = *((_DWORD *)this + 128) ^ _xmm;
    LODWORD(v104) = *((_DWORD *)this + 129) ^ _xmm;
    v105 = *((_DWORD *)this + 130) ^ _xmm;
    v23 = (float)(v20 * 0.017453292) * 0.5;
    v24 = o_sinf_0(v23);
    v25 = cosf(v23);
    v26 = (float)(v16 * 0.017453292) * 0.5;
    v27 = o_sinf_0(v26);
    v28 = cosf(v26);
    v29 = (float)(v18 * 0.017453292) * 0.5;
    v30 = o_sinf_0(v29);
    v31 = cosf(v29);
    v32 = (float)((float)(v31 * v27) * v25) + (float)((float)(v30 * v28) * v24);
    v33 = (float)((float)(v30 * v28) * v25) - (float)((float)(v31 * v27) * v24);
    v34 = v30 * v27;
    v35 = (float)((float)(v31 * v28) * v24) - (float)(v34 * v25);
    v36 = (float)(v34 * v24) + (float)((float)(v31 * v28) * v25);
    v37 = (float)(v32 + v32) * v36;
    v38 = (float)(v33 + v33) * v36;
    v39 = (float)(v35 + v35) * v36;
    v40 = (float)(v33 + v33) * v33;
    v41 = (float)(v35 + v35) * v33;
    v42 = (float)(v35 + v35) * v35;
    *((float *)&v85 + 1) = (float)(1.0 - v40) - v42;
    *(float *)&v86 = (float)((float)(v33 + v33) * v32) + v39;
    *((float *)&v86 + 1) = (float)((float)(v35 + v35) * v32) - v38;
    v87 = 0;
    v88 = (float)((float)(v33 + v33) * v32) - v39;
    v43 = (float)(v32 + v32) * v32;
    *(float *)&v89 = (float)(1.0 - v43) - v42;
    *((float *)&v89 + 1) = v41 + v37;
    v90 = 0;
    *(float *)&v91 = (float)((float)(v35 + v35) * v32) + v38;
    *((float *)&v91 + 1) = v41 - v37;
    v92 = (float)(1.0 - v43) - v40;
    v93 = 0;
    v94 = _xmm;
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)((char *)&v85 + 4));
    v91 = 0LL;
    v89 = 1065353216LL;
    v88 = 0.0;
    v86 = 0LL;
    v92 = 1.0;
    HIDWORD(v85) = 1065353216;
    *(float *)&v94 = *((float *)this + 128) - *((float *)this + 131);
    *((float *)&v94 + 1) = *((float *)this + 129) - *((float *)this + 132);
    *((float *)&v94 + 2) = *((float *)this + 130) - *((float *)this + 133);
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)((char *)&v85 + 4));
    v44 = (_DWORD *)*((_QWORD *)this + 43);
    v45 = (float)(v44[22] + *((_DWORD *)this + 79));
    v46 = (float)(v44[24] + *((_DWORD *)this + 80));
    v47 = v44[20] - v44[23] - v44[22];
    if ( v47 < 0 )
      v47 = 0;
    v48 = v44[21] - v44[25] - v44[24];
    if ( v48 < 0 )
      v48 = 0;
    *(_QWORD *)((char *)&v94 + 4) = 0LL;
    LODWORD(v94) = 0;
    *((float *)&v85 + 1) = v83 * (float)v47;
    *(float *)&v89 = v13 * (float)v48;
    v92 = v84;
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)((char *)&v85 + 4));
    v92 = 1.0;
    LODWORD(v89) = 1065353216;
    HIDWORD(v85) = 1065353216;
    *(float *)&v94 = (float)(v49 * *((float *)this + 131)) + (float)(v45 + v81);
    *((float *)&v94 + 1) = (float)(v46 + v82) + (float)(v50 * *((float *)this + 132));
    *((float *)&v94 + 2) = *(float *)&v80 + *((float *)this + 133);
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)&v96,
      (const struct D2DMatrix *)((char *)&v85 + 4));
    v107 = v96;
    *(double *)&v108 = *(float *)&v97;
    *((double *)&v108 + 1) = *((float *)&v98 + 1);
    v109 = v99;
    v110 = v103;
    v111 = v104;
LABEL_29:
    v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL)
                                                                            + 16LL)
                                                              + 984LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 24LL),
            &v107);
    v52 = v51;
    if ( v51 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x4BEu);
    return (unsigned int)v52;
  }
  v54 = (_DWORD *)*((_QWORD *)this + 43);
  v55 = (float)(v54[22] + *(_DWORD *)(*((_QWORD *)this + 42) + 48LL));
  v56 = (float)(v54[24] + *(_DWORD *)(*((_QWORD *)this + 42) + 52LL));
  v57 = v54[20] - v54[23] - v54[22];
  if ( v57 < 0 )
    v57 = 0;
  v58 = (float)v57;
  v59 = (unsigned int)(v54[21] - v54[25] - v54[24]);
  if ( (int)v59 < 0 )
    v59 = 0LL;
  v107 = v11;
  v108 = 0LL;
  v109 = v13;
  v110 = (float)(v5 + v55);
  v111 = (float)(v7 + v56);
  v60 = *((_QWORD *)this + 59);
  if ( v60 )
    v61 = *(double *)(v60 + 48);
  else
    v61 = FLOAT_1_0;
  v62 = (int)(float)((float)((float)(1.0 - v61) * *((float *)this + 155)) + (float)(v55 * v61));
  v95[0] = v62;
  v63 = *((_QWORD *)this + 60);
  if ( v63 )
    v64 = *(double *)(v63 + 48);
  else
    v64 = FLOAT_1_0;
  v65 = (int)(float)((float)((float)(1.0 - v64) * *((float *)this + 156)) + (float)(v56 * v64));
  v95[1] = v65;
  v66 = *((_QWORD *)this + 61);
  if ( v66 )
    v67 = *(double *)(v66 + 48);
  else
    v67 = FLOAT_1_0;
  v68 = (int)(float)((float)((float)(1.0 - v67) * *((float *)this + 157)) + (float)(v58 * v67));
  v95[2] = v68;
  v69 = *((_QWORD *)this + 62);
  if ( v69 )
    v70 = *(double *)(v69 + 48);
  else
    v70 = FLOAT_1_0;
  v71 = (int)(float)((float)((float)(1.0 - v70) * *((float *)this + 158)) + (float)((float)(int)v59 * v70));
  v95[3] = v71;
  v80 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
    1u,
    a3,
    v59);
  DpiAdjustedFloatCornerRadius = CTopLevelWindow::GetDpiAdjustedFloatCornerRadius(*(CTopLevelWindow **)(*((_QWORD *)this + 42) + 440LL));
  v73 = DpiAdjustedFloatCornerRadius;
  v74 = *((_DWORD *)this + 96);
  if ( v74 != 2 && v74 != 12 || DpiAdjustedFloatCornerRadius <= 0.0 )
  {
    v80 = 0LL;
    v52 = ResourceHelper::CreateRectangleGeometry(v62, v65, v68, v71, &v80);
    if ( v52 >= 0 )
      goto LABEL_50;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x4A0u);
LABEL_70:
    if ( v80 )
      CBaseObject::Release(v80);
    return (unsigned int)v52;
  }
  v75 = *((_QWORD *)this + 63);
  if ( v75 )
    v76 = *(double *)(v75 + 48);
  else
    v76 = FLOAT_1_0;
  v80 = 0LL;
  v52 = ResourceHelper::CreateRectangleGeometry(
          (const struct MilPointAndSizeL *)v95,
          (float)(int)(float)((float)((float)(1.0 - v76) * v73) + (float)(v76 * 0.0)),
          &v80);
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x49Cu);
    goto LABEL_70;
  }
LABEL_50:
  v77 = v80;
  v78 = CVisualProxy::SetClip(*((CVisualProxy **)this + 2), v80);
  v79 = v78;
  if ( v78 >= 0 )
  {
    if ( v77 )
      CBaseObject::Release(v77);
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v78, 0x4A9u);
  if ( v77 )
    CBaseObject::Release(v77);
  return v79;
}
