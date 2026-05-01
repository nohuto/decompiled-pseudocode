/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1801F045C
 * Callers:
 *     ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x1800916A0 (-GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1800B0B84 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1801724D4 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x1801A0464 (-LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801EB370 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EE704 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
