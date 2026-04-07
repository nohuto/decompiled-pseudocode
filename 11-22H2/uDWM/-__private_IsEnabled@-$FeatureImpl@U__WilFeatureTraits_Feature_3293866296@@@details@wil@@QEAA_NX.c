/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil@@QEAA_NXZ @ 0x180066084
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001DAC0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800655C8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180065D44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3293866296@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_3293866296>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3293866296>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3293866296>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
