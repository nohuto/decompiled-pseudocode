/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106354
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1800F3710 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180105FC0 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180106170 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x180139680 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x1801ACCD0 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z @ 0x1801AF320 (-ShutdownServices@XamlLauncher@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180106470 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TD@@@details@wil@@AEAA-A.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  int v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TD>::GetCachedFeatureEnabledState(a1, v8);
    v11 = v4;
  }
  v7 = 3;
  v9 = 0;
  v10 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x1B71C3Eu,
    ((unsigned int)v4 >> 10) & 1,
    ((unsigned int)v4 >> 11) & 1,
    (__int64)&v9,
    v6,
    v7);
}
