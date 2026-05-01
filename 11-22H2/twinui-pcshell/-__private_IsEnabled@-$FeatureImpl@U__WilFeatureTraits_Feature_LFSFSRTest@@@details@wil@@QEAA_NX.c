/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAA_NXZ @ 0x1801E3310
 * Callers:
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800E4020 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801E2028 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801E2EC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LFSFSRTest@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_LFSFSRTest>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LFSFSRTest>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LFSFSRTest>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
