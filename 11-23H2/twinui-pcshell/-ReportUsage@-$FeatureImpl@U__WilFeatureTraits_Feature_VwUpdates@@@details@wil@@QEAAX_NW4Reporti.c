/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118CC8
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039D90 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ @ 0x1800A2880 (-SubscribeToWNFForBackgroundImage@CVirtualDesktopManager@@AEAAJXZ.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180119110 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180145BA0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180162340 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806018E8 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VwSotUpdates@@@details@.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180611CE0 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x180616398 (--$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopMa.c)
 *     ??$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@0@Z0W4VirtualDesktopSwitchDirection@@00@Z @ 0x1806164C4 (--$AnimateOperation@PEAUIVirtualDesktop@@PEAU1@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDes.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180617920 (-CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800D1C80 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180118D60 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::ReportUsage(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  int v4; // edi
  unsigned int v6; // r8d
  unsigned int v7; // esi
  int v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v4 = a3;
  v6 = *a1;
  v7 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v12 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::GetCachedFeatureEnabledState(
                       a1,
                       v9);
    v6 = v12;
  }
  v8 = v4;
  v10 = 3;
  v11 = 3;
  wil::details::ReportUsageToService(
    (__int64)(a1 + 2),
    0x1AA154Cu,
    (v6 >> 10) & 1,
    (v6 >> 11) & 1,
    (__int64)&v10,
    v7,
    v8);
}
