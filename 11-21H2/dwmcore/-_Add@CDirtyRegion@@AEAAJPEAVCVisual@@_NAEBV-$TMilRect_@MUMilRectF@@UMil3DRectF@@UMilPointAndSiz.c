/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A3D00
 * Callers:
 *     ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18008E330 (-AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5DA4 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE9C8 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180085688 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800D2BD8 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x1800D8F58 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     McTemplateU0pdffff_EventWriteTransfer @ 0x1801129C6 (McTemplateU0pdffff_EventWriteTransfer.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, unsigned __int8 a3, __m128 *a4)
{
  unsigned int v4; // edi
  int v5; // r15d
  float v9; // xmm10_4
  float v10; // xmm8_4
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128 v16; // xmm12
  __m128 v17; // xmm12
  int v18; // edx
  char *v19; // rdi
  char *v20; // rsi
  bool v21; // al
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  float *v26; // rsi
  float v27; // xmm1_4
  float v28; // xmm0_4
  unsigned int v29; // r9d
  unsigned int v30; // edi
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned int v33; // r8d
  __int64 v34; // r10
  float *v35; // r10
  float v36; // xmm1_4
  float v37; // xmm2_4
  float v38; // xmm3_4
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rsi
  char *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r11d
  float v45; // xmm4_4
  float v46; // xmm3_4
  unsigned int v47; // r14d
  __int64 v48; // r8
  float v49; // xmm2_4
  float v50; // xmm1_4
  __int64 v51; // rcx
  float *v52; // rdx
  float *v53; // rcx
  __int64 v54; // r9
  float v55; // xmm2_4
  char v56; // al
  float v57; // xmm1_4
  float v58; // xmm1_4
  __int64 v59; // rdi
  __int64 v60; // r9
  float *v61; // rcx
  float *v62; // rdx
  __int64 v63; // rax
  float v64; // xmm1_4
  char v65; // r9
  float *v67; // rax
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm3_4
  unsigned int v71; // r14d
  float v72; // xmm4_4
  unsigned int v73; // edi
  float v74; // xmm1_4
  bool v75; // cc
  unsigned int v76; // r9d
  float v77; // xmm1_4
  float v78; // xmm2_4
  unsigned int v79; // r14d
  unsigned int v80; // r15d
  unsigned int v81; // r12d
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm2_4
  float v85; // xmm4_4
  float v86; // xmm2_4
  float v87; // xmm4_4
  float v88; // xmm2_4
  float v89; // xmm4_4
  float v90; // xmm2_4
  float v91; // xmm4_4
  float v92; // xmm2_4
  float v93; // xmm4_4
  float v94; // xmm2_4
  float v95; // xmm4_4
  float v96; // xmm2_4
  float v97; // xmm2_4
  float v98; // xmm2_4
  float *v99; // r10
  float *v100; // r9
  unsigned int v101; // edx
  __int64 v102; // rax
  float v103; // xmm2_4
  char v104; // dl
  float v105; // xmm1_4
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm1_4
  float v109; // xmm1_4
  float v110; // xmm2_4
  char v111; // dl
  float v112; // xmm1_4
  float v113; // xmm1_4
  float *v114; // rcx
  float *v115; // r10
  __int64 v116; // rdx
  __int64 v117; // r14
  float v118; // xmm1_4
  char v119; // al
  float v120; // xmm1_4
  float v121; // xmm2_4
  float v122; // xmm1_4
  float v123; // xmm1_4
  char v124; // al
  __int64 v125; // rcx
  char *v126; // rsi
  __int64 v127; // rax
  float v128; // xmm2_4
  float v129; // xmm2_4
  float v130; // xmm2_4
  float v131; // xmm2_4
  float v132; // xmm2_4
  float v133; // xmm2_4
  float v134; // xmm1_4
  float v135; // xmm1_4
  float v136; // xmm2_4
  float v137; // xmm2_4
  float v138; // xmm2_4
  float v139; // xmm2_4
  char *v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  int v143; // edx
  int v144; // ecx
  __int64 v145; // rcx
  __int64 v146; // [rsp+40h] [rbp-79h]
  __m128 X; // [rsp+48h] [rbp-71h] BYREF

  v4 = 0;
  v5 = a3;
  v146 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0
    && !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a4) )
  {
    McTemplateU0pdffff_EventWriteTransfer(
      v144,
      v143,
      a2,
      v5,
      a4->m128_i32[0],
      a4->m128_i32[1],
      a4->m128_i32[2],
      a4->m128_i32[3]);
  }
  X = *a4;
  if ( !*((_BYTE *)this + 4424) )
  {
    v9 = X.m128_f32[2];
    v10 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] || (v11 = X.m128_f32[3], v12 = X.m128_f32[1], X.m128_f32[3] < X.m128_f32[1]) )
    {
      CDirtyRegion::SetFullDirty(this);
      return v4;
    }
    if ( *((float *)this + 1101) > X.m128_f32[0] )
      v10 = *((float *)this + 1101);
    v13 = X.m128_f32[1];
    if ( *((float *)this + 1102) > X.m128_f32[1] )
    {
      v12 = *((float *)this + 1102);
      v13 = v12;
    }
    v14 = X.m128_f32[2];
    if ( X.m128_f32[2] > *((float *)this + 1103) )
    {
      v9 = *((float *)this + 1103);
      v14 = v9;
    }
    v15 = X.m128_f32[3];
    if ( X.m128_f32[3] > *((float *)this + 1104) )
    {
      v11 = *((float *)this + 1104);
      v15 = v11;
    }
    if ( v14 > v10 && v15 > v13 && v14 > v10 && v15 > v12 )
    {
      if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 8388608.0 )
        v10 = (float)(int)floorf(v10);
      X.m128_f32[0] = v10;
      if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 8388608.0 )
        v12 = (float)(int)floorf(v12);
      X.m128_f32[1] = v12;
      if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 8388608.0 )
        v9 = (float)(int)o_ceilf_0(v9);
      X.m128_f32[2] = v9;
      if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < 8388608.0 )
        v11 = (float)(int)o_ceilf_0(v11);
      v16 = _mm_shuffle_ps(X, X, 147);
      v16.m128_f32[0] = v11;
      v17 = _mm_shuffle_ps(v16, v16, 57);
      X = v17;
      if ( a2 )
      {
        v18 = *((_DWORD *)this + 1098);
        v19 = (char *)this + 2824;
        if ( v18 == 32 )
        {
          v140 = (char *)DefaultHeap::Alloc(0x610uLL);
          v20 = v140;
          if ( !v140 )
          {
            v4 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v141, 0LL, 0LL, -2147024882, 0x1Bu);
            MilInstrumentationCheckHR_MaybeFailFast(v145, 0LL, 0LL, -2147024882, 0x200u);
            return v4;
          }
          memset_0(v140, 0, 0x610uLL);
          `vector constructor iterator'(
            v20 + 16,
            48LL,
            32LL,
            (void (__fastcall *)(char *))CDirtyRegionAnnotation::CDirtyRegionAnnotation);
          v142 = *(_QWORD *)v19;
          if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 )
            goto LABEL_207;
          *(_QWORD *)v20 = v142;
          v18 = 0;
          *((_QWORD *)v20 + 1) = v19;
          *(_QWORD *)(v142 + 8) = v20;
          *(_QWORD *)v19 = v20;
        }
        else
        {
          v20 = *(char **)v19;
        }
        *((_DWORD *)this + 1098) = v18 + 1;
        v146 = (__int64)&v20[48 * v18 + 16];
        *(_QWORD *)(v146 + 16) = a2;
        *(_BYTE *)(v146 + 40) = v5;
        *(__m128 *)(v146 + 24) = v17;
        *(_QWORD *)(v146 + 8) = 0LL;
        *(_QWORD *)v146 = 0LL;
      }
      v21 = v9 <= v10 || v11 <= v12;
      v22 = 0.0;
      v23 = (float)(v11 - v12) * (float)(v9 - v10);
      v24 = (float)((float)(v11 - v12) * 0.5) + v12;
      v25 = (float)((float)(v9 - v10) * 0.5) + v10;
      if ( v21 )
      {
        *((_DWORD *)this + 584) = 0;
        v26 = (float *)((char *)this + 2344);
        *((_DWORD *)this + 585) = 0;
        v27 = 0.0;
        *((_DWORD *)this + 586) = 0;
        *(_QWORD *)((char *)this + 2348) = 0LL;
        *(_QWORD *)((char *)this + 2356) = 0LL;
      }
      else
      {
        if ( *((_BYTE *)this + 1964) )
        {
          *((_DWORD *)this + 584) = 2139095039;
        }
        else
        {
          v84 = (float)((float)(*((float *)this + 488) - v25) * (float)(*((float *)this + 488) - v25))
              + (float)((float)(*((float *)this + 489) - v24) * (float)(*((float *)this + 489) - v24));
          if ( v84 != 0.0 )
            v22 = (float)(v23 + *((float *)this + 490)) / v84;
          *((float *)this + 584) = v22;
        }
        if ( *((_BYTE *)this + 1980) )
        {
          *((_DWORD *)this + 585) = 2139095039;
        }
        else
        {
          v85 = 0.0;
          v86 = (float)((float)(*((float *)this + 492) - v25) * (float)(*((float *)this + 492) - v25))
              + (float)((float)(*((float *)this + 493) - v24) * (float)(*((float *)this + 493) - v24));
          if ( v86 != 0.0 )
            v85 = (float)(v23 + *((float *)this + 494)) / v86;
          *((float *)this + 585) = v85;
        }
        if ( *((_BYTE *)this + 1996) )
        {
          v26 = (float *)((char *)this + 2344);
          *((_DWORD *)this + 586) = 2139095039;
        }
        else
        {
          v87 = 0.0;
          v88 = (float)((float)(*((float *)this + 496) - v25) * (float)(*((float *)this + 496) - v25))
              + (float)((float)(*((float *)this + 497) - v24) * (float)(*((float *)this + 497) - v24));
          if ( v88 != 0.0 )
            v87 = (float)(v23 + *((float *)this + 498)) / v88;
          v26 = (float *)((char *)this + 2344);
          *((float *)this + 586) = v87;
        }
        if ( *((_BYTE *)this + 2012) )
        {
          *((_DWORD *)this + 587) = 2139095039;
        }
        else
        {
          v89 = 0.0;
          v90 = (float)((float)(*((float *)this + 500) - v25) * (float)(*((float *)this + 500) - v25))
              + (float)((float)(*((float *)this + 501) - v24) * (float)(*((float *)this + 501) - v24));
          if ( v90 != 0.0 )
            v89 = (float)(v23 + *((float *)this + 502)) / v90;
          *((float *)this + 587) = v89;
        }
        if ( *((_BYTE *)this + 2028) )
        {
          *((_DWORD *)this + 588) = 2139095039;
        }
        else
        {
          v91 = 0.0;
          v92 = (float)((float)(*((float *)this + 504) - v25) * (float)(*((float *)this + 504) - v25))
              + (float)((float)(*((float *)this + 505) - v24) * (float)(*((float *)this + 505) - v24));
          if ( v92 != 0.0 )
            v91 = (float)(v23 + *((float *)this + 506)) / v92;
          *((float *)this + 588) = v91;
        }
        if ( *((_BYTE *)this + 2044) )
        {
          *((_DWORD *)this + 589) = 2139095039;
        }
        else
        {
          v93 = 0.0;
          v94 = (float)((float)(*((float *)this + 508) - v25) * (float)(*((float *)this + 508) - v25))
              + (float)((float)(*((float *)this + 509) - v24) * (float)(*((float *)this + 509) - v24));
          if ( v94 != 0.0 )
            v93 = (float)(v23 + *((float *)this + 510)) / v94;
          *((float *)this + 589) = v93;
        }
        if ( *((_BYTE *)this + 2060) )
        {
          *((_DWORD *)this + 590) = 2139095039;
        }
        else
        {
          v95 = 0.0;
          v96 = (float)((float)(*((float *)this + 512) - v25) * (float)(*((float *)this + 512) - v25))
              + (float)((float)(*((float *)this + 513) - v24) * (float)(*((float *)this + 513) - v24));
          if ( v96 != 0.0 )
            v95 = (float)(v23 + *((float *)this + 514)) / v96;
          *((float *)this + 590) = v95;
        }
        if ( *((_BYTE *)this + 2076) )
        {
          v27 = FLOAT_3_4028235e38;
        }
        else
        {
          v97 = *((float *)this + 516) - v25;
          v27 = 0.0;
          v98 = (float)(v97 * v97)
              + (float)((float)(*((float *)this + 517) - v24) * (float)(*((float *)this + 517) - v24));
          if ( v98 != 0.0 )
            v27 = (float)(v23 + *((float *)this + 518)) / v98;
        }
      }
      v28 = FLOAT_N1_0;
      v29 = 0;
      *((float *)this + 591) = v27;
      v30 = 0;
      v31 = 8;
      v32 = 584LL;
      do
      {
        v33 = 0;
        v34 = 0LL;
        if ( v31 < 4 )
          goto LABEL_51;
        v67 = v26;
        do
        {
          v68 = *(v67 - 2);
          v69 = v28;
          v70 = v28;
          if ( v68 > v28 )
            v28 = *(v67 - 2);
          v71 = v33;
          v72 = v28;
          if ( v68 <= v69 )
            v71 = v30;
          v73 = v31;
          v75 = v68 <= v70;
          v74 = *(v67 - 1);
          if ( v75 )
            v73 = v29;
          if ( v74 > v28 )
            v28 = *(v67 - 1);
          v75 = v74 <= v72;
          v76 = v33 + 1;
          v77 = *v67;
          v78 = v28;
          if ( v75 )
            v76 = v71;
          v79 = v31;
          if ( v75 )
            v79 = v73;
          if ( v77 > v28 )
            v28 = *v67;
          v75 = v77 <= v78;
          v80 = v33 + 2;
          v81 = v31;
          v82 = v67[1];
          v83 = v28;
          if ( v75 )
          {
            v80 = v76;
            v81 = v79;
          }
          if ( v82 > v28 )
            v28 = v67[1];
          v30 = v33 + 3;
          v29 = v31;
          if ( v82 <= v83 )
          {
            v30 = v80;
            v29 = v81;
          }
          v34 += 4LL;
          v67 += 4;
          v33 += 4;
        }
        while ( v33 < v31 - 3 );
        if ( v33 < v31 )
        {
LABEL_51:
          v35 = (float *)((char *)this + 4 * v34 + 4 * v32);
          do
          {
            v36 = *v35;
            v37 = v28;
            v38 = v28;
            if ( *v35 > v28 )
              v28 = *v35;
            v39 = v33;
            if ( v36 <= v37 )
              v39 = v30;
            v30 = v39;
            v40 = v31;
            if ( v36 <= v38 )
              v40 = v29;
            ++v35;
            ++v33;
            v29 = v40;
          }
          while ( v33 < v31 );
        }
        v32 -= 8LL;
        v26 -= 8;
        --v31;
      }
      while ( v31 );
      v41 = v30;
      if ( v29 == 8 )
      {
        if ( !v146 )
        {
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)this + 16 * v30 + 1696, &X);
          v11 = X.m128_f32[3];
          v9 = X.m128_f32[2];
          v12 = X.m128_f32[1];
          v10 = X.m128_f32[0];
          goto LABEL_64;
        }
        v42 = (char *)this + 16 * v30 + 1824;
        v43 = *(_QWORD *)v42;
        if ( *(char **)(*(_QWORD *)v42 + 8LL) == v42 )
        {
          *(_QWORD *)v146 = v43;
          *(_QWORD *)(v146 + 8) = v42;
          *(_QWORD *)(v43 + 8) = v146;
          *(_QWORD *)v42 = v146;
LABEL_64:
          X.m128_u64[0] = __PAIR64__(LODWORD(v12), LODWORD(v10));
          X.m128_u64[1] = __PAIR64__(LODWORD(v11), LODWORD(v9));
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&X, (char *)this + 16 * v30 + 1568);
          v45 = X.m128_f32[0];
          if ( X.m128_f32[2] <= X.m128_f32[0] )
            return 0;
          v46 = X.m128_f32[1];
          if ( X.m128_f32[3] <= X.m128_f32[1]
            || X.m128_f32[0] >= *((float *)this + 4 * v30 + 392)
            && X.m128_f32[1] >= *((float *)this + 4 * v30 + 393)
            && *((float *)this + 4 * v30 + 394) >= X.m128_f32[2]
            && *((float *)this + 4 * v30 + 395) >= X.m128_f32[3] )
          {
            return 0;
          }
          v47 = 0;
          v48 = 2 * (v30 + 122LL);
          v49 = X.m128_f32[3] - X.m128_f32[1];
          v50 = X.m128_f32[2] - X.m128_f32[0];
          *((__m128 *)this + v30 + 98) = X;
          *((_BYTE *)this + 8 * v48 + 12) = 0;
          *((float *)this + 2 * v48 + 2) = v49 * v50;
          *((float *)this + 2 * v48 + 1) = (float)(v49 * 0.5) + v46;
          *((float *)this + 2 * v48) = (float)(v50 * 0.5) + v45;
          if ( v30 >= 3 )
          {
            v99 = (float *)((char *)this + 32 * v30 + 2088);
            v100 = (float *)((char *)this + 1956);
            v101 = (v30 - 3) / 3 + 1;
            v102 = v101;
            v47 = 3 * v101;
            v51 = 3LL * v101;
            do
            {
              v103 = 0.0;
              v104 = *((_BYTE *)this + 16 * v30 + 1964);
              if ( *((_BYTE *)v100 + 8) )
              {
                if ( !v104 )
                  v103 = FLOAT_3_4028235e38;
              }
              else if ( !v104 )
              {
                v105 = *v100 - *((float *)this + 4 * v30 + 489);
                v106 = (float)(v105 * v105)
                     + (float)((float)(*(v100 - 1) - *((float *)this + 4 * v30 + 488))
                             * (float)(*(v100 - 1) - *((float *)this + 4 * v30 + 488)));
                if ( v106 != 0.0 )
                  v103 = (float)(*((float *)this + 4 * v30 + 490) + v100[1]) / v106;
              }
              *(v99 - 2) = v103;
              v107 = 0.0;
              if ( !*((_BYTE *)this + 16 * v30 + 1964) )
              {
                if ( *((_BYTE *)v100 + 24) )
                {
                  v107 = FLOAT_3_4028235e38;
                }
                else
                {
                  v108 = v100[4] - *((float *)this + 4 * v30 + 489);
                  v109 = (float)(v108 * v108)
                       + (float)((float)(v100[3] - *((float *)this + 4 * v30 + 488))
                               * (float)(v100[3] - *((float *)this + 4 * v30 + 488)));
                  if ( v109 != 0.0 )
                    v107 = (float)(*((float *)this + 4 * v30 + 490) + v100[5]) / v109;
                }
              }
              *(v99 - 1) = v107;
              v110 = 0.0;
              v111 = *((_BYTE *)this + 16 * v30 + 1964);
              if ( *((_BYTE *)v100 + 40) )
              {
                if ( !v111 )
                  v110 = FLOAT_3_4028235e38;
              }
              else if ( !v111 )
              {
                v112 = v100[8] - *((float *)this + 4 * v30 + 489);
                v113 = (float)(v112 * v112)
                     + (float)((float)(v100[7] - *((float *)this + 4 * v30 + 488))
                             * (float)(v100[7] - *((float *)this + 4 * v30 + 488)));
                if ( v113 != 0.0 )
                  v110 = (float)(*((float *)this + 4 * v30 + 490) + v100[9]) / v113;
              }
              *v99 = v110;
              v100 += 12;
              v99 += 3;
              --v102;
            }
            while ( v102 );
            if ( v47 >= v30 )
            {
LABEL_78:
              v59 = v30 + 1;
              if ( (unsigned int)v59 < v44 )
              {
                v60 = (unsigned int)v59;
                if ( v44 - (unsigned int)v59 < 5 )
                  goto LABEL_80;
                v114 = (float *)((char *)this + 16 * (unsigned int)v59 + 1956);
                v115 = (float *)((char *)this + 32 * v59 + 4 * v41 + 2112);
                v116 = (3 - (int)v59) / 5u + 1;
                v117 = v116;
                v60 = v116 + v59 + 4 * v116;
                LODWORD(v59) = v116 + v59 + 4 * v116;
                do
                {
                  v118 = 0.0;
                  v119 = *((_BYTE *)this + 16 * v41 + 1964);
                  if ( *((_BYTE *)v114 + 8) )
                  {
                    if ( !v119 )
                      v118 = FLOAT_3_4028235e38;
                  }
                  else if ( !v119 )
                  {
                    v130 = *v114 - *((float *)this + 4 * v41 + 489);
                    v131 = (float)(v130 * v130)
                         + (float)((float)(*(v114 - 1) - *((float *)this + 4 * v41 + 488))
                                 * (float)(*(v114 - 1) - *((float *)this + 4 * v41 + 488)));
                    if ( v131 != 0.0 )
                      v118 = (float)(*((float *)this + 4 * v41 + 490) + v114[1]) / v131;
                  }
                  *(v115 - 8) = v118;
                  v120 = 0.0;
                  if ( !*((_BYTE *)this + 16 * v41 + 1964) )
                  {
                    if ( *((_BYTE *)v114 + 24) )
                    {
                      v120 = FLOAT_3_4028235e38;
                    }
                    else
                    {
                      v132 = v114[4] - *((float *)this + 4 * v41 + 489);
                      v133 = (float)(v132 * v132)
                           + (float)((float)(v114[3] - *((float *)this + 4 * v41 + 488))
                                   * (float)(v114[3] - *((float *)this + 4 * v41 + 488)));
                      if ( v133 != 0.0 )
                        v120 = (float)(*((float *)this + 4 * v41 + 490) + v114[5]) / v133;
                    }
                  }
                  *v115 = v120;
                  v121 = 0.0;
                  if ( !*((_BYTE *)this + 16 * v41 + 1964) )
                  {
                    if ( *((_BYTE *)v114 + 40) )
                    {
                      v121 = FLOAT_3_4028235e38;
                    }
                    else
                    {
                      v134 = v114[8] - *((float *)this + 4 * v41 + 489);
                      v135 = (float)(v134 * v134)
                           + (float)((float)(v114[7] - *((float *)this + 4 * v41 + 488))
                                   * (float)(v114[7] - *((float *)this + 4 * v41 + 488)));
                      if ( v135 != 0.0 )
                        v121 = (float)(*((float *)this + 4 * v41 + 490) + v114[9]) / v135;
                    }
                  }
                  v115[8] = v121;
                  v122 = 0.0;
                  if ( !*((_BYTE *)this + 16 * v41 + 1964) )
                  {
                    if ( *((_BYTE *)v114 + 56) )
                    {
                      v122 = FLOAT_3_4028235e38;
                    }
                    else
                    {
                      v136 = v114[12] - *((float *)this + 4 * v41 + 489);
                      v137 = (float)(v136 * v136)
                           + (float)((float)(v114[11] - *((float *)this + 4 * v41 + 488))
                                   * (float)(v114[11] - *((float *)this + 4 * v41 + 488)));
                      if ( v137 != 0.0 )
                        v122 = (float)(*((float *)this + 4 * v41 + 490) + v114[13]) / v137;
                    }
                  }
                  v115[16] = v122;
                  v123 = 0.0;
                  v124 = *((_BYTE *)this + 16 * v41 + 1964);
                  if ( *((_BYTE *)v114 + 72) )
                  {
                    if ( !v124 )
                      v123 = FLOAT_3_4028235e38;
                  }
                  else if ( !v124 )
                  {
                    v138 = v114[16] - *((float *)this + 4 * v41 + 489);
                    v139 = (float)(v138 * v138)
                         + (float)((float)(v114[15] - *((float *)this + 4 * v41 + 488))
                                 * (float)(v114[15] - *((float *)this + 4 * v41 + 488)));
                    if ( v139 != 0.0 )
                      v123 = (float)(*((float *)this + 4 * v41 + 490) + v114[17]) / v139;
                  }
                  v115[24] = v123;
                  v114 += 20;
                  v115 += 40;
                  --v117;
                }
                while ( v117 );
                if ( (unsigned int)v59 < v44 )
                {
LABEL_80:
                  v61 = (float *)((char *)this + 16 * v60 + 1956);
                  v62 = (float *)((char *)this + 32 * v60 + 4 * v41 + 2080);
                  v63 = v44 - (unsigned int)v59;
                  do
                  {
                    v64 = 0.0;
                    v65 = *((_BYTE *)this + 16 * v41 + 1964);
                    if ( *((_BYTE *)v61 + 8) )
                    {
                      if ( !v65 )
                        v64 = FLOAT_3_4028235e38;
                    }
                    else if ( !v65 )
                    {
                      v128 = *v61 - *((float *)this + 4 * v41 + 489);
                      v129 = (float)(v128 * v128)
                           + (float)((float)(*(v61 - 1) - *((float *)this + 4 * v41 + 488))
                                   * (float)(*(v61 - 1) - *((float *)this + 4 * v41 + 488)));
                      if ( v129 != 0.0 )
                        v64 = (float)(*((float *)this + 4 * v41 + 490) + v61[1]) / v129;
                    }
                    *v62 = v64;
                    v61 += 4;
                    v62 += 8;
                    --v63;
                  }
                  while ( v63 );
                  return 0;
                }
              }
              return 0;
            }
          }
          else
          {
            if ( !v30 )
              goto LABEL_78;
            v51 = 0LL;
          }
          v52 = (float *)((char *)this + 32 * v30 + 4 * v51 + 2080);
          v53 = (float *)((char *)this + 16 * v51 + 1956);
          v54 = v30 - v47;
          do
          {
            v55 = 0.0;
            v56 = *((_BYTE *)this + 16 * v30 + 1964);
            if ( *((_BYTE *)v53 + 8) )
            {
              if ( !v56 )
                v55 = FLOAT_3_4028235e38;
            }
            else if ( !v56 )
            {
              v57 = *v53 - *((float *)this + 4 * v30 + 489);
              v58 = (float)(v57 * v57)
                  + (float)((float)(*(v53 - 1) - *((float *)this + 4 * v30 + 488))
                          * (float)(*(v53 - 1) - *((float *)this + 4 * v30 + 488)));
              if ( v58 != 0.0 )
                v55 = (float)(v53[1] + *((float *)this + 4 * v30 + 490)) / v58;
            }
            *v52 = v55;
            v53 += 4;
            ++v52;
            --v54;
          }
          while ( v54 );
          goto LABEL_78;
        }
      }
      else
      {
        CDirtyRegion::Merge(this, v29, v30);
        *((__m128 *)this + v30 + 98) = v17;
        CDirtyRegion::CalcDirtyRegionCachedData(v125, &X, (char *)this + 16 * v30 + 1952);
        CDirtyRegion::UpdateAcceleration(this, v30);
        if ( !v146 )
        {
          v4 = 0;
          *((__m128 *)this + v41 + 106) = v17;
          return v4;
        }
        v126 = (char *)this + 16 * v30 + 1824;
        v127 = *(_QWORD *)v126;
        if ( *(char **)(*(_QWORD *)v126 + 8LL) == v126 )
        {
          *(_QWORD *)v146 = v127;
          *(_QWORD *)(v146 + 8) = v126;
          *(_QWORD *)(v127 + 8) = v146;
          *(_QWORD *)v126 = v146;
          return 0;
        }
      }
LABEL_207:
      __fastfail(3u);
    }
  }
  return v4;
}
