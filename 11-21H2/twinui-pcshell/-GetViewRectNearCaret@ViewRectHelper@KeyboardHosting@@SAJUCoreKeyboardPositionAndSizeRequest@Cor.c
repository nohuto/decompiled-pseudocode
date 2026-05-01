/*
 * XREFs of ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18046B180
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1804840E0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0 (-IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18046AD94 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@9@U3@UtagSIZE@@@Z @ 0x18046AF8C (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@UCoreKeyboardPositionAndSizeR.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
        __int128 *a1,
        float *a2,
        __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        bool *a7,
        char *a8)
{
  struct tagRECT *v12; // rdx
  char v13; // di
  __m128 v14; // xmm2
  float v15; // xmm1_4
  __m128i v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __m128i *RelativePosition; // rax
  float v25; // xmm3_4
  __m128i v26; // xmm1
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // xmm0_8
  unsigned __int64 v29; // rcx
  float v30; // xmm4_4
  float v31; // xmm3_4
  int v32; // eax
  float v33; // xmm2_4
  float v34; // xmm1_4
  bool v35; // cc
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm4_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  __int64 result; // rax
  __m128i v45; // [rsp+30h] [rbp-B1h] BYREF
  __int128 v46; // [rsp+40h] [rbp-A1h] BYREF
  char *v47; // [rsp+50h] [rbp-91h]
  __m128i v48; // [rsp+60h] [rbp-81h] BYREF
  bool *v49; // [rsp+70h] [rbp-71h]
  _OWORD v50[4]; // [rsp+80h] [rbp-61h] BYREF
  __m128i v51; // [rsp+C0h] [rbp-21h] BYREF

  v49 = a7;
  v47 = a8;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    a3,
    (__int64)a4);
  v13 = 0;
  *(_OWORD *)a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( a5 )
  {
    v14 = (__m128)_mm_loadu_si128(a4);
    v15 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    v51.m128i_i32[0] = (int)v14.m128_f32[0];
    v51.m128i_i32[1] = (int)v15;
    v51.m128i_i32[2] = (int)(float)(_mm_shuffle_ps(v14, v14, 170).m128_f32[0] + v14.m128_f32[0]);
    v51.m128i_i32[3] = (int)(float)(_mm_shuffle_ps(v14, v14, 255).m128_f32[0] + v15);
  }
  else
  {
    v16 = *(__m128i *)a3;
    v48 = *a4;
    v51 = v16;
    v51 = *KeyboardHosting::ViewRectHelper::GetAvoidanceRect((__m128i *)&v46, &v51, &v48);
  }
  v48 = v51;
  v45 = v51;
  if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v45, v12) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
      1u,
      v17,
      v18);
    v45 = (__m128i)a1[3];
    if ( KeyboardHosting::IsRectNull((float *)v45.m128i_i32) )
    {
      v45.m128i_i32[0] = *((_DWORD *)a1 + 2);
      v19 = *((_DWORD *)a1 + 1);
    }
    else
    {
      v45.m128i_i32[0] = (int)*((float *)a1 + 14);
      v19 = (int)*((float *)a1 + 15);
    }
    v45.m128i_i32[1] = v19;
    v20 = *a1;
    v46 = *(_OWORD *)a2;
    v21 = a1[1];
    v50[0] = v20;
    v22 = a1[2];
    v50[1] = v21;
    v23 = a1[3];
    v50[2] = v22;
    v50[3] = v23;
    RelativePosition = (__m128i *)KeyboardHosting::ViewRectHelper::GetRelativePosition(
                                    &v45,
                                    v50,
                                    (__int64)&v46,
                                    &v51,
                                    v45.m128i_i64[0]);
    v25 = *a2;
    v26 = *RelativePosition;
    v27 = RelativePosition->m128i_i64[0];
    v28 = _mm_srli_si128(v26, 8).m128i_u64[0];
    v29 = HIDWORD(v27);
    v30 = (float)(int)v27;
    *(float *)(a6 + 8) = (float)((int)v28 - (int)v27);
    *(float *)(a6 + 12) = (float)(HIDWORD(v28) - HIDWORD(v27));
    if ( v25 > (float)(int)v27 )
      v30 = v25;
    v31 = (float)(v25 + a2[2]) - (float)((int)v28 - (int)v27 + 1);
    if ( v30 <= v31 )
      v31 = v30;
    if ( a5 && (*((_BYTE *)a1 + 24) & 4) != 0 )
      v31 = *(float *)a4->m128i_i32;
    if ( ((*((_DWORD *)a1 + 6) - 4) & 0xFFFFFFFB) != 0 )
    {
      v32 = *((_DWORD *)a1 + 4);
      if ( (int)v29 <= v48.m128i_i32[1] )
      {
        v33 = a2[1];
        v34 = (float)((int)v29 - v32);
LABEL_18:
        v35 = v33 <= v34;
LABEL_25:
        if ( v35 )
          v33 = v34;
        *v49 = v30 != v31;
        if ( v34 != v33 )
          v13 = 1;
        *v47 = v13;
        goto LABEL_38;
      }
      v36 = a2[3] + a2[1];
      v34 = (float)((int)v29 + v32);
    }
    else
    {
      v33 = a2[1];
      v34 = (float)SHIDWORD(v27);
      if ( v33 > (float)SHIDWORD(v27) )
        v34 = a2[1];
      if ( SHIDWORD(v27) <= v48.m128i_i32[1] )
        goto LABEL_18;
      v36 = v33 + a2[3];
    }
    v33 = v36 - (float)(HIDWORD(v28) - HIDWORD(v27) + 1);
    v35 = v34 <= v33;
    goto LABEL_25;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v17,
    v18);
  v46 = a1[3];
  if ( KeyboardHosting::IsRectNull((float *)&v46) )
  {
    v37 = (float)*((int *)a1 + 1);
    v38 = (float)*((int *)a1 + 2);
  }
  else
  {
    v37 = *((float *)a1 + 15);
    v38 = *((float *)a1 + 14);
  }
  *(float *)(a6 + 8) = v38;
  *(float *)(a6 + 12) = v37;
  v39 = a2[2] + *a2;
  v40 = (float)(a2[1] + a2[3]) - v37;
  v46 = *(_OWORD *)a3;
  v31 = v39 - *(float *)(a6 + 8);
  v33 = v40 - 10.0;
  if ( !KeyboardHosting::IsRectNull((float *)&v46) || (v46 = (__int128)*a4, !KeyboardHosting::IsRectNull((float *)&v46)) )
  {
    v42 = *(float *)(a3 + 4);
    v31 = fminf(v31, (float)*((int *)a1 + 3) + *(float *)a3);
    v43 = (float)*((int *)a1 + 4);
    if ( *((_DWORD *)a1 + 6) == 1 )
      v33 = fmaxf(a2[1], v42 - v43);
    else
      v33 = fminf(v41, v42 + v43);
  }
LABEL_38:
  *(float *)a6 = v31;
  result = 0LL;
  *(float *)(a6 + 4) = v33;
  return result;
}
