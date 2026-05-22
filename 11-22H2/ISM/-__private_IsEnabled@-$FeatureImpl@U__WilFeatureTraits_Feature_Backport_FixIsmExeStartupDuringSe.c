/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown@@@details@wil@@QEAA_NXZ @ 0x180077000
 * Callers:
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x1800768EC (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18007654C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartu.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180076A9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShu.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Backport_FixIsmExeStartupDuringSessionShutdown>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
