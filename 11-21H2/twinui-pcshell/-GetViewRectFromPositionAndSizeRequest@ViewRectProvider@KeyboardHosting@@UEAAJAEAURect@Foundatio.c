/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1804840E0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18046B180 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x18046B558 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     GetWorkAreaRect @ 0x180484660 (GetWorkAreaRect.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x180484750 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        struct Windows::Foundation::Rect *a2,
        __m128i *a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        bool *a9,
        char *a10)
{
  float v13; // xmm7_4
  int v14; // eax
  float v15; // xmm6_4
  char v16; // si
  __m128i v17; // xmm0
  float v18; // xmm8_4
  float v19; // xmm9_4
  __int64 v20; // r9
  __m128 v21; // xmm0
  float v22; // xmm1_4
  int v23; // eax
  float v24; // xmm1_4
  __m128i v25; // xmm0
  KeyboardHosting::ViewRectProvider *v26; // rcx
  int v27; // r14d
  __int64 v28; // rdx
  __int128 v29; // xmm1
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int ViewRectRelativeToInside; // esi
  __int64 v35; // rdx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  KeyboardHosting::ViewRectProvider *v40; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __m128i v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int64 v54; // r9
  __int128 v55; // [rsp+48h] [rbp-B9h] BYREF
  __m128i v56; // [rsp+58h] [rbp-A9h] BYREF
  __int128 v57; // [rsp+68h] [rbp-99h] BYREF
  __m128i v58; // [rsp+78h] [rbp-89h] BYREF
  __int128 v59; // [rsp+88h] [rbp-79h] BYREF
  __int128 v60; // [rsp+98h] [rbp-69h]
  __int128 v61; // [rsp+A8h] [rbp-59h]
  __int128 v62; // [rsp+B8h] [rbp-49h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+2Fh]

  v13 = (float)*(int *)(a5 + 8);
  v14 = *(_DWORD *)(a5 + 4);
  *(_QWORD *)a8 = 0LL;
  v15 = (float)v14;
  *(float *)(a8 + 8) = v13;
  *(float *)(a8 + 12) = (float)v14;
  *a9 = 0;
  *a10 = 0;
  if ( *(_BYTE *)(a5 + 40) || (v16 = 0, *(_BYTE *)(a5 + 41)) )
    v16 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    (__int64)a4);
  v17 = *(__m128i *)(a5 + 48);
  *(_QWORD *)&v55 = 0LL;
  v18 = *(float *)(a5 + 56);
  v19 = *(float *)(a5 + 60);
  v56 = v17;
  *((_QWORD *)&v55 + 1) = __PAIR64__(LODWORD(v19), LODWORD(v18));
  if ( KeyboardHosting::IsRectNull((float *)v56.m128i_i32) )
    *((_QWORD *)&v55 + 1) = __PAIR64__(LODWORD(v15), LODWORD(v13));
  switch ( *(_DWORD *)a5 )
  {
    case 1:
      if ( *(_BYTE *)(a5 + 43) )
      {
        v51 = *(__m128i *)GetWorkAreaRect(&v58, a1 + (-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + 112);
        v59 = *(_OWORD *)a5;
        v52 = *(_OWORD *)(a5 + 32);
        v58 = v51;
        v53 = *(_OWORD *)(a5 + 16);
        v61 = v52;
        v60 = v53;
        v62 = *(_OWORD *)(a5 + 48);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
                                     (__int64)&v59,
                                     (float *)v58.m128i_i32,
                                     (float *)&v55,
                                     v54);
        if ( ViewRectRelativeToInside >= 0 )
          break;
        v35 = 66LL;
      }
      else
      {
        v59 = *(_OWORD *)a5;
        v61 = *(_OWORD *)(a5 + 32);
        v58 = *(__m128i *)((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
        v60 = *(_OWORD *)(a5 + 16);
        v62 = *(_OWORD *)(a5 + 48);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
                                     (__int64)&v59,
                                     (float *)v58.m128i_i32,
                                     (float *)&v55,
                                     v20);
        if ( ViewRectRelativeToInside >= 0 )
          break;
        v35 = 71LL;
      }
      goto LABEL_29;
    case 2:
      v47 = *(_OWORD *)a2;
      v58 = *a3;
      v57 = v47;
      v48 = *(_OWORD *)a5;
      v56 = *(__m128i *)((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
      v60 = *(_OWORD *)(a5 + 16);
      v49 = *(_OWORD *)(a5 + 48);
      v59 = v48;
      v50 = *(_OWORD *)(a5 + 32);
      v62 = v49;
      v61 = v50;
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                   &v59,
                                   (float *)v56.m128i_i32,
                                   (__int64)&v57,
                                   &v58,
                                   a7,
                                   (__int64)&v55,
                                   a9,
                                   a10);
      if ( ViewRectRelativeToInside >= 0 )
        break;
      v35 = 78LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
        (const char *)(unsigned int)ViewRectRelativeToInside);
      return (unsigned int)ViewRectRelativeToInside;
    case 3:
      v36 = *(_OWORD *)a5;
      v58 = *a3;
      v37 = *(_OWORD *)(a5 + 16);
      v59 = v36;
      v38 = *(_OWORD *)(a5 + 32);
      v60 = v37;
      v39 = *(_OWORD *)(a5 + 48);
      v61 = v38;
      v62 = v39;
      v27 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
              (__int64)&v59,
              (float *)v58.m128i_i32,
              (float *)&v55,
              v20);
      if ( v27 < 0 )
      {
        v28 = 84LL;
        goto LABEL_20;
      }
      if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v40, (struct Windows::Foundation::Rect *)&v55, a2) )
      {
        v42 = *(_OWORD *)a2;
        v58 = *a3;
        v57 = v42;
        v43 = *(_OWORD *)a5;
        v56 = *(__m128i *)((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + a1 + 120);
        v44 = *(_OWORD *)(a5 + 16);
        v59 = v43;
        v45 = *(_OWORD *)(a5 + 32);
        v60 = v44;
        v46 = *(_OWORD *)(a5 + 48);
        v61 = v45;
        v62 = v46;
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v59,
                                     (float *)v56.m128i_i32,
                                     (__int64)&v57,
                                     &v58,
                                     a7,
                                     (__int64)&v55,
                                     a9,
                                     a10);
        if ( ViewRectRelativeToInside < 0 )
        {
          v35 = 89LL;
          goto LABEL_29;
        }
      }
      break;
    case 5:
      v59 = *(_OWORD *)a5;
      v25 = *a4;
      v61 = *(_OWORD *)(a5 + 32);
      v56 = v25;
      v60 = *(_OWORD *)(a5 + 16);
      v62 = *(_OWORD *)(a5 + 48);
      v27 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
              (__int64)&v59,
              (float *)v56.m128i_i32,
              (float *)&v55,
              v20);
      if ( v27 < 0 )
      {
        v28 = 95LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)v27);
        return (unsigned int)v27;
      }
      if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v26, (struct Windows::Foundation::Rect *)&v55, a2) )
      {
        v29 = *(_OWORD *)a2;
        v56 = *a3;
        v57 = v29;
        v30 = *(_OWORD *)a5;
        v58 = *(__m128i *)((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
        v31 = *(_OWORD *)(a5 + 16);
        v59 = v30;
        v32 = *(_OWORD *)(a5 + 32);
        v60 = v31;
        v33 = *(_OWORD *)(a5 + 48);
        v61 = v32;
        v62 = v33;
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                     &v59,
                                     (float *)v58.m128i_i32,
                                     (__int64)&v57,
                                     &v56,
                                     a7,
                                     (__int64)&v55,
                                     a9,
                                     a10);
        if ( ViewRectRelativeToInside < 0 )
        {
          v35 = 100LL;
          goto LABEL_29;
        }
      }
      break;
    default:
      v21 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120));
      LODWORD(v55) = v21.m128_i32[0];
      *((float *)&v55 + 1) = (float)((float)(_mm_shuffle_ps(v21, v21, 255).m128_f32[0]
                                           + _mm_shuffle_ps(v21, v21, 85).m128_f32[0])
                                   - v15)
                           - (float)*(int *)(a5 + 16);
      break;
  }
  v58 = *(__m128i *)(a5 + 48);
  if ( KeyboardHosting::IsRectNull((float *)v58.m128i_i32) )
  {
    *(_OWORD *)a8 = v55;
  }
  else
  {
    v22 = *((float *)&v55 + 1) - *(float *)(a5 + 52);
    v23 = *(_DWORD *)(a5 + 8);
    *(float *)a8 = *(float *)&v55 - *(float *)(a5 + 48);
    *(float *)(a8 + 4) = v22;
    v24 = (float)((float)*(int *)(a5 + 4) - v19) + *((float *)&v55 + 3);
    *(float *)(a8 + 8) = (float)((float)v23 - v18) + *((float *)&v55 + 2);
    *(float *)(a8 + 12) = v24;
  }
  return 0LL;
}
