/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180106484
 * Callers:
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800B525C (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D6D00 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800DD660 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180105E20 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180110060 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1801B5A7C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@AEAA_NXZ @ 0x180555B14 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@AEAA_NXZ.c)
 *     ??$AnimateOperation@PEAUHMONITOR__@@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z01W4VirtualDesktopSwitchDirection@@01@Z @ 0x18055A1A8 (--$AnimateOperation@PEAUHMONITOR__@@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8I.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@0@ZPEAUHMONITOR__@@0W4VirtualDesktopSwitchDirection@@00@Z @ 0x18055A2D4 (--$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDes.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18055C6A0 (-CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801681FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
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
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v10 = 3;
  v11 = 3;
  return wil::details::ReportUsageToService(a1 + 2, 27923788LL, (v6 >> 8) & 1, (v6 >> 9) & 1, &v10, v7, v4);
}
