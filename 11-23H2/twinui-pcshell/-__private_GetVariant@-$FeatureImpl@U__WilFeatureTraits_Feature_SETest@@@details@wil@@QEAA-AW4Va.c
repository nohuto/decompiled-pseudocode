/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA?AW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x1800520FC
 * Callers:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180031F18 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180052138 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Variant_SETest@@W4VariantReportingKind@3@_K@Z @ 0x180680634 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4Var.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::__private_GetVariant(__int64 a1)
{
  int v1; // edi
  int v2; // edx
  int v3; // r8d
  char v4; // bl
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCachedVariantState(a1, &v6);
  v4 = (v6 >> 12) & 0x3F;
  if ( v4 )
  {
    LOBYTE(v3) = (v6 >> 12) & 0x3F;
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportVariantUsage(v1, v2, v3, 2);
  }
  return v4;
}
