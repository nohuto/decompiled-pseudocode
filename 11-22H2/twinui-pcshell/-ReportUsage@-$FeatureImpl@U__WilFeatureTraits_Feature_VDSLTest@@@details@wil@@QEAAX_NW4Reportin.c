/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118258
 * Callers:
 *     ?UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180084810 (-UnsubscribeFromServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180145BA0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJV?$com_ptr_t@UIApplicationViewVisibilityDebouncedNotificationService@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180605E70 (-SubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJV-$com_ptr_t@UIApplicationViewVisi.c)
 *     ?UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ @ 0x180607030 (-UnsubscribeToVDSoftLandingService@CVirtualDesktopManager@@UEAAJXZ.c)
 *     ?TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x180617698 (-TriggerCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801182E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  int v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::GetCachedFeatureEnabledState(
                       a1,
                       &v9);
    v6 = v12;
  }
  v8 = v4;
  v10 = 0;
  v11 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x1EC58F4u,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v10,
    v7,
    v8);
}
