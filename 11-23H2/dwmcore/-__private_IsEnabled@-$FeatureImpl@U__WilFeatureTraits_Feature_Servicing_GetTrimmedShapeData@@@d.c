/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData@@@details@wil@@QEAA_NXZ @ 0x1801198E0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801193B4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GetTrimmedShap.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011985C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData@@@details@w.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GetTrimmedShapeData>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
