/*
 * XREFs of ?ComputeMaskAndFeaturesForScenarios@ViewPresentationMediator@@CA?AUBehaviorMaskAndFeatures@1@W4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@@Z @ 0x18014E35C
 * Callers:
 *     ?EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ @ 0x18014E2D0 (-EnableShellWindowManagementBehavior@ViewPresentationMediator@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014E3F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VAILInitialPositioning@@@details@wil@@QEA.c)
 *     IsQueryWin32SubsystemHostPresent @ 0x1801CC574 (IsQueryWin32SubsystemHostPresent.c)
 */

__int64 __fastcall ViewPresentationMediator::ComputeMaskAndFeaturesForScenarios(char a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h]

  if ( (a1 & 1) != 0 )
  {
    v3 = 127;
  }
  else if ( (a1 & 4) != 0 )
  {
    v3 = 17;
  }
  else
  {
    v3 = ((a1 & 0x30) != 0) + 192;
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VAILInitialPositioning>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VAILInitialPositioning>::GetImpl'::`2'::impl,
      a2);
    if ( (unsigned __int8)IsQueryWin32SubsystemHostPresent() && (unsigned int)QueryWin32SubsystemHost() == 1 )
      v3 |= 0xF000001C;
  }
  if ( (a1 & 2) != 0 )
  {
    v3 |= 1u;
    if ( a1 < 0 )
      v3 |= 0x50u;
  }
  LODWORD(v6) = -268435201;
  v4 = v3 | 0x10;
  if ( (a1 & 8) == 0 )
    v4 = v3;
  HIDWORD(v6) = v4;
  return v6;
}
