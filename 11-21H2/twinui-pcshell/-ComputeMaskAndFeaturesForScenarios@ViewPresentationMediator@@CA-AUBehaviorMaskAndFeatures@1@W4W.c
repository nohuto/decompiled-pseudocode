/*
 * XREFs of ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x18014E2EC
 * Callers:
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x18014E270 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014E3D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILContainerOverride@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014E5D8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILContainerOverride@@@details@wil@@QEAA.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x18018D45C (IsQueryWin32SubsystemHostPresent.c)
 */

__int64 __fastcall ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int Win32SubsystemHost; // eax
  __int64 v12; // [rsp+38h] [rbp+10h]

  v5 = -1325399809;
  if ( (a1 & 1) != 0 )
  {
    v7 = 127;
  }
  else if ( (a1 & 4) != 0 )
  {
    v7 = 17;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
      v6);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILContainerOverride>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VAILContainerOverride>::GetImpl'::`2'::impl,
      0LL);
    if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() )
    {
      Win32SubsystemHost = QueryWin32SubsystemHost();
      v7 = 100663489;
      v5 = -1224736513;
      if ( Win32SubsystemHost == 1 )
        v7 = -1224736547;
    }
    else
    {
      v7 = 100663489;
      v5 = -1224736513;
    }
  }
  v8 = v7 | 0x51;
  if ( (a1 & 2) == 0 )
    v8 = v7;
  LODWORD(v12) = v5;
  v9 = v8 | 0x10;
  if ( (a1 & 8) == 0 )
    v9 = v8;
  HIDWORD(v12) = v9;
  return v12;
}
