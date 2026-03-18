/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800667E0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800672D0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180051AC4 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180052010 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800579A0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18008E8AC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800AAB24 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE880 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CC774 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800CD9B8 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D0498 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFE94 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFEC8 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E2A30 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18026FA2C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CVisual *a3,
        char a4)
{
  __int64 v4; // rax
  float v6; // xmm7_4
  unsigned __int64 *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  _DWORD *v11; // r8
  float *v12; // r11
  __int64 v13; // rax
  float v14; // xmm1_4
  float *v15; // rsi
  float *v16; // r14
  int v17; // ecx
  float *v18; // r13
  float *v19; // r12
  float *v20; // r15
  unsigned int v21; // eax
  char v22; // dl
  float v23; // xmm1_4
  __m128 *v24; // r9
  float *v25; // r10
  float *v27; // rdx
  bool v28; // al
  char v29; // dl
  __m128 v30; // xmm5
  __m128 v31; // xmm4
  __m128 v32; // xmm2
  char v33; // al
  __m128 v34; // xmm3
  char v35; // r8
  char v36; // al
  char v37; // al
  __m128 *v38; // rcx
  char v39; // al
  char v40; // al
  bool v41; // r11
  char v42; // al
  char v43; // al
  bool v44; // r11
  bool v45; // r8
  float *v46; // rdi
  char v47; // al
  char v48; // cl
  char v49; // al
  __int64 v50; // rdx
  _BYTE *v51; // rax
  __int64 i; // rcx
  __int64 *v53; // rax
  __int64 v54; // rax
  float v55; // edx
  float *v56; // rcx
  struct CEffect *EffectInternal; // rdi
  __int64 v58; // rcx
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm7_4
  float v63; // xmm6_4
  __m128 v64; // xmm3
  __m128 v65; // xmm2
  __m128 *v66; // rax
  char v68; // [rsp+48h] [rbp-C0h]
  __m128 *v69; // [rsp+50h] [rbp-B8h]
  float *v70; // [rsp+58h] [rbp-B0h]
  __int128 v71; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v72; // [rsp+78h] [rbp-90h]
  __m128 v73; // [rsp+88h] [rbp-80h]
  __m128 v74; // [rsp+98h] [rbp-70h]
  __int32 v75; // [rsp+A8h] [rbp-60h]
  unsigned int v76; // [rsp+B8h] [rbp-50h]
  __m128 *v77; // [rsp+C0h] [rbp-48h]
  __int128 v78; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v79; // [rsp+D8h] [rbp-30h]
  __int128 v80; // [rsp+E8h] [rbp-20h]
  __int128 v81; // [rsp+F8h] [rbp-10h]
  __int32 v82; // [rsp+108h] [rbp+0h]
  const struct CVisualTree *v83; // [rsp+118h] [rbp+10h]
  struct CVisual *v84; // [rsp+120h] [rbp+18h]
  _BYTE v85[64]; // [rsp+138h] [rbp+30h] BYREF
  int v86; // [rsp+178h] [rbp+70h]
  __int128 v87; // [rsp+188h] [rbp+80h] BYREF
  __int64 v88; // [rsp+198h] [rbp+90h]
  _QWORD v89[3]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v90[3]; // [rsp+1B8h] [rbp+B0h] BYREF

  v4 = *(_QWORD *)this;
  v76 = 0;
  v84 = a3;
  v83 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(v4 + 56))(this, 93LL)
    && (*((_QWORD *)this + 89) || *((_QWORD *)this + 88))
    && !*((_BYTE *)this + 728) )
  {
    *((_DWORD *)this + 45) = *((_DWORD *)this + 35);
    *((_DWORD *)this + 46) = *((_DWORD *)this + 36);
    *(_QWORD *)((char *)this + 172) = 0LL;
  }
  v6 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           58LL) )
    {
      v6 = *((float *)EffectInternal + 20);
    }
  }
  v7 = (unsigned __int64 *)((char *)this + 148);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v6, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *(_QWORD *)((char *)this + 164) = 0LL;
    *(_QWORD *)((char *)this + 156) = 0LL;
    *v7 = 0LL;
  }
  else
  {
    v8 = CVisual::CalcRootBounds(this);
    v76 = v8;
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x57Bu, 0LL);
      return v10;
    }
  }
  v11 = (_DWORD *)*((_QWORD *)this + 29);
  v12 = (float *)((char *)this + 148);
  if ( (*v11 & 0x4000000) != 0 )
  {
    v50 = (unsigned int)v11[1];
    v51 = v11 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v50; ++v51 )
    {
      if ( *v51 == 6 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v50 )
      v53 = 0LL;
    else
      v53 = (__int64 *)((char *)v11 + v50 + 8 * i - (((_BYTE)v50 + 15) & 7) + 15);
    v54 = *v53;
    if ( v54 )
    {
      *(_OWORD *)(v54 + 72) = *(_OWORD *)v7;
      *(_QWORD *)(v54 + 88) = *(_QWORD *)((char *)this + 164);
    }
  }
  v13 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v13 + 4) & 0x8000000) != 0 )
  {
    v55 = *(float *)(v13 + 12);
    v56 = (float *)(v13 + 12);
    if ( (LODWORD(v55) & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v56 = (float *)((char *)v56 + (LODWORD(v55) & 0xFFFFFF) + 4);
        v55 = *v56;
      }
      while ( (*(_DWORD *)v56 & 0x7F000000) != 0x5000000 );
    }
    v14 = v56[1];
  }
  else
  {
    v14 = *(float *)&FLOAT_1_0;
  }
  v15 = (float *)((char *)this + 164);
  v16 = (float *)((char *)this + 168);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v14, 0.0))) & _xmm) < 0.0000011920929 )
  {
    *((_DWORD *)this + 40) = 0;
    v19 = (float *)((char *)this + 160);
    *((_DWORD *)this + 39) = 0;
    v18 = (float *)((char *)this + 156);
    *v15 = 0.0;
    *v16 = 0.0;
    v20 = (float *)((char *)this + 152);
    *((_DWORD *)this + 38) = 0;
    *(_DWORD *)v7 = 0;
    goto LABEL_22;
  }
  v17 = (*v16 <= *v15) + 1;
  v18 = (float *)((char *)this + 156);
  v19 = (float *)((char *)this + 160);
  v20 = (float *)((char *)this + 152);
  if ( *((float *)this + 39) > *(float *)v7 )
    v17 = *v16 <= *v15;
  v21 = v17 + 1;
  if ( *((float *)this + 40) > *v20 )
    v21 = v17;
  if ( v21 > 1 )
    goto LABEL_22;
  if ( !a4 )
  {
    v22 = 0;
    v82 = 0;
    v79 = _xmm;
    v81 = _xmm;
    v23 = *((float *)this + 31);
    v68 = 0;
    LOWORD(v82) = 5973;
    v78 = _xmm;
    v80 = _xmm;
    if ( v23 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      v22 = 1;
      *(_QWORD *)&v81 = __PAIR64__(*((_DWORD *)this + 32), LODWORD(v23));
      DWORD2(v81) = *((_DWORD *)this + 30);
      LOBYTE(v82) = 84;
      v68 = 1;
    }
    v24 = (__m128 *)*((_QWORD *)this + 30);
    v25 = (float *)((char *)this + 148);
    v77 = v24;
    v70 = (float *)((char *)this + 148);
    if ( !v24 )
      goto LABEL_19;
    v27 = (float *)((char *)this + 140);
    v28 = (v24[2].m128_i8[0] & 1) != 0;
    if ( this != (CVisual *)-140LL )
    {
      if ( (v24[2].m128_i8[0] & 1) == 0
        && v24[9].m128_i8[12]
        && (v24[9].m128_f32[1] != *v27 || v24[9].m128_f32[2] != *((float *)this + 36)) )
      {
        v28 = 1;
      }
      *(unsigned __int64 *)((char *)v24[9].m128_u64 + 4) = *(_QWORD *)v27;
    }
    if ( v28 )
    {
      (*(void (__fastcall **)(__m128 *, float *, __m128 *))(v24->m128_u64[0] + 200))(v24, v27, v24 + 5);
      v24 = v77;
      v12 = (float *)((char *)this + 148);
      v77[2].m128_i32[0] &= ~1u;
    }
    v30 = v24[5];
    v75 = v24[9].m128_i32[0];
    v29 = v75;
    v31 = v24[6];
    v32 = v24[7];
    v33 = (char)((_BYTE)v75 << 6) >> 6;
    v71 = (__int128)v30;
    v72 = v31;
    v73 = v32;
    v34 = v24[8];
    v74 = v34;
    if ( v33 )
    {
      v70 = v12;
      v25 = v12;
      if ( v33 == 1 )
        goto LABEL_68;
      v38 = (__m128 *)((char *)this + 148);
      v69 = (__m128 *)((char *)this + 148);
LABEL_71:
      v46 = v25;
      v47 = (char)((_BYTE)v82 << 6) >> 6;
      v77 = v38;
      if ( v47 )
      {
        v7 = (unsigned __int64 *)v69;
        if ( v47 == 1 )
          goto LABEL_73;
      }
      else
      {
        if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(&v78)
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v81 - 0.0) & _xmm) < 0.000081380211 )
        {
          v25 = v46;
          v70 = v46;
          v7 = (unsigned __int64 *)v77;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v81 + 1) - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v81 + 2) - 0.0) & _xmm) < 0.000081380211 )
          {
            v34 = v74;
            v32 = v73;
            v31 = v72;
            v30 = (__m128)v71;
            goto LABEL_73;
          }
          v70 = v25;
        }
        else
        {
          v7 = (unsigned __int64 *)v69;
        }
        LOBYTE(v82) = v82 | 3;
      }
      if ( !(unsigned __int8)CMILMatrix::IsTranslate<1>(&v78) )
      {
        if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(&v71) )
        {
          v59 = v74.m128_f32[0];
          v60 = v74.m128_f32[1];
          v61 = v74.m128_f32[2];
          v71 = v78;
          v72 = (__m128)v79;
          v73 = (__m128)v80;
          v74 = (__m128)v81;
          v75 = v82;
          CMILMatrix::PrependTranslate((CMILMatrix *)&v71, v59, v60, v61);
          goto LABEL_97;
        }
        if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(&v78) )
        {
          if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v71)
            || !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v78) )
          {
            v66 = (__m128 *)Windows::Foundation::Numerics::operator*(v85, &v71, &v78);
            v30 = *v66;
            v71 = (__int128)*v66;
            v31 = v66[1];
            v72 = v31;
            v32 = v66[2];
            v73 = v32;
            v34 = v66[3];
            v75 = 0;
            goto LABEL_99;
          }
          v62 = v73.m128_f32[2];
          v63 = v74.m128_f32[2];
          v90[0] = v71;
          v90[1] = v72.m128_u64[0];
          v90[2] = v74.m128_u64[0];
          v89[0] = v78;
          v89[1] = v79;
          v89[2] = v81;
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v87,
            (const struct D2D1::Matrix3x2F *)v90,
            (const struct D2D1::Matrix3x2F *)v89);
          CMILMatrix::Set2DAffineMatrix(
            (CMILMatrix *)&v71,
            *(float *)&v87,
            *((float *)&v87 + 1),
            *((float *)&v87 + 2),
            *((float *)&v87 + 3),
            *(float *)&v88,
            *((float *)&v88 + 1));
          v64 = _mm_shuffle_ps(v74, v74, 210);
          v65 = _mm_shuffle_ps(v73, v73, 210);
          v65.m128_f32[0] = v62 * *((float *)&v80 + 2);
          v32 = _mm_shuffle_ps(v65, v65, 201);
          v64.m128_f32[0] = (float)(v63 * *((float *)&v80 + 2)) + *((float *)&v81 + 2);
          v73 = v32;
          v34 = _mm_shuffle_ps(v64, v64, 201);
          v74 = v34;
