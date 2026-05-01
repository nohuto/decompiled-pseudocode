/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAA_NXZ @ 0x1801D68AC
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800C71E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1801D64D4 (-ShouldTreatShellManagedWindowAsCharm@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801D1440 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801D5408 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SOLFSTest@@@details@wil@@QEAAX_NW4Reporti.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SOLFSTest>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SOLFSTest>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SOLFSTest>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
