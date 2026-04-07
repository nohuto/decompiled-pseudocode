/*
 * XREFs of ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAA?AW4Variant_VTFrame@@W4VariantReportingKind@3@_N@Z @ 0x18000E7FC
 * Callers:
 *     ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ @ 0x180034A88 (-GetEffectiveCornerStyle@CTopLevelWindow@@AEAA-AW4CORNER_STYLE@@XZ.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000E838 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@AEAA-ATw.c)
 *     ?ReportVariantUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Variant_VTFrame@@W4VariantReportingKind@3@_K@Z @ 0x1800E5D80 (-ReportVariantUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Va.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::__private_GetVariant(__int64 a1)
{
  int v1; // edi
  int v2; // edx
  int v3; // r8d
  char v4; // bl
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = a1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::GetCachedVariantState(a1, &v6);
  v4 = (v6 >> 10) & 0x3F;
  if ( v4 )
  {
    LOBYTE(v3) = (v6 >> 10) & 0x3F;
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::ReportVariantUsage(v1, v2, v3, 2);
  }
  return v4;
}
