/*
 * XREFs of ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800690A0
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800091D8 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A984 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000B384 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180043CAC (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D310 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060300 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063E50 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB170 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D86E8 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D8938 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180051F78 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180052010 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800539C0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180053F2C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800579A0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180070318 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180083644 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18008E8AC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x18008F954 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800C4D30 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CC774 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800CD9B8 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D0498 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x1800DD980 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFE94 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFEC8 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x18020FC6C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_18020FC6C.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18026FA2C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

void __fastcall CVisual::CalcTransform(
        CVisual *this,
        CVisual **a2,
        const struct CMILMatrix *a3,
        bool *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  _DWORD *v6; // rax
  char v10; // r15
  CTransform3D *v11; // r12
  bool *v12; // rdx
  float v13; // xmm4_4
  __m128 *v14; // rdi
  __int64 v15; // rax
  char v16; // r15
  bool v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  bool *v20; // rdi
  float v21; // xmm11_4
  float v22; // xmm5_4
  char v23; // r8
  char v24; // al
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  const struct D2D_SIZE_F *v29; // rdx
  char v30; // cl
  char v31; // dl
  __m128 v32; // xmm14
  __m128 v33; // xmm13
  __m128 v34; // xmm11
  char v35; // al
  __m128 v36; // xmm12
  char v37; // r8
  char v38; // al
  char v39; // al
  char v40; // cl
  char v41; // al
  char v42; // al
  bool v43; // r9
  char v44; // al
  char v45; // al
  bool v46; // r9
  bool v47; // r8
  __int32 v48; // eax
  char v49; // al
  char v50; // al
  char v51; // al
  bool v52; // al
  bool v53; // al
  char v54; // cl
  char v55; // al
  char v56; // al
  bool v57; // cl
  __m128 v58; // xmm0
  __m128 v59; // xmm1
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  const struct CMILMatrix *Matrix; // rax
  int v63; // xmm0_4
  int v64; // xmm1_4
  struct CEffect *v65; // rax
  __m128 v66; // xmm0
  __m128 v67; // xmm4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm3_4
  __m128 v71; // xmm0
  __m128 v72; // xmm4
  char v73; // cl
  float v74; // xmm0_4
  float v75; // xmm4_4
  char v76; // r11
  float v77; // xmm6_4
  float v78; // xmm7_4
  int v79; // xmm1_4
  int v80; // xmm0_4
  int v81; // xmm1_4
  int v82; // xmm0_4
  int v83; // xmm1_4
  __m128 v84; // xmm12
  __m128 v85; // xmm11
  float v86; // xmm0_4
  __m128 *v87; // rax
  char v88; // al
  const struct CMILMatrix *v89; // rax
  unsigned int v90; // r9d
  int v91; // xmm1_4
  int v92; // xmm0_4
  int v93; // xmm1_4
  int v94; // xmm0_4
  int v95; // xmm1_4
  int v96; // xmm0_4
  int v97; // xmm1_4
  int v98; // xmm0_4
  int v99; // xmm1_4
  int v100; // xmm0_4
  int v101; // xmm1_4
  int v102; // xmm0_4
  int v103; // xmm1_4
  int v104; // xmm0_4
  int v105; // xmm1_4
  int v106; // ecx
  int v107; // r8d
  int v108; // r9d
  int v109; // xmm1_4
  int v110; // xmm0_4
  int v111; // xmm1_4
  int v112; // xmm0_4
  int v113; // xmm1_4
  int v114; // xmm0_4
  int v115; // xmm1_4
  int v116; // xmm0_4
  int v117; // xmm1_4
  int v118; // xmm0_4
  int v119; // xmm1_4
  int v120; // xmm0_4
  int v121; // xmm1_4
  int v122; // xmm0_4
  int v123; // xmm1_4
  int v124; // ecx
  int v125; // r8d
  int v126; // r9d
  char v127; // [rsp+B8h] [rbp-80h]
  bool v128; // [rsp+B9h] [rbp-7Fh]
  bool *v129; // [rsp+C0h] [rbp-78h] BYREF
  __m128 v130; // [rsp+C8h] [rbp-70h] BYREF
  __m128 v131; // [rsp+D8h] [rbp-60h]
  __m128 v132; // [rsp+E8h] [rbp-50h]
  __m128 v133; // [rsp+F8h] [rbp-40h]
  __int32 v134; // [rsp+108h] [rbp-30h]
  int v135; // [rsp+118h] [rbp-20h] BYREF
  int v136; // [rsp+11Ch] [rbp-1Ch] BYREF
  int v137; // [rsp+120h] [rbp-18h] BYREF
  int v138; // [rsp+124h] [rbp-14h] BYREF
  int v139; // [rsp+128h] [rbp-10h] BYREF
  int v140; // [rsp+12Ch] [rbp-Ch] BYREF
  int v141; // [rsp+130h] [rbp-8h] BYREF
  int v142; // [rsp+134h] [rbp-4h] BYREF
  int v143; // [rsp+138h] [rbp+0h] BYREF
  int v144; // [rsp+13Ch] [rbp+4h] BYREF
  int v145; // [rsp+140h] [rbp+8h] BYREF
  int v146; // [rsp+144h] [rbp+Ch] BYREF
  int v147; // [rsp+148h] [rbp+10h] BYREF
  int v148; // [rsp+14Ch] [rbp+14h] BYREF
  struct CEffect *EffectInternal; // [rsp+150h] [rbp+18h] BYREF
  struct CInteraction *InteractionInternal; // [rsp+158h] [rbp+20h] BYREF
  struct CInteraction *v151; // [rsp+160h] [rbp+28h] BYREF
  char v152[64]; // [rsp+168h] [rbp+30h] BYREF
  _DWORD v153[6]; // [rsp+1A8h] [rbp+70h] BYREF
  _QWORD v154[3]; // [rsp+1C0h] [rbp+88h] BYREF
  float v155[6]; // [rsp+1D8h] [rbp+A0h] BYREF

  v6 = (_DWORD *)*((_QWORD *)this + 29);
  v10 = 0;
  v129 = a4;
  v11 = 0LL;
  v127 = 0;
  if ( (*v6 & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           187LL) )
    {
      v11 = EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                EffectInternal,
                58LL) )
    {
      v11 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  v12 = v129;
  *v129 = 0;
  if ( a3 )
  {
    v10 = 1;
    v127 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a5 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a5 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)a5 + 16) = *((_DWORD *)a3 + 16);
  }
  if ( this != a2[8] )
  {
    v13 = *((float *)this + 31);
    if ( v13 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      if ( v10 )
      {
        v21 = *((float *)this + 30);
        v22 = *((float *)this + 32);
        if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(LODWORD(v22) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(LODWORD(v21) & _xmm) >= 0.000081380211 )
        {
          v23 = *((_BYTE *)a5 + 65);
          v24 = (char)(4 * v23) >> 6;
          v25 = v13 * *((float *)a5 + 2);
          v26 = (float)((float)(v22 * *((float *)a5 + 5)) + (float)(v13 * *((float *)a5 + 1)))
              + (float)(v21 * *((float *)a5 + 9));
          v27 = v21 * *((float *)a5 + 10);
          *((float *)a5 + 12) = (float)((float)((float)(v22 * *((float *)a5 + 4)) + (float)(v13 * *(float *)a5))
                                      + (float)(v21 * *((float *)a5 + 8)))
                              + *((float *)a5 + 12);
          v28 = (float)(v22 * *((float *)a5 + 6)) + v25;
          *((float *)a5 + 13) = v26 + *((float *)a5 + 13);
          *((float *)a5 + 14) = (float)(v28 + v27) + *((float *)a5 + 14);
          if ( v24 )
          {
            if ( v24 != 1
              || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)a5 + 11) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            {
              v24 = 0;
            }
          }
          else
          {
            LODWORD(v74) = *((_DWORD *)a5 + 11) & _xmm;
            v24 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                 (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)a5 + 7) & _xmm) * 61440.0)
                                               + (float)(COERCE_FLOAT(*((_DWORD *)a5 + 3) & _xmm) * 61440.0))
                                       + COERCE_FLOAT(*((_DWORD *)a5 + 15) & _xmm))
                               - 1.0) & _xmm) < 0.000081380211;
            v12 = v129;
            *((_BYTE *)a5 + 65) = v23 ^ (v23 ^ (-16 - 32 * v24)) & 0x30;
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v74 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
              v24 = 0;
          }
          if ( v24 )
          {
            *((_BYTE *)a5 + 64) &= 0xFCu;
          }
          else
          {
            v75 = v13 * *((float *)a5 + 3);
            *((_DWORD *)a5 + 16) = 0;
            *((float *)a5 + 15) = (float)((float)(v75 + (float)(v22 * *((float *)a5 + 7)))
                                        + (float)(v21 * *((float *)a5 + 11)))
                                + *((float *)a5 + 15);
          }
        }
      }
      else
      {
        v63 = *((_DWORD *)this + 32);
        v10 = 1;
        v64 = *((_DWORD *)this + 30);
        *(_QWORD *)a5 = 1065353216LL;
        *((_QWORD *)a5 + 1) = 0LL;
        *((_DWORD *)a5 + 4) = 0;
        *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
        *(_QWORD *)((char *)a5 + 28) = 0LL;
        *((_DWORD *)a5 + 9) = 0;
        *((_QWORD *)a5 + 5) = 1065353216LL;
        *((float *)a5 + 12) = v13;
        *((_DWORD *)a5 + 13) = v63;
        *((_DWORD *)a5 + 14) = v64;
        *((_DWORD *)a5 + 15) = 1065353216;
        v127 = 1;
        *((_BYTE *)a5 + 64) = 84;
        *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x17;
      }
      *v12 = 1;
    }
    v14 = (__m128 *)*((_QWORD *)this + 30);
    if ( v14 )
    {
      v29 = (const struct D2D_SIZE_F *)((char *)this + 140);
      if ( !v10 )
      {
        Matrix = CTransform3D::GetMatrix(*((CTransform3D **)this + 30), v29);
        v10 = 1;
        v127 = 1;
        *(_OWORD *)a5 = *(_OWORD *)Matrix;
        *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
        *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
        *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
        v48 = *((_DWORD *)Matrix + 16);
        goto LABEL_87;
      }
      v30 = v14[2].m128_i8[0] & 1;
      if ( this != (CVisual *)-140LL )
      {
        if ( (v14[2].m128_i8[0] & 1) == 0
          && v14[9].m128_i8[12]
          && (v14[9].m128_f32[1] != v29->width || v14[9].m128_f32[2] != *((float *)this + 36)) )
        {
          v30 = 1;
        }
        *(struct D2D_SIZE_F *)&v14[9].m128_i16[2] = *v29;
      }
      if ( v30 )
      {
        (*(void (__fastcall **)(__m128 *, const struct D2D_SIZE_F *, __m128 *))(v14->m128_u64[0] + 200))(
          v14,
          v29,
          v14 + 5);
        v14[2].m128_i32[0] &= ~1u;
      }
      v32 = v14[5];
      v134 = v14[9].m128_i32[0];
      v31 = v134;
      v33 = v14[6];
      v34 = v14[7];
      v35 = (char)((_BYTE)v134 << 6) >> 6;
      v130 = v32;
      v131 = v33;
      v132 = v34;
      v36 = v14[8];
      v133 = v36;
      if ( v35 )
      {
        if ( v35 == 1 )
          goto LABEL_85;
LABEL_93:
        v49 = (char)(*((_BYTE *)a5 + 64) << 6) >> 6;
        if ( v49 )
        {
          v53 = v49 == 1;
LABEL_104:
          if ( v53 )
            goto LABEL_86;
          v55 = (char)(16 * *((_BYTE *)a5 + 65)) >> 6;
          if ( v55 )
          {
            if ( v55 == 1 )
            {
LABEL_107:
              if ( CMILMatrix::ProducesUniformZ<1>((__int64)a5) )
              {
                v56 = (char)(4 * *((_BYTE *)a5 + 64)) >> 6;
                if ( v56 )
                {
                  v57 = v56 == 1;
                }
                else
                {
                  v57 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a5)
                     && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a5 - 1.0) & _xmm) < 0.000081380211
                     && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 5) - 1.0) & _xmm) < 0.000081380211;
                  *((_BYTE *)a5 + 64) &= 0xCFu;
                  *((_BYTE *)a5 + 64) |= (v76 - 32 * v57) & 0x30;
                }
                if ( v57 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 10) - 1.0) & _xmm) < 0.000081380211 )
                  goto LABEL_112;
              }
            }
          }
          else
          {
            if ( (unsigned __int8)CMILMatrix::IsAffine<1>(a5, 0LL)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 8) - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 9) - 0.0) & _xmm) < 0.000081380211 )
            {
              *((_BYTE *)a5 + 65) &= ~8u;
              *((_BYTE *)a5 + 65) |= 4u;
              goto LABEL_107;
            }
            *((_BYTE *)a5 + 65) |= 0xCu;
          }
          if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(&v130) )
          {
            v66 = *(__m128 *)a5;
            v67 = *((__m128 *)a5 + 1);
            v134 = *((_DWORD *)a5 + 16);
            v68 = v133.m128_f32[0];
            v69 = v133.m128_f32[1];
            v70 = v133.m128_f32[2];
            v130 = v66;
            v71 = *((__m128 *)a5 + 2);
            v131 = v67;
            v72 = *((__m128 *)a5 + 3);
            v132 = v71;
            v133 = v72;
            CMILMatrix::PrependTranslate((CMILMatrix *)&v130, v68, v69, v70);
            goto LABEL_113;
          }
          if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(a5) )
          {
            if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v130)
              && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a5) )
            {
              v77 = v132.m128_f32[2];
              v78 = v133.m128_f32[2];
              v154[0] = v130.m128_u64[0];
              v154[1] = v131.m128_u64[0];
              v154[2] = v133.m128_u64[0];
              v79 = *((_DWORD *)a5 + 1);
              v153[0] = *(_DWORD *)a5;
              v80 = *((_DWORD *)a5 + 4);
              v153[1] = v79;
              v81 = *((_DWORD *)a5 + 5);
              v153[2] = v80;
              v82 = *((_DWORD *)a5 + 12);
              v153[3] = v81;
              v83 = *((_DWORD *)a5 + 13);
              v153[4] = v82;
              v153[5] = v83;
              D2D1::Matrix3x2F::SetProduct(
                (D2D1::Matrix3x2F *)v155,
                (const struct D2D1::Matrix3x2F *)v154,
                (const struct D2D1::Matrix3x2F *)v153);
              CMILMatrix::Set2DAffineMatrix((CMILMatrix *)&v130, v155[0], v155[1], v155[2], v155[3], v155[4], v155[5]);
              v33 = v131;
              v32 = v130;
              v84 = _mm_shuffle_ps(v133, v133, 210);
              v85 = _mm_shuffle_ps(v132, v132, 210);
              v86 = (float)(*((float *)a5 + 10) * v78) + *((float *)a5 + 14);
              v85.m128_f32[0] = *((float *)a5 + 10) * v77;
              v34 = _mm_shuffle_ps(v85, v85, 201);
              v132 = v34;
              v84.m128_f32[0] = v86;
              v36 = _mm_shuffle_ps(v84, v84, 201);
              v133 = v36;
            }
            else
            {
              v87 = (__m128 *)Windows::Foundation::Numerics::operator*(v152, &v130, a5);
              v32 = *v87;
              v130 = *v87;
              v33 = v87[1];
              v131 = v33;
              v34 = v87[2];
              v132 = v34;
              v36 = v87[3];
              v134 = 0;
            }
            goto LABEL_86;
          }
          CMILMatrix::Scale((CMILMatrix *)&v130, *(float *)a5, *((float *)a5 + 5), *((float *)a5 + 10));
LABEL_112:
          CMILMatrix::Translate((CMILMatrix *)&v130, *((float *)a5 + 12), *((float *)a5 + 13), *((float *)a5 + 14));
LABEL_113:
          v36 = v133;
          v34 = v132;
          v33 = v131;
          v32 = v130;
          goto LABEL_86;
        }
        v50 = (char)(16 * *((_BYTE *)a5 + 65)) >> 6;
        if ( v50 )
        {
          if ( v50 != 1 )
            goto LABEL_102;
        }
        else
        {
          if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(a5, 0LL)
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 8) - 0.0) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 9) - 0.0) & _xmm) >= 0.000081380211 )
          {
            *((_BYTE *)a5 + 65) |= 0xCu;
            goto LABEL_102;
          }
          *((_BYTE *)a5 + 65) &= ~8u;
          *((_BYTE *)a5 + 65) |= 4u;
        }
        if ( CMILMatrix::ProducesUniformZ<1>((__int64)a5) )
        {
          v51 = (char)(4 * *((_BYTE *)a5 + 64)) >> 6;
          if ( v51 )
          {
            v52 = v51 == 1;
          }
          else
          {
            if ( CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)a5)
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a5 - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 5) - 1.0) & _xmm) < 0.000081380211 )
            {
              v52 = 1;
              v73 = 16;
            }
            else
            {
              v52 = 0;
              v73 = 48;
            }
            *((_BYTE *)a5 + 64) &= 0xCFu;
            *((_BYTE *)a5 + 64) |= v73;
          }
          if ( v52
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 10) - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 12) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 13) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a5 + 14) - 0.0) & _xmm) < 0.000081380211 )
          {
            v53 = 1;
            v54 = 1;
            goto LABEL_103;
          }
        }
LABEL_102:
        v53 = 0;
        v54 = 3;
LABEL_103:
        *((_BYTE *)a5 + 64) &= 0xFCu;
        *((_BYTE *)a5 + 64) |= v54;
        goto LABEL_104;
      }
      v37 = BYTE1(v134);
      v38 = (char)(16 * BYTE1(v134)) >> 6;
      if ( v38 )
      {
        if ( v38 != 1 )
          goto LABEL_92;
      }
      else
      {
        v39 = (char)(4 * BYTE1(v134)) >> 6;
        if ( v39 )
        {
          if ( v39 != 1
            || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_shuffle_ps(v34, v34, 255).m128_u32[0] & _xmm)
                                                      * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          {
            v39 = 0;
          }
        }
        else
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                              (float)((float)((float)(COERCE_FLOAT(v131.m128_i32[3] & _xmm) * 61440.0)
                                            + (float)(COERCE_FLOAT(v130.m128_i32[3] & _xmm) * 61440.0))
                                    + COERCE_FLOAT(v133.m128_i32[3] & _xmm))
                            - 1.0) & _xmm) >= 0.000081380211 )
          {
            v39 = 0;
            v40 = 48;
          }
          else
          {
            v39 = 1;
            v40 = 16;
          }
          v37 = v40 | BYTE1(v134) & 0xCF;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_shuffle_ps(v34, v34, 255).m128_u32[0] & _xmm)
                                                      * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
            v39 = 0;
        }
        if ( !v39
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v34.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
        {
          BYTE1(v134) = v37 | 0xC;
          goto LABEL_92;
        }
        v37 = v37 & 0xF3 | 4;
        BYTE1(v134) = v37;
      }
      v41 = (char)(16 * v134) >> 6;
      if ( v41 )
      {
        if ( v41 == 1 )
        {
LABEL_67:
          v44 = (char)(4 * v31) >> 6;
          if ( v44 )
          {
            v47 = v44 == 1;
            goto LABEL_79;
          }
          if ( v31 >> 6 )
          {
            if ( v31 >> 6 != 1 )
            {
              v47 = 0;
              goto LABEL_78;
            }
          }
          else
          {
            v45 = (char)(4 * v37) >> 6;
            if ( v45 )
            {
              v46 = v45 == 1;
            }
            else
            {
              v46 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                   (float)((float)((float)(COERCE_FLOAT(v131.m128_i32[3] & _xmm) * 61440.0)
                                                 + (float)(COERCE_FLOAT(v130.m128_i32[3] & _xmm) * 61440.0))
                                         + COERCE_FLOAT(v133.m128_i32[3] & _xmm))
                                 - 1.0) & _xmm) < 0.000081380211;
              BYTE1(v134) = (v37 ^ (-16 - 32 * v46)) & 0x30 ^ v37;
            }
            if ( !v46
              || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v32, v32, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
              || COERCE_FLOAT(COERCE_UNSIGNED_INT(v33.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
            {
              v31 |= 0xC0u;
              goto LABEL_123;
            }
            v31 = v31 & 0x3F | 0x40;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32.m128_f32[0] - 1.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v33, v33, 85).m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
          {
            v47 = 1;
LABEL_78:
            v31 ^= (v31 ^ (-16 - 32 * v47)) & 0x30;
LABEL_79:
            if ( v47
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v36.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v36, v36, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v36, v36, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
            {
              LOBYTE(v134) = v31 & 0xFC | 1;
LABEL_85:
              v32 = *(__m128 *)a5;
              v134 = *((_DWORD *)a5 + 16);
              v33 = *((__m128 *)a5 + 1);
              v34 = *((__m128 *)a5 + 2);
              v36 = *((__m128 *)a5 + 3);
LABEL_86:
              v48 = v134;
              *(__m128 *)a5 = v32;
              *((__m128 *)a5 + 1) = v33;
              *((__m128 *)a5 + 2) = v34;
              *((__m128 *)a5 + 3) = v36;
LABEL_87:
              v12 = v129;
              *((_DWORD *)a5 + 16) = v48;
              *v12 = 1;
              goto LABEL_9;
            }
            goto LABEL_92;
          }
LABEL_123:
          v47 = 0;
          goto LABEL_78;
        }
      }
      else
      {
        v42 = (char)(4 * v37) >> 6;
        if ( v42 )
        {
          v43 = v42 == 1;
        }
        else
        {
          v43 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                               (float)((float)((float)(COERCE_FLOAT(v131.m128_i32[3] & _xmm) * 61440.0)
                                             + (float)(COERCE_FLOAT(v130.m128_i32[3] & _xmm) * 61440.0))
                                     + COERCE_FLOAT(v133.m128_i32[3] & _xmm))
                             - 1.0) & _xmm) < 0.000081380211;
          v37 ^= (v37 ^ (-16 - 32 * v43)) & 0x30;
          BYTE1(v134) = v37;
        }
        if ( v43
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v32, v32, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v33, v33, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
        {
          v31 = v134 & 0xF3 | 4;
          goto LABEL_67;
        }
        v31 = v134 | 0xC;
      }
LABEL_92:
      LOBYTE(v134) = v31 | 3;
      goto LABEL_93;
    }
  }
LABEL_9:
  if ( a6 )
  {
    if ( v10 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *((_OWORD *)a6 + 1) = *((_OWORD *)a5 + 1);
      *((_OWORD *)a6 + 2) = *((_OWORD *)a5 + 2);
      *((_OWORD *)a6 + 3) = *((_OWORD *)a5 + 3);
      *((_DWORD *)a6 + 16) = *((_DWORD *)a5 + 16);
    }
    else
    {
      CMILMatrix::SetToIdentity(a6);
    }
  }
  if ( v11 )
  {
    if ( *((_DWORD *)this + 27) != 2 )
      goto LABEL_200;
    v15 = *((_QWORD *)this + 11);
  }
  else
  {
    v15 = *((_QWORD *)this + 11);
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v16 = 0;
      goto LABEL_13;
    }
  }
  v16 = 1;
LABEL_13:
  v17 = v15 && *(_DWORD *)(v15 + 108) == 1;
  v18 = *((_QWORD *)this + 10);
  if ( (v18 & 2) != 0 )
    v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v18) = v18 & 1;
  v128 = 0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    v65 = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v65 + 56LL))(v65, 61LL) )
      v128 = 1;
  }
  v19 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v19 )
    LOBYTE(v19) = 1;
  if ( !v16 )
    goto LABEL_198;
  if ( !v17 )
  {
LABEL_24:
    v10 = v127;
    goto LABEL_25;
  }
  if ( !(_DWORD)v18 )
  {
LABEL_198:
    if ( !v17 || !v128 && !(_BYTE)v19 )
      goto LABEL_24;
  }
  v10 = v127;
  v12 = v129;
LABEL_200:
  if ( !v10 )
  {
    CMILMatrix::SetToIdentity(a5);
    v10 = 1;
  }
  v88 = *((_BYTE *)a5 + 64);
  *((_QWORD *)a5 + 4) = 0LL;
  *((_QWORD *)a5 + 5) = 0LL;
  *((_BYTE *)a5 + 64) = v88 & 0xF0 | 3;
  *v12 = 1;
LABEL_25:
  if ( v11 )
  {
    v89 = CTransform3D::GetMatrix(v11, (const struct D2D_SIZE_F *)((char *)this + 140));
    if ( v10 )
    {
      CMILMatrix::Multiply(v89, a5, a5);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)v89;
      *((_OWORD *)a5 + 1) = *((_OWORD *)v89 + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)v89 + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)v89 + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)v89 + 16);
    }
    v20 = v129;
    *v129 = 1;
  }
  else
  {
    if ( !v10 )
    {
      *(_QWORD *)a5 = 1065353216LL;
      *((_QWORD *)a5 + 1) = 0LL;
      *((_DWORD *)a5 + 4) = 0;
      *(_QWORD *)((char *)a5 + 20) = 1065353216LL;
      *(_QWORD *)((char *)a5 + 28) = 0LL;
      *((_DWORD *)a5 + 9) = 0;
      *((_QWORD *)a5 + 5) = 1065353216LL;
      *((_QWORD *)a5 + 6) = 0LL;
      *((_DWORD *)a5 + 14) = 0;
      *((_DWORD *)a5 + 15) = 1065353216;
      *((_BYTE *)a5 + 64) = 85;
      *((_BYTE *)a5 + 65) = *((_BYTE *)a5 + 65) & 0xC0 | 0x17;
      goto LABEL_29;
    }
    v20 = v129;
  }
  if ( *((char *)this + 101) < 0 )
  {
    if ( !a5 )
      goto LABEL_128;
    if ( CMILMatrix::Is2DAxisAlignedPreserving(a5) )
    {
      v58 = *(__m128 *)a5;
      v59 = *((__m128 *)a5 + 1);
      v134 = *((_DWORD *)a5 + 16);
      v130 = v58;
      v60 = *((__m128 *)a5 + 2);
      v131 = v59;
      v61 = *((__m128 *)a5 + 3);
      v132 = v60;
      v133 = v61;
      CMILMatrix::RoundOffsets((CMILMatrix *)&v130);
      if ( !(unsigned __int8)CMILMatrix::IsEqualTo<0>(a5, &v130) )
      {
LABEL_128:
        CMILMatrix::RoundOffsets(a5);
        *v20 = 1;
      }
    }
  }
LABEL_29:
  if ( (*((_BYTE *)this + 272) & 8) != 0 )
  {
    v90 = dword_1803E37D0;
    if ( (unsigned int)dword_1803E37D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E37D0, 2LL) )
    {
      v91 = *((_DWORD *)a5 + 14);
      v135 = *((_DWORD *)a5 + 15);
      v92 = *((_DWORD *)a5 + 13);
      v136 = v91;
      v93 = *((_DWORD *)a5 + 12);
      v137 = v92;
      v94 = *((_DWORD *)a5 + 11);
      v138 = v93;
      v95 = *((_DWORD *)a5 + 10);
      v139 = v94;
      v96 = *((_DWORD *)a5 + 9);
      v140 = v95;
      v97 = *((_DWORD *)a5 + 8);
      v141 = v96;
      v98 = *((_DWORD *)a5 + 7);
      v142 = v97;
      v99 = *((_DWORD *)a5 + 6);
      v143 = v98;
      v100 = *((_DWORD *)a5 + 5);
      v144 = v99;
      v101 = *((_DWORD *)a5 + 4);
      v145 = v100;
      v102 = *((_DWORD *)a5 + 3);
      v146 = v101;
      v103 = *((_DWORD *)a5 + 2);
      v147 = v102;
      v104 = *((_DWORD *)a5 + 1);
      v148 = v103;
      v105 = *(_DWORD *)a5;
      LODWORD(EffectInternal) = v104;
      LODWORD(v129) = v105;
      InteractionInternal = CVisual::GetInteractionInternal(this);
      v151 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v106,
        (unsigned int)&unk_18037FB2E,
        v107,
        v108,
        (__int64)&v151,
        (__int64)&InteractionInternal,
        (__int64)&v129,
        (__int64)&EffectInternal,
        (__int64)&v148,
        (__int64)&v147,
        (__int64)&v146,
        (__int64)&v145,
        (__int64)&v144,
        (__int64)&v143,
        (__int64)&v142,
        (__int64)&v141,
        (__int64)&v140,
        (__int64)&v139,
        (__int64)&v138,
        (__int64)&v137,
        (__int64)&v136,
        (__int64)&v135);
      v90 = dword_1803E37D0;
    }
    if ( a3 && v90 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1803E37D0, 2LL) )
      {
        v109 = *((_DWORD *)a3 + 14);
        LODWORD(v129) = *((_DWORD *)a3 + 15);
        v110 = *((_DWORD *)a3 + 13);
        LODWORD(EffectInternal) = v109;
        v111 = *((_DWORD *)a3 + 12);
        v148 = v110;
        v112 = *((_DWORD *)a3 + 11);
        v147 = v111;
        v113 = *((_DWORD *)a3 + 10);
        v146 = v112;
        v114 = *((_DWORD *)a3 + 9);
        v145 = v113;
        v115 = *((_DWORD *)a3 + 8);
        v144 = v114;
        v116 = *((_DWORD *)a3 + 7);
        v143 = v115;
        v117 = *((_DWORD *)a3 + 6);
        v142 = v116;
        v118 = *((_DWORD *)a3 + 5);
        v141 = v117;
        v119 = *((_DWORD *)a3 + 4);
        v140 = v118;
        v120 = *((_DWORD *)a3 + 3);
        v139 = v119;
        v121 = *((_DWORD *)a3 + 2);
        v138 = v120;
        v122 = *((_DWORD *)a3 + 1);
        v137 = v121;
        v123 = *(_DWORD *)a3;
        v136 = v122;
        v135 = v123;
        v151 = CVisual::GetInteractionInternal(this);
        InteractionInternal = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v124,
          (unsigned int)&unk_18037FCAD,
          v125,
          v126,
          (__int64)&InteractionInternal,
          (__int64)&v151,
          (__int64)&v135,
          (__int64)&v136,
          (__int64)&v137,
          (__int64)&v138,
          (__int64)&v139,
          (__int64)&v140,
          (__int64)&v141,
          (__int64)&v142,
          (__int64)&v143,
          (__int64)&v144,
          (__int64)&v145,
          (__int64)&v146,
          (__int64)&v147,
          (__int64)&v148,
          (__int64)&EffectInternal,
          (__int64)&v129);
      }
    }
  }
}
