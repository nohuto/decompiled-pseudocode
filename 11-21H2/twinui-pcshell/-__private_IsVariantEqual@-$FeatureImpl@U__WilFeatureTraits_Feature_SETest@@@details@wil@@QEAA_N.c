/*
 * XREFs of ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA_NW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x180164DA0
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180164DE0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x1805B2B88 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::__private_IsVariantEqual(__int64 a1)
{
  int v1; // edi
  int v2; // edx
  int v3; // r8d
  char v4; // bl
  _DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCachedVariantState(a1, v6);
  v4 = 1;
  if ( ((v6[0] >> 10) & 0x3F) != 1 )
    return 0;
  LOBYTE(v3) = 1;
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportVariantUsage(v1, v2, v3, 2);
  return v4;
}
