/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C
 * Callers:
 *     ?CreateSearchAppPositioner@@YA?AV?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@PEAUIServiceProvider@@@Z @ 0x18005F2A8 (-CreateSearchAppPositioner@@YA-AV-$unique_ptr@VISearchAppPositioner@@U-$default_delete@VISearchA.c)
 *     ??0TaskbarSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z @ 0x18005F428 (--0TaskbarSearchAppPositionerConfig@@QEAA@PEAUIServiceProvider@@@Z.c)
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18006484C (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0TouchGestureSettings@@QEAA@XZ @ 0x1800CF2BC (--0TouchGestureSettings@@QEAA@XZ.c)
 *     ?PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ @ 0x1800DB690 (-PerformDelayedInitialization@CShellSnapComponent@@UEAAJXZ.c)
 *     ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x1800F5200 (-GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801190F4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XXTests@@@details@wil@@.c)
 *     ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x18014E2EC (-ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA-AUBehaviorMaskAndFeatures@1@W4W.c)
 *     ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180176DF4 (-InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180595C3C (-ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ.c)
 *     ?IsUndockedAssetAvailable@@YA_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1805F867C (-IsUndockedAssetAvailable@@YA_NW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060A124 (-InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180168C7C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AE.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  int v7; // esi
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::GetCachedFeatureEnabledState(a1, v9);
    v6 = v12;
  }
  v10 = 0;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 31692694LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
