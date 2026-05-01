/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@wil@@QEAA_NXZ @ 0x18072E898
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_97ea773e353b0db0e215eb811349f3a3___::Invoke @ 0x180280FE0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180280FE0.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18072D770 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Pro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18072E5DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@w.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
