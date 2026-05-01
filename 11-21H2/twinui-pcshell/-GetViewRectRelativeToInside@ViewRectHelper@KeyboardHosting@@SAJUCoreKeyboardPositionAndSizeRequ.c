/*
 * XREFs of ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x18046B558
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1804840E0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(
        __int64 a1,
        float *a2,
        float *a3,
        __int64 a4)
{
  float v7; // xmm2_4
  float v8; // xmm3_4
  int v9; // ecx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v13[6]; // [rsp+20h] [rbp-18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  *(_OWORD *)v13 = *(_OWORD *)(a1 + 48);
  if ( KeyboardHosting::IsRectNull(v13) )
  {
    v7 = (float)*(int *)(a1 + 8);
    v8 = (float)*(int *)(a1 + 4);
  }
  else
  {
    v7 = *(float *)(a1 + 56);
    v8 = *(float *)(a1 + 60);
  }
  v9 = *(_DWORD *)(a1 + 24);
  if ( (v9 & 0xC) == 0 )
  {
    v10 = (float)(a2[2] - v7) * 0.5;
LABEL_10:
    *a3 = v10 + *a2;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(a1 + 24) & 0xC) == 0xC )
  {
    *a3 = *a2;
    goto LABEL_13;
  }
  if ( (v9 & 4) != 0 )
  {
    v10 = (float)*(int *)(a1 + 12);
    goto LABEL_10;
  }
  if ( (v9 & 8) != 0 )
    *a3 = (float)((float)(a2[2] + *a2) - v7) - (float)*(int *)(a1 + 12);
LABEL_13:
  if ( (v9 & 3) == 0 )
  {
    v11 = (float)(a2[3] - v8) * 0.5;
LABEL_19:
    a3[1] = v11 + a2[1];
    return 0LL;
  }
  if ( (v9 & 3) == 3 )
  {
    a3[1] = a2[1];
  }
  else
  {
    if ( (v9 & 1) != 0 )
    {
      v11 = (float)*(int *)(a1 + 16);
      goto LABEL_19;
    }
    if ( (v9 & 2) != 0 )
      a3[1] = (float)((float)(a2[3] + a2[1]) - v8) - (float)*(int *)(a1 + 16);
  }
  return 0LL;
}
