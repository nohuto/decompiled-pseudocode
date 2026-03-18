/*
 * XREFs of ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18008E330
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A3D00 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::AddLocalBoundsToSubTreesDirtyRegion(
        CPreComputeContext *this,
        struct CVisual *a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 i; // rsi
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rdx
  __int128 *v11; // rdx
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  int v16; // eax
  float v17; // xmm0_4
  int v18; // eax
  __m128 v19; // xmm0
  float v20; // xmm6_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // edi
  __m128 v29; // [rsp+30h] [rbp-30h] BYREF
  int v30; // [rsp+40h] [rbp-20h]
  int v31; // [rsp+44h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v3 = *(_QWORD *)this;
  v5 = *((_QWORD *)this + 1);
  for ( i = *(_QWORD *)this + 408LL; ; i += 448LL )
  {
    if ( v3 == v5 )
      return 0LL;
    v30 = 0;
    v31 = 0;
    v8 = *(_DWORD *)(i - 48);
    v29 = 0LL;
    if ( v8 )
      v9 = (void *)(*(_QWORD *)(i - 32) + 68LL * (unsigned int)(v8 - 1));
    else
      v9 = &CMILMatrix::Identity;
    if ( a3 )
    {
      v10 = *(_QWORD *)(i + 24);
      if ( a2 == *(struct CVisual **)(v10 + 64) )
        goto LABEL_46;
    }
    v10 = *(_QWORD *)(i + 24);
    if ( a2 == *(struct CVisual **)(v10 + 64) )
    {
      if ( !*(_QWORD *)(v10 + 64) )
      {
        v11 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        goto LABEL_8;
      }
LABEL_46:
      v11 = (__int128 *)(v10 + 72);
      goto LABEL_8;
    }
    v11 = (__int128 *)((char *)a2 + 148);
LABEL_8:
    CMILMatrix::Transform3DBoundsHelper<1>(v9, v11, &v29);
    v12 = v29.m128_f32[2];
    v13 = v29.m128_f32[0];
    v14 = v29.m128_f32[3];
    v15 = v29.m128_f32[1];
    if ( v29.m128_f32[2] > v29.m128_f32[0] && v29.m128_f32[3] > v29.m128_f32[1] )
    {
      if ( *(_DWORD *)(i + 32) || (v16 = *((_DWORD *)a2 + 24), (v16 & 0x200) != 0) )
      {
        v17 = FLOAT_4_0;
        v16 = *((_DWORD *)a2 + 24);
      }
      else if ( (v16 & 0x800) != 0 )
      {
        v17 = FLOAT_0_5;
      }
      else
      {
        v17 = 0.0;
      }
      if ( (v16 & 0x1000) != 0 )
        v17 = v17 + 0.5;
      if ( v17 != 0.0 )
      {
        v13 = v29.m128_f32[0] - v17;
        v15 = v29.m128_f32[1] - v17;
        v12 = v29.m128_f32[2] + v17;
        v14 = v29.m128_f32[3] + v17;
        v29.m128_f32[0] = v29.m128_f32[0] - v17;
        v29.m128_f32[1] = v29.m128_f32[1] - v17;
        v29.m128_f32[2] = v29.m128_f32[2] + v17;
        v29.m128_f32[3] = v29.m128_f32[3] + v17;
      }
    }
    v18 = *(_DWORD *)(i - 16);
    if ( v18 )
    {
      v19 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)i + 16LL * (unsigned int)(v18 - 1)));
      v29 = v19;
      v29.m128_i32[0] = v19.m128_i32[0];
      v20 = v19.m128_f32[0];
      if ( v13 > v19.m128_f32[0] )
      {
        v29.m128_f32[0] = v13;
        v20 = v13;
        v19 = v29;
      }
      v21 = _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
      if ( v15 > v21 )
      {
        v29.m128_f32[1] = v15;
        v21 = v15;
        v19 = v29;
      }
      v22 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
      if ( v22 > v12 )
      {
        v29.m128_f32[2] = v12;
        v22 = v12;
        v19 = v29;
      }
      v23 = _mm_shuffle_ps(v19, v19, 255).m128_f32[0];
      if ( v23 > v14 )
      {
        v29.m128_f32[3] = v14;
        v23 = v14;
        v19 = v29;
      }
      if ( v22 > v20 && v23 > v21 )
        goto LABEL_29;
      v29 = 0uLL;
    }
    v19 = v29;
LABEL_29:
    v29 = v19;
    if ( v19.m128_f32[2] > v19.m128_f32[0] && v29.m128_f32[3] > v29.m128_f32[1] )
    {
      v24 = *(_QWORD *)(i + 16);
      if ( !*(_BYTE *)(v24 + 4424) && !*(_DWORD *)(v24 + 4400) )
      {
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v29.m128_f32[0]
          && v19.m128_f32[2] >= *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
          || *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v29.m128_f32[1]
          && v29.m128_f32[3] >= *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
        {
          CDirtyRegion::SetFullDirty((CDirtyRegion *)v24);
          goto LABEL_38;
        }
        v25 = CDirtyRegion::_Add((CDirtyRegion *)v24);
        v27 = v25;
        if ( v25 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x1B3u);
        if ( v27 < 0 )
          break;
      }
    }
LABEL_38:
    v3 += 448LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x612,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v27);
  return (unsigned int)v27;
}
