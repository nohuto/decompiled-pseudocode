/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002BA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18000979C (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002C850 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     floor @ 0x180060EC8 (floor.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct CBitmapSource *v2; // r8
  unsigned int v3; // esi
  int appended; // eax
  unsigned int v7; // r14d
  int *v8; // r15
  int v9; // r12d
  int v10; // r13d
  __m128 *v11; // rax
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm10_4
  float v19; // xmm14_4
  float v20; // xmm9_4
  float v21; // xmm14_4
  double v22; // xmm0_8
  int v23; // eax
  __m128 v24; // xmm6
  __m128i v25; // xmm2
  float v26; // xmm2_4
  float v27; // xmm0_4
  float v28; // xmm3_4
  bool v29; // zf
  __m128 v30; // xmm6
  float v31; // xmm4_4
  __m128 v32; // xmm6
  float v33; // xmm5_4
  __m128 v34; // xmm6
  float v35; // xmm7_4
  char v36; // r15
  char v37; // si
  __int64 v38; // rax
  unsigned int v39; // edx
  __m128 v40; // xmm0
  __int64 v41; // rcx
  const RECT *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // eax
  LONG *v47; // r9
  unsigned int v48; // r8d
  struct tagRECT *v50; // rax
  int v51; // r9d
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // eax
  int v56; // r9d
  unsigned int v57; // eax
  int v58; // eax
  int v59; // r9d
  unsigned int v60; // eax
  int v61; // eax
  int v62; // r9d
  unsigned int v63; // eax
  int v64; // eax
  __int128 v65; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v66; // [rsp+40h] [rbp-C0h] BYREF
  __m128 v67; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, appended, 0x25Fu);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x204u);
      return v3;
    }
  }
  v7 = v3;
  v8 = (int *)*((_QWORD *)this + 16);
  if ( !v8 )
    return v7;
  v9 = *((_DWORD *)this + 4);
  v10 = *((_DWORD *)this + 5);
  v11 = (__m128 *)*((_QWORD *)this + 9);
  v12 = (float)*((int *)this + 6);
  v13 = (float)*((int *)this + 7);
  v67 = 0LL;
  if ( v11 )
    v67 = v11[4];
  v14 = (float)v8[6];
  v15 = (float)v8[7];
  if ( v14 <= 0.0 || v15 <= 0.0 )
    return v7;
  v16 = v12 - (float)(v67.m128_i32[0] + v67.m128_i32[1]);
  v17 = v13 - (float)(v67.m128_i32[2] + v67.m128_i32[3]);
  v18 = (float)v67.m128_i32[2] + (float)v10;
  if ( v16 <= 0.0 )
    v16 = 0.0;
  if ( v17 <= 0.0 )
    v17 = 0.0;
  v19 = fminf(1.0, fminf(v16 / v14, v17 / v15));
  v20 = v19 * v15;
  v21 = v19 * v14;
  v22 = floor((float)((float)(v16 - v21) * 0.5) + 0.5);
  v24 = 0LL;
  v23 = *((_DWORD *)this + 34);
  v24.m128_f32[0] = (float)(int)v22 + (float)((float)v67.m128_i32[0] + (float)v9);
  if ( v23 )
  {
    if ( v23 == 2 )
    {
      v26 = (float)(v18 + v17) - (float)((float)*((int *)this + 35) + v20);
      goto LABEL_16;
    }
    v25 = _mm_cvtsi32_si128((int)floor((float)((float)(v17 - v20) * 0.5) + 0.5));
  }
  else
  {
    v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 35));
  }
  v26 = _mm_cvtepi32_ps(v25).m128_f32[0] + v18;
