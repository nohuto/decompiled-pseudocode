/*
 * XREFs of ?PushCpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@0W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N@Z @ 0x180099090
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180098620 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?PopClipBoundsFromScope@CScopedClipStack@@QEAAXXZ @ 0x180012060 (-PopClipBoundsFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A334 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACB5C (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800ACDF0 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD4A4 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9B88 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1802602C4 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuClipToScope(
        CScopedClipStack *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6)
{
  char v6; // r12
  int v7; // r13d
  __int64 v8; // rsi
  __int64 v10; // r14
  float v12; // xmm9_4
  __int128 v13; // xmm0
  __int64 v14; // rbx
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int64 v19; // rbx
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  char v23; // al
  bool v24; // cl
  int v25; // eax
  int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // rcx
  float v31; // xmm8_4
  float v32; // xmm7_4
  float v33; // xmm6_4
  int v34; // eax
  int v35; // esi
  unsigned int v36; // edx
  __int128 v37; // xmm3
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // eax
  char v46; // al
  char v47; // al
  char v48; // al
  char v49; // cl
  float v50; // xmm5_4
  char v51; // al
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm7_4
  char v55; // r8
  char v56; // al
  float v57; // xmm0_4
  unsigned int v58; // r13d
  int v59; // eax
  __int64 v60; // rcx
  int v61; // ebx
  unsigned __int64 v62; // rax
  void *v63; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 *v67; // rbx
  __int64 v68; // rax
  unsigned int v69; // edx
  int v70; // r13d
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  char v74; // al
  __int64 v75; // rsi
  __int64 v76; // rbx
  char v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rcx
  float v82; // xmm4_4
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm8_4
  float v86; // xmm7_4
  float v87; // xmm6_4
  float v88; // xmm6_4
  float v89; // xmm7_4
  int v90; // xmm1_4
  _OWORD *v91; // rax
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  unsigned __int64 v100; // rax
  void *v101; // rbx
  __int64 v102; // rcx
  __int64 v103; // rcx
  int v104; // r9d
  __int64 v105; // rcx
  void *v106; // r13
  HANDLE v107; // rax
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rcx
  void (__fastcall ***v111)(_QWORD, __int64); // rcx
  char v112; // [rsp+48h] [rbp-C0h]
  void *lpMem; // [rsp+50h] [rbp-B8h] BYREF
  void *lpMem_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v115; // [rsp+68h] [rbp-A0h]
  __int128 v116; // [rsp+78h] [rbp-90h]
  __int128 v117; // [rsp+88h] [rbp-80h]
  int v118; // [rsp+98h] [rbp-70h]
  __int64 v119; // [rsp+A8h] [rbp-60h]
  __int128 v120; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v121; // [rsp+C8h] [rbp-40h]
  __int128 v122; // [rsp+D8h] [rbp-30h]
  __int128 v123; // [rsp+E8h] [rbp-20h]
  __int128 v124; // [rsp+F8h] [rbp-10h]
  __int128 v125; // [rsp+108h] [rbp+0h]
  __int128 v126; // [rsp+118h] [rbp+10h]
  char *v127; // [rsp+128h] [rbp+20h]
  __int128 v128; // [rsp+138h] [rbp+30h] BYREF
  __int128 v129; // [rsp+148h] [rbp+40h]
  __int128 v130; // [rsp+158h] [rbp+50h]
  __int128 v131; // [rsp+168h] [rbp+60h]
  int v132; // [rsp+178h] [rbp+70h]
  __int128 v133; // [rsp+188h] [rbp+80h] BYREF
  __int64 v134; // [rsp+198h] [rbp+90h]
  __int128 X; // [rsp+1A0h] [rbp+98h] BYREF
  int v136; // [rsp+1B0h] [rbp+A8h]
  int v137; // [rsp+1B4h] [rbp+ACh]
  float v138[6]; // [rsp+1B8h] [rbp+B0h] BYREF
  void *retaddr; // [rsp+290h] [rbp+188h]

  v6 = 0;
  v7 = a4;
  v8 = *(_QWORD *)a2;
  v10 = a2;
  v127 = a6;
  v12 = 0.0;
  *(_QWORD *)&v120 = 0LL;
  BYTE8(v120) = 0;
  LODWORD(v125) = 0;
  *((_QWORD *)&v125 + 1) = 0LL;
  LOBYTE(v126) = 0;
  v118 = 0;
  if ( !a5 )
  {
    v26 = *((_DWORD *)this + 6);
    BYTE1(v125) = BYTE1(v125) & 0xC0 | 0x17;
    v95 = *(_QWORD *)this;
    v121 = _xmm;
    v122 = _xmm;
    v96 = 88LL * (unsigned int)(v26 - 1);
    v123 = _xmm;
    v124 = _xmm;
    LOBYTE(v125) = 85;
    *(_OWORD *)lpMem_8 = *(_OWORD *)(v96 + v95 + 16);
    v115 = *(_OWORD *)(v96 + v95 + 32);
    v116 = *(_OWORD *)(v96 + v95 + 48);
    v117 = *(_OWORD *)(v96 + v95 + 64);
    v118 = *(_DWORD *)(v96 + v95 + 80);
    goto LABEL_9;
  }
  v13 = *(_OWORD *)a5;
  v14 = *(_QWORD *)this;
  v15 = *(_OWORD *)(a5 + 16);
  LODWORD(v125) = *(_DWORD *)(a5 + 64);
  v16 = (unsigned int)(*((_DWORD *)this + 6) - 1);
  v121 = v13;
  v17 = *(_OWORD *)(a5 + 32);
  v122 = v15;
  v123 = v17;
  v18 = *(_OWORD *)a5;
  v19 = 88 * v16 + v14 + 16;
  v124 = *(_OWORD *)(a5 + 48);
  v20 = *(_DWORD *)(a5 + 64);
  v21 = *(_OWORD *)(a5 + 16);
  if ( lpMem_8 == (void **)v19 )
  {
    v128 = v18;
    v93 = *(_OWORD *)(a5 + 32);
    v132 = v20;
    v129 = v21;
    v94 = *(_OWORD *)(a5 + 48);
    v130 = v93;
    v131 = v94;
    CMILMatrix::Multiply((CMILMatrix *)&v128, (const struct CMILMatrix *)v19);
    v25 = v132;
    *(_OWORD *)lpMem_8 = v128;
    v115 = v129;
    v116 = v130;
    v117 = v131;
    goto LABEL_7;
  }
  v118 = *(_DWORD *)(a5 + 64);
  *(_OWORD *)lpMem_8 = v18;
  v22 = *(_OWORD *)(a5 + 32);
  v23 = (char)((_BYTE)v20 << 6) >> 6;
  v115 = v21;
  v116 = v22;
  v117 = *(_OWORD *)(a5 + 48);
  if ( v23 )
  {
    v24 = v23 == 1;
  }
  else
  {
    if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(lpMem_8)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v117 - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v117 + 1) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v117 + 2) - 0.0) & _xmm) < 0.000081380211 )
    {
      v24 = 1;
      a2 = 1LL;
    }
    else
    {
      v24 = 0;
      LOBYTE(a2) = 3;
    }
    LOBYTE(v118) = a2 | v118 & 0xFC;
  }
  if ( !v24 )
  {
    v46 = (char)(*(_BYTE *)(v19 + 64) << 6) >> 6;
    if ( v46 )
    {
      if ( v46 == 1 )
        goto LABEL_8;
    }
    else
    {
      if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(v19)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 48) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 52) - 0.0) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 56) - 0.0) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(v19 + 64) &= ~2u;
        *(_BYTE *)(v19 + 64) |= 1u;
        goto LABEL_8;
      }
      *(_BYTE *)(v19 + 64) |= 3u;
    }
    v47 = (char)(16 * *(_BYTE *)(v19 + 65)) >> 6;
    if ( v47 )
    {
      if ( v47 != 1 )
        goto LABEL_129;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>(v19, 0)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 32) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 36) - 0.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(v19 + 65) |= 0xCu;
        goto LABEL_129;
      }
      *(_BYTE *)(v19 + 65) &= ~8u;
      *(_BYTE *)(v19 + 65) |= 4u;
    }
    v48 = *(_BYTE *)(v19 + 64);
    v49 = (char)(16 * v48) >> 6;
    if ( v49 )
    {
      if ( v49 != 1 )
        goto LABEL_129;
    }
    else
    {
      if ( !CMILMatrix::IsAffine<1>(v19, 1)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 8) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 24) - 0.0) & _xmm) >= 0.000081380211 )
      {
        *(_BYTE *)(v19 + 64) |= 0xCu;
        goto LABEL_129;
      }
      v48 = *(_BYTE *)(v19 + 64) & 0xF3 | 4;
      *(_BYTE *)(v19 + 64) = v48;
    }
    v50 = *(float *)&FLOAT_1_0;
    v51 = (char)(4 * v48) >> 6;
    if ( v51 )
    {
      if ( v51 == 1 )
        goto LABEL_56;
    }
    else
    {
      if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v19, a2, a3, a4)
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v19 - v50) & _xmm) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 20) - v50) & _xmm) < 0.000081380211 )
      {
        *(_BYTE *)(v19 + 64) &= ~0x20u;
        *(_BYTE *)(v19 + 64) |= 0x10u;
LABEL_56:
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v19 + 40) - v50) & _xmm) < 0.000081380211 )
        {
          v52 = *(float *)(v19 + 48);
          v53 = *(float *)(v19 + 56);
          v54 = *(float *)(v19 + 52);
          if ( COERCE_FLOAT(LODWORD(v52) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(LODWORD(v54) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(LODWORD(v53) & _xmm) >= 0.000081380211 )
          {
            v55 = BYTE1(v118);
            v56 = (char)(4 * BYTE1(v118)) >> 6;
            if ( v56 )
            {
              if ( v56 != 1
                || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v116) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
              {
                v56 = 0;
              }
            }
            else
            {
              v56 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                   (float)((float)((float)(COERCE_FLOAT(HIDWORD(lpMem_8[1]) & _xmm) * 61440.0)
                                                 + (float)(COERCE_FLOAT(HIDWORD(v115) & _xmm) * 61440.0))
                                         + COERCE_FLOAT(HIDWORD(v117) & _xmm))
                                 - v50) & _xmm) < 0.000081380211;
              v55 = (BYTE1(v118) ^ (-16 - 32 * v56)) & 0x30 ^ BYTE1(v118);
              BYTE1(v118) = v55;
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(HIDWORD(v116) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
                v56 = 0;
            }
            if ( v56 )
            {
              *(float *)&v117 = *(float *)&v117 + v52;
              v57 = *((float *)&v117 + 2) + v53;
              *((float *)&v117 + 1) = *((float *)&v117 + 1) + v54;
            }
            else
            {
              BYTE1(v118) = v55 & 0xF3;
              *(float *)lpMem_8 = *(float *)lpMem_8 + (float)(*((float *)&lpMem_8[1] + 1) * v52);
              *((float *)lpMem_8 + 1) = *((float *)lpMem_8 + 1) + (float)(*((float *)&lpMem_8[1] + 1) * v54);
              *(float *)&lpMem_8[1] = *(float *)&lpMem_8[1] + (float)(*((float *)&lpMem_8[1] + 1) * v53);
              *(float *)&v115 = *(float *)&v115 + (float)(*((float *)&v115 + 3) * v52);
              *((float *)&v115 + 1) = *((float *)&v115 + 1) + (float)(*((float *)&v115 + 3) * v54);
              *((float *)&v115 + 2) = *((float *)&v115 + 2) + (float)(*((float *)&v115 + 3) * v53);
              *(float *)&v116 = *(float *)&v116 + (float)(*((float *)&v116 + 3) * v52);
              *((float *)&v116 + 1) = *((float *)&v116 + 1) + (float)(*((float *)&v116 + 3) * v54);
              *((float *)&v116 + 2) = *((float *)&v116 + 2) + (float)(*((float *)&v116 + 3) * v53);
              *(float *)&v117 = *(float *)&v117 + (float)(*((float *)&v117 + 3) * v52);
              *((float *)&v117 + 1) = *((float *)&v117 + 1) + (float)(*((float *)&v117 + 3) * v54);
              v57 = *((float *)&v117 + 2) + (float)(*((float *)&v117 + 3) * v53);
            }
            LOBYTE(v118) = v118 & 0xFC;
            *((float *)&v117 + 2) = v57;
          }
          goto LABEL_8;
        }
        goto LABEL_129;
      }
      *(_BYTE *)(v19 + 64) |= 0x30u;
    }
LABEL_129:
    if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(lpMem_8) )
    {
      v82 = *(float *)&v117;
      v83 = *((float *)&v117 + 1);
      v84 = *((float *)&v117 + 2);
      *(_OWORD *)lpMem_8 = *(_OWORD *)v19;
      v115 = *(_OWORD *)(v19 + 16);
      v116 = *(_OWORD *)(v19 + 32);
      v117 = *(_OWORD *)(v19 + 48);
      v118 = *(_DWORD *)(v19 + 64);
      CMILMatrix::PrependTranslate((CMILMatrix *)lpMem_8, v82, v83, v84);
    }
    else if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v19) )
    {
      v85 = *(float *)(v19 + 48);
      v86 = *(float *)(v19 + 52);
      v87 = *(float *)(v19 + 56);
      CMILMatrix::Scale((CMILMatrix *)lpMem_8, *(float *)v19, *(float *)(v19 + 20), *(float *)(v19 + 40));
      CMILMatrix::Translate((CMILMatrix *)lpMem_8, v85, v86, v87);
    }
    else if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(lpMem_8)
           && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v19) )
    {
      v88 = *((float *)&v116 + 2);
      v89 = *((float *)&v117 + 2);
      *(void **)&v133 = lpMem_8[0];
      *((_QWORD *)&v133 + 1) = v115;
      v134 = v117;
      *(_QWORD *)&X = *(_QWORD *)v19;
      *((_QWORD *)&X + 1) = *(_QWORD *)(v19 + 16);
      v90 = *(_DWORD *)(v19 + 52);
      v136 = *(_DWORD *)(v19 + 48);
      v137 = v90;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)v138,
        (const struct D2D1::Matrix3x2F *)&v133,
        (const struct D2D1::Matrix3x2F *)&X);
      CMILMatrix::Set2DAffineMatrix((CMILMatrix *)lpMem_8, v138[0], v138[1], v138[2], v138[3], v138[4], v138[5]);
      *((float *)&v116 + 2) = v88 * *(float *)(v19 + 40);
      *((float *)&v117 + 2) = (float)(v89 * *(float *)(v19 + 40)) + *(float *)(v19 + 56);
    }
    else
    {
      v91 = (_OWORD *)Windows::Foundation::Numerics::operator*(&v128, lpMem_8, v19);
      *(_OWORD *)lpMem_8 = *v91;
      v115 = v91[1];
      v116 = v91[2];
      v92 = v91[3];
      v118 = 0;
      v117 = v92;
    }
    goto LABEL_8;
  }
  *(_OWORD *)lpMem_8 = *(_OWORD *)v19;
  v115 = *(_OWORD *)(v19 + 16);
  v116 = *(_OWORD *)(v19 + 32);
  v117 = *(_OWORD *)(v19 + 48);
  v25 = *(_DWORD *)(v19 + 64);
LABEL_7:
  v118 = v25;
LABEL_8:
  v26 = *((_DWORD *)this + 6);
LABEL_9:
  if ( v26 && *(_DWORD *)(88LL * (unsigned int)(v26 - 1) + *(_QWORD *)this + 4) )
    DWORD2(v126) = *(_DWORD *)(112LL * (unsigned int)(*((_DWORD *)this + 234) - 1) + *((_QWORD *)this + 114) + 104);
  else
    DWORD2(v126) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) )
    goto LABEL_17;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 64LL))(v8, &lpMem) || (_DWORD)lpMem != 1 )
    goto LABEL_18;
  if ( !((char)v118 >> 6) )
  {
    if ( CMILMatrix::IsAffine<1>((__int64)lpMem_8, 1)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)lpMem_8 + 1) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v115 - 0.0) & _xmm) < 0.000081380211 )
    {
      LOBYTE(v118) = v118 & 0x3F | 0x40;
      goto LABEL_17;
    }
    LOBYTE(v118) = v118 | 0xC0;
LABEL_144:
    if ( !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(lpMem_8) )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (char)v118 >> 6 != 1 )
    goto LABEL_144;
LABEL_17:
  ++DWORD2(v126);
  v6 = 1;
LABEL_18:
  v27 = *(_QWORD *)v10;
  v28 = -2003292412;
  X = 0LL;
  if ( !v27 )
    goto LABEL_87;
  v29 = (*(__int64 (__fastcall **)(__int64, __int128 *, void **))(*(_QWORD *)v27 + 48LL))(v27, &X, lpMem_8);
  v28 = v29;
  if ( v29 >= 0 )
  {
    v12 = *((float *)&X + 3);
    v31 = *((float *)&X + 2);
    v32 = *((float *)&X + 1);
    LODWORD(v33) = X;
    goto LABEL_21;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x140u);
  if ( v28 != -2003304438 )
LABEL_87:
    ModuleFailFastForHRESULT(v28, retaddr);
  v31 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  X = 0uLL;
LABEL_21:
  if ( !v6 )
  {
    if ( COERCE_FLOAT(LODWORD(v33) & _xmm) < 8388608.0 )
      v33 = (float)(int)floorf(v33);
    *(float *)&X = v33;
    if ( COERCE_FLOAT(LODWORD(v32) & _xmm) < 8388608.0 )
      v32 = (float)(int)floorf(v32);
    *((float *)&X + 1) = v32;
    if ( COERCE_FLOAT(LODWORD(v31) & _xmm) < 8388608.0 )
      v31 = (float)(int)o_ceilf_0(v31);
    *((float *)&X + 2) = v31;
    if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 8388608.0 )
      v12 = (float)(int)o_ceilf_0(v12);
    *((float *)&X + 3) = v12;
  }
  v34 = *((_DWORD *)this + 6);
  v35 = -2147024362;
  if ( v34 && *(_DWORD *)(88LL * (unsigned int)(v34 - 1) + *(_QWORD *)this + 8) )
  {
    v133 = 0LL;
    if ( v7 == 1 )
    {
      RoundWithHalvesDown(&X, &v133);
      v12 = *((float *)&v133 + 3);
      v31 = *((float *)&v133 + 2);
      v32 = *((float *)&v133 + 1);
      LODWORD(v33) = v133;
    }
    v36 = *((_DWORD *)this + 524);
    v133 = 0LL;
    if ( v36 )
    {
      v37 = *(_OWORD *)(*((_QWORD *)this + 264) + 16LL * (v36 - 1));
      v133 = v37;
    }
    else
    {
      LODWORD(v37) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v133 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    if ( v33 > *(float *)&v37 )
    {
      *(float *)&v133 = v33;
      *(float *)&v37 = v33;
    }
    v38 = *((float *)&v133 + 1);
    if ( v32 > *((float *)&v133 + 1) )
    {
      *((float *)&v133 + 1) = v32;
      v38 = v32;
    }
    v39 = *((float *)&v133 + 2);
    if ( *((float *)&v133 + 2) > v31 )
    {
      *((float *)&v133 + 2) = v31;
      v39 = v31;
    }
    v40 = *((float *)&v133 + 3);
    if ( *((float *)&v133 + 3) > v12 )
    {
      *((float *)&v133 + 3) = v12;
      v40 = v12;
    }
    if ( v39 <= *(float *)&v37 || v40 <= v38 )
      v133 = 0uLL;
    v41 = *((unsigned int *)this + 525);
    lpMem = 0LL;
    if ( v36 != (_DWORD)v41 )
      goto LABEL_39;
    v97 = 2 * v41;
    if ( (unsigned __int64)(2 * v41) > 0xFFFFFFFF )
    {
      v70 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0LL, -2147024362, 0x64u);
    }
    else
    {
      if ( (unsigned int)v97 <= 8 )
        v97 = 8LL;
      v119 = v97;
      v98 = HrMalloc(0x10uLL, (unsigned int)v97, &lpMem);
      v70 = v98;
      if ( v98 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, v98, 0x6Bu);
      }
      else
      {
        v100 = 16LL * *((unsigned int *)this + 524);
        if ( v100 <= 0xFFFFFFFF )
        {
          v101 = lpMem;
          memcpy_0(lpMem, *((const void **)this + 264), (unsigned int)v100);
          DefaultHeap::Free(*((void **)this + 264));
          v36 = *((_DWORD *)this + 524);
          *((_DWORD *)this + 525) = v119;
          *((_QWORD *)this + 264) = v101;
LABEL_39:
          v42 = v36;
LABEL_40:
          *(_OWORD *)(*((_QWORD *)this + 264) + 16 * v42) = v133;
          ++*((_DWORD *)this + 524);
          v43 = *((_DWORD *)this + 530);
          if ( v43 <= *((_DWORD *)this + 524) )
            v43 = *((_DWORD *)this + 524);
          *((_DWORD *)this + 530) = v43;
          goto LABEL_89;
        }
        v70 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, -2147024362, 0x6Du);
      }
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
        if ( v70 >= 0 )
          goto LABEL_89;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0LL, v70, 0x31u);
    MilInstrumentationCheckHR_MaybeFailFast(v102, 0LL, 0LL, v70, 0x1C3u);
    v104 = v70;
LABEL_167:
    MilInstrumentationCheckHR_MaybeFailFast(v103, 0LL, 0LL, v104, 0x17Du);
    goto LABEL_95;
  }
  v133 = 0LL;
  if ( v7 == 1 )
  {
    RoundWithHalvesDown(&X, &v133);
    v12 = *((float *)&v133 + 3);
    v31 = *((float *)&v133 + 2);
    v32 = *((float *)&v133 + 1);
    LODWORD(v33) = v133;
  }
  v44 = *((unsigned int *)this + 525);
  v45 = *((_DWORD *)this + 524);
  *(_QWORD *)&v133 = __PAIR64__(LODWORD(v32), LODWORD(v33));
  *((_QWORD *)&v133 + 1) = __PAIR64__(LODWORD(v12), LODWORD(v31));
  lpMem = 0LL;
  if ( v45 != (_DWORD)v44 )
  {
    v42 = v45;
    goto LABEL_40;
  }
  v58 = 2 * v44;
  if ( (unsigned __int64)(2 * v44) > 0xFFFFFFFF )
  {
    v61 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, -2147024362, 0x64u);
    v70 = -2147024362;
    LODWORD(lpMem) = -2147024362;
LABEL_166:
    MilInstrumentationCheckHR_MaybeFailFast(v105, 0LL, 0LL, v61, 0x1BFu);
    v104 = (int)lpMem;
    goto LABEL_167;
  }
  if ( v58 <= 8 )
    v58 = 8;
  v59 = HrMalloc(0x10uLL, v58, &lpMem);
  v61 = v59;
  if ( v59 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, v59, 0x6Bu);
  }
  else
  {
    v62 = 16LL * *((unsigned int *)this + 524);
    if ( v62 <= 0xFFFFFFFF )
    {
      v63 = lpMem;
      memcpy_0(lpMem, *((const void **)this + 264), (unsigned int)v62);
      DefaultHeap::Free(*((void **)this + 264));
      v42 = *((unsigned int *)this + 524);
      *((_QWORD *)this + 264) = v63;
      *((_DWORD *)this + 525) = v58;
      goto LABEL_40;
    }
    v61 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, -2147024362, 0x6Du);
  }
  v106 = lpMem;
  if ( lpMem )
  {
    v107 = GetProcessHeap();
    HeapFree(v107, 0, v106);
  }
  LODWORD(lpMem) = v61;
  v70 = v61;
  if ( v61 < 0 )
    goto LABEL_166;
LABEL_89:
  v66 = 88LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  ++*(_DWORD *)(v66 + *(_QWORD *)this + 8);
  v67 = (__int64 *)((char *)this + 912);
  v68 = *((unsigned int *)this + 234);
  v69 = v68 + 1;
  if ( (int)v68 + 1 < (unsigned int)v68 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0LL, -2147024362, 0xB5u);
    v70 = -2147024362;
LABEL_171:
    MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0LL, v35, 0x184u);
    CScopedClipStack::PopClipBoundsFromScope(this);
    goto LABEL_95;
  }
  if ( v69 <= *((_DWORD *)this + 233) )
  {
    v70 = 0;
    v71 = 112 * v68;
    v72 = *v67;
    *(_OWORD *)(v71 + v72) = v120;
    *(_OWORD *)(v71 + v72 + 16) = v121;
    *(_OWORD *)(v71 + v72 + 32) = v122;
    *(_OWORD *)(v71 + v72 + 48) = v123;
    *(_OWORD *)(v71 + v72 + 64) = v124;
    *(_OWORD *)(v71 + v72 + 80) = v125;
    *(_OWORD *)(v71 + v72 + 96) = v126;
    *((_DWORD *)this + 234) = v69;
    goto LABEL_92;
  }
  v109 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 912, 112LL, 1LL, &v120);
  v35 = v109;
  v70 = v109;
  if ( v109 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v110, 0LL, 0LL, v109, 0xC0u);
    goto LABEL_171;
  }
LABEL_92:
  v73 = *(_QWORD *)v10;
  v74 = *(_BYTE *)(v10 + 8);
  v75 = *((_QWORD *)this + 114) + 112LL * (unsigned int)(*((_DWORD *)this + 234) - 1);
  v112 = v74;
  v119 = *(_QWORD *)v10;
  if ( *(_BYTE *)(v75 + 8) && *(_QWORD *)v75 )
  {
    (***(void (__fastcall ****)(_QWORD, __int64))v75)(*(_QWORD *)v75, 1LL);
    v74 = v112;
    v73 = v119;
  }
  *(_BYTE *)(v75 + 8) = v74;
  *(_QWORD *)v75 = v73;
  *(_QWORD *)v10 = 0LL;
  *(_BYTE *)(v10 + 8) = 0;
  v76 = *v67;
  v77 = *(_BYTE *)(a3 + 8);
  v78 = 112LL * (unsigned int)(*((_DWORD *)this + 234) - 1);
  v79 = *(_QWORD *)a3;
  v119 = *(_QWORD *)a3;
  if ( *(_BYTE *)(v78 + v76 + 96) )
  {
    v111 = *(void (__fastcall ****)(_QWORD, __int64))(v78 + v76 + 88);
    if ( v111 )
    {
      (**v111)(v111, 1LL);
      v79 = v119;
    }
  }
  *(_QWORD *)(v78 + v76 + 88) = v79;
  *(_BYTE *)(v78 + v76 + 96) = v77;
  *(_QWORD *)a3 = 0LL;
  *(_BYTE *)(a3 + 8) = 0;
  v80 = 88LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
  ++*(_DWORD *)(v80 + *(_QWORD *)this + 4);
  *v127 = v6;
LABEL_95:
  if ( (_BYTE)v126 && *((_QWORD *)&v125 + 1) )
    (***((void (__fastcall ****)(_QWORD, __int64))&v125 + 1))(*((_QWORD *)&v125 + 1), 1LL);
  *((_QWORD *)&v125 + 1) = 0LL;
  LOBYTE(v126) = 0;
  if ( BYTE8(v120) && (_QWORD)v120 )
    (**(void (__fastcall ***)(_QWORD, __int64))v120)(v120, 1LL);
  return (unsigned int)v70;
}