LABEL_98:
          v31 = v72;
          v30 = (__m128)v71;
LABEL_99:
          v25 = v70;
          goto LABEL_73;
        }
        CMILMatrix::Scale((CMILMatrix *)&v71, *(float *)&v78, *((float *)&v79 + 1), *((float *)&v80 + 2));
      }
      CMILMatrix::Translate((CMILMatrix *)&v71, *(float *)&v81, *((float *)&v81 + 1), *((float *)&v81 + 2));
LABEL_97:
      v34 = v74;
      v32 = v73;
      goto LABEL_98;
    }
    v35 = BYTE1(v75);
    v36 = (char)(16 * BYTE1(v75)) >> 6;
    if ( !v36 )
    {
      v37 = (char)(4 * BYTE1(v75)) >> 6;
      if ( v37 )
      {
        if ( v37 != 1
          || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(_mm_shuffle_ps(v32, v32, 255).m128_u32[0] & _xmm)
                                                    * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        {
          v37 = 0;
        }
      }
      else
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(v72.m128_i32[3] & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(HIDWORD(v71) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(v74.m128_i32[3] & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
        {
          v48 = 0;
          v49 = 48;
        }
        else
        {
          v48 = 1;
          v49 = 16;
        }
        v35 = v49 | BYTE1(v75) & 0xCF;
        v37 = v48 & (COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                    (float)(COERCE_FLOAT(_mm_shuffle_ps(v32, v32, 255).m128_u32[0] & _xmm) * 61440.0)
                                  - 0.0) & _xmm) < 0.000081380211);
      }
      v70 = v12;
      v38 = (__m128 *)((char *)this + 148);
      v69 = (__m128 *)((char *)this + 148);
      v25 = v12;
      if ( v37 )
      {
        v70 = v12;
        v69 = (__m128 *)((char *)this + 148);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v32.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v32, v32, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
          {
            v35 = v35 & 0xF3 | 4;
            BYTE1(v75) = v35;
LABEL_43:
            v77 = v38;
            v39 = (char)(16 * v75) >> 6;
            if ( v39 )
            {
              if ( v39 == 1 )
              {
LABEL_50:
                v70 = v25;
                v42 = (char)(4 * v29) >> 6;
                v69 = v38;
                v77 = v38;
                if ( v42 )
                {
                  v69 = v38;
                  v70 = v25;
                  v45 = v42 == 1;
                  goto LABEL_62;
                }
                if ( !(v29 >> 6) )
                {
                  v43 = (char)(4 * v35) >> 6;
                  if ( v43 )
                  {
                    v44 = v43 == 1;
                  }
                  else
                  {
                    v44 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                         (float)((float)((float)(COERCE_FLOAT(v72.m128_i32[3] & _xmm) * 61440.0)
                                                       + (float)(COERCE_FLOAT(HIDWORD(v71) & _xmm) * 61440.0))
                                               + COERCE_FLOAT(v74.m128_i32[3] & _xmm))
                                       - 1.0) & _xmm) < 0.000081380211;
                    BYTE1(v75) = (v35 ^ (-16 - 32 * v44)) & 0x30 ^ v35;
                  }
                  if ( v44 )
                  {
                    v70 = v25;
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v30, v30, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                    {
                      v69 = v77;
                      v38 = v77;
                      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v31.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                      {
                        v29 = v29 & 0x3F | 0x40;
LABEL_58:
                        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v30.m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
                        {
                          v70 = v25;
                          v69 = v38;
                          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v31, v31, 85).m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
                          {
                            v45 = 1;
LABEL_61:
                            v29 ^= (v29 ^ (-16 - 32 * v45)) & 0x30;
LABEL_62:
                            if ( v45
                              && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v32, v32, 170).m128_f32[0] - 1.0) & _xmm) < 0.000081380211 )
                            {
                              v70 = v25;
                              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v34.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v34, v34, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                              {
                                v7 = (unsigned __int64 *)v38;
LABEL_68:
                                v30 = (__m128)v78;
                                v31 = (__m128)v79;
                                v32 = (__m128)v80;
                                v34 = (__m128)v81;
                                v75 = v82;
LABEL_73:
                                v22 = 1;
                                v68 = 1;
                                v78 = (__int128)v30;
                                v79 = (__int128)v31;
                                v80 = (__int128)v32;
                                v81 = (__int128)v34;
                                v82 = v75;
LABEL_19:
                                if ( !v84 )
                                {
                                  if ( v22 )
                                    CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)&v78, v25, v25);
                                  goto LABEL_22;
                                }
                                v58 = *((_QWORD *)this + 11);
                                v86 = 0;
                                CVisual::GetWorldTransform(v58, v83, 1LL, v85, 0LL, 0LL);
                                if ( CMILMatrix::Invert((CMILMatrix *)v85) )
                                {
                                  v75 = 0;
                                  CVisual::GetWorldTransform(v84, v83, 1LL, &v71, 0LL, 0LL);
                                  if ( v68 )
                                    CMILMatrix::Multiply(
                                      (const struct CMILMatrix *)&v78,
                                      (const struct CMILMatrix *)&v71,
                                      (struct CMILMatrix *)&v71);
                                  v88 = 0LL;
                                  v87 = 0LL;
                                  CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)&v71, v70, (float *)&v87);
                                  CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)v85, (float *)&v87, v70);
                                  goto LABEL_22;
                                }
                                goto LABEL_147;
                              }
                              v69 = v38;
                              v70 = v25;
                            }
                            goto LABEL_70;
                          }
                          v69 = v38;
                          v70 = v25;
                        }
