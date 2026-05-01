/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@QEAA_NXZ @ 0x1801DBAC4
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18006D530 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A42E8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8F58 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1801AC434 (-StopXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x1804003E8 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run @ 0x180406890 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___--Run.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801DA8D4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCo.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801DB31C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::__private_IsEnabled(
        volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int32 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
