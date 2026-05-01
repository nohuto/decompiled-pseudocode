/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@QEAA_NXZ @ 0x1802489A0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x180247380 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18023AFD8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802420F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay@@@details@wil@@Q.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FixWidgetsPrelaunchDelay>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
