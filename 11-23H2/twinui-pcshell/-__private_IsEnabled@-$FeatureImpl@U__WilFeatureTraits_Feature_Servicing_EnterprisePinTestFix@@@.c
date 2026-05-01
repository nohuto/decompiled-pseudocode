/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix@@@details@wil@@QEAA_NXZ @ 0x180288A14
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18028792C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinT.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18028830C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix@@@details@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  signed __int32 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::GetCachedFeatureEnabledState(
    a1,
    &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnterprisePinTestFix>::ReportUsage(a1, v4 & 1);
  return v2;
}