LABEL_88:
                        v45 = 0;
                        goto LABEL_61;
                      }
                      v70 = v25;
                    }
                    v69 = v38;
                  }
                  v29 |= 0xC0u;
                  goto LABEL_88;
                }
                v69 = v38;
                v70 = v25;
                if ( v29 >> 6 != 1 )
                  goto LABEL_88;
                goto LABEL_58;
              }
            }
            else
            {
              v40 = (char)(4 * v35) >> 6;
              if ( v40 )
              {
                v41 = v40 == 1;
              }
              else
              {
                v41 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                     (float)((float)((float)(COERCE_FLOAT(v72.m128_i32[3] & _xmm) * 61440.0)
                                                   + (float)(COERCE_FLOAT(HIDWORD(v71) & _xmm) * 61440.0))
                                           + COERCE_FLOAT(v74.m128_i32[3] & _xmm))
                                   - 1.0) & _xmm) < 0.000081380211;
                v35 ^= (v35 ^ (-16 - 32 * v41)) & 0x30;
                v38 = v69;
                BYTE1(v75) = v35;
              }
              if ( v41
                && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v30, v30, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
              {
                v38 = v77;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v31, v31, 170).m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                {
                  v29 = v75 & 0xF3 | 4;
                  goto LABEL_50;
                }
                v69 = v77;
                v70 = v25;
              }
              v29 = v75 | 0xC;
            }
LABEL_70:
            LOBYTE(v75) = v29 | 3;
            goto LABEL_71;
          }
          v69 = (__m128 *)((char *)this + 148);
          v70 = v12;
        }
      }
      BYTE1(v75) = v35 | 0xC;
      goto LABEL_70;
    }
    v70 = v12;
    v38 = (__m128 *)((char *)this + 148);
    v69 = (__m128 *)((char *)this + 148);
    v25 = v12;
    if ( v36 != 1 )
      goto LABEL_70;
    goto LABEL_43;
  }
LABEL_147:
  *(_OWORD *)v7 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v7[2] = qword_1803E4FC8;
LABEL_22:
  if ( *v18 < *(float *)v7 || *v19 < *v20 || *v16 < *v15 )
  {
    *(_OWORD *)v7 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v7[2] = qword_1803E4FC8;
  }
  return v76;
}