LABEL_16:
  v27 = v24.m128_f32[0] + v21;
  v28 = (float)v8[20];
  v7 = 0;
  v29 = *((_DWORD *)this + 12) == 0x80000000;
  v30 = _mm_shuffle_ps(v24, v24, 225);
  v31 = (float)v8[21];
  v30.m128_f32[0] = v26;
  *(float *)&v65 = v28;
  v32 = _mm_shuffle_ps(v30, v30, 198);
  v33 = (float)v8[22];
  v32.m128_f32[0] = v27;
  *(_QWORD *)((char *)&v65 + 4) = __PAIR64__(LODWORD(v33), LODWORD(v31));
  v34 = _mm_shuffle_ps(v32, v32, 39);
  v35 = (float)v8[23];
  v36 = *((_BYTE *)this + 144);
  v34.m128_f32[0] = v26 + v20;
  v67 = _mm_shuffle_ps(v34, v34, 57);
  v66 = v67;
  *((float *)&v65 + 3) = v35;
  if ( v29
    && *((_DWORD *)this + 13) == 0x80000000
    && *((_DWORD *)this + 14) == 0x7FFFFFFF
    && *((_DWORD *)this + 15) == 0x7FFFFFFF )
  {
    v37 = 0;
    if ( !a2[12] )
      goto LABEL_21;
  }
  else
  {
    v37 = 1;
  }
  rc = (struct tagRECT)*((_OWORD *)this + 3);
  OffsetRect(&rc, v9, v10);
  v50 = (struct tagRECT *)a2[12];
  if ( v50 )
  {
    if ( v37 )
      IntersectRect(&rc, &rc, a2[12]);
    else
      rc = *v50;
  }
  ClipRectAndSimilarRect(&rc.left, v66.m128_f32, (float *)&v65);
  v33 = *((float *)&v65 + 2);
  v31 = *((float *)&v65 + 1);
  LODWORD(v28) = v65;
  v35 = *((float *)&v65 + 3);
LABEL_21:
  if ( (float)(v66.m128_f32[2] - v66.m128_f32[0]) <= 0.0 || (float)(v66.m128_f32[3] - v66.m128_f32[1]) <= 0.0 )
    return v7;
  v38 = *((unsigned int *)a2 + 6);
  v39 = v38 + 1;
  if ( v36 )
  {
    v67.m128_u64[0] = __PAIR64__(LODWORD(v31), LODWORD(v33));
    v67.m128_u64[1] = __PAIR64__(LODWORD(v35), LODWORD(v28));
    if ( v39 >= (unsigned int)v38 )
    {
      if ( v39 <= *((_DWORD *)a2 + 5) )
      {
        v40 = v67;
        v53 = v38;
        v42 = *a2;
        v43 = v53;
        goto LABEL_27;
      }
      v54 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v67);
      v7 = v54;
      if ( v54 >= 0 )
        goto LABEL_28;
      v51 = v54;
      v52 = 192;
    }
    else
    {
      v51 = -2147024362;
      v52 = 181;
      v7 = -2147024362;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, v52);
    v55 = 857;
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v55);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x247u);
    return v7;
  }
  if ( v39 < (unsigned int)v38 )
  {
    v56 = -2147024362;
    v57 = 181;
    v7 = -2147024362;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, v57);
    v55 = 861;
    goto LABEL_64;
  }
  if ( v39 <= *((_DWORD *)a2 + 5) )
  {
    v40 = (__m128)v65;
    v41 = (unsigned int)v38;
    v42 = *a2;
    v43 = v41;
LABEL_27:
    v42[v43] = (const RECT)v40;
    *((_DWORD *)a2 + 6) = v39;
    goto LABEL_28;
  }
  v58 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v65);
  v7 = v58;
  if ( v58 < 0 )
  {
    v56 = v58;
    v57 = 192;
    goto LABEL_55;
  }
LABEL_28:
  v44 = *((_DWORD *)a2 + 14);
  v45 = v44 + 1;
  if ( v44 + 1 < v44 )
  {
    v59 = -2147024362;
    v60 = 181;
    v7 = -2147024362;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v59, v60);
    v55 = 864;
    goto LABEL_64;
  }
  if ( v45 <= *((_DWORD *)a2 + 13) )
  {
    a2[4][v44] = (const RECT)v66;
    *((_DWORD *)a2 + 14) = v45;
    goto LABEL_31;
  }
  v61 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 4, 16LL, 1LL, &v66);
  v7 = v61;
  if ( v61 < 0 )
  {
    v59 = v61;
    v60 = 192;
    goto LABEL_59;
  }
LABEL_31:
  v46 = *((_DWORD *)a2 + 22);
  v47 = (LONG *)((char *)this + 68);
  v48 = v46 + 1;
  if ( v46 + 1 < v46 )
  {
    v62 = -2147024362;
    v63 = 181;
    v7 = -2147024362;
LABEL_63:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v62, v63);
    v55 = 865;
    goto LABEL_64;
  }
  if ( v48 > *((_DWORD *)a2 + 21) )
  {
    v64 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 8, 4LL, 1LL, v47);
    v7 = v64;
    if ( v64 >= 0 )
      return v7;
    v62 = v64;
    v63 = 192;
    goto LABEL_63;
  }
  v7 = 0;
  *(&a2[8]->left + v46) = *v47;
  *((_DWORD *)a2 + 22) = v48;
  return v7;
}
