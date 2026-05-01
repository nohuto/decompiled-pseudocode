/*
 * XREFs of ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C
 * Callers:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x1800553A0 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIO.c)
 *     ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180074A10 (-ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@.c)
 *     ?SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE2D0 (-SetViewCollectionInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 *     ?SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x1800FE400 (-SetViewCollectionInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationViewCollection@@@Z.c)
 *     ?OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18012FA60 (-OnViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180156FA0 (-ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@@Z @ 0x180545CD8 (-GetViewsPerMonitor@CVirtualDesktopManager@@AEAAJAEAV-$unordered_map@PEAUHMONITOR__@@V-$vector@V.c)
 *     ?MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1805466B0 (-MoveViewFromHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180547020 (-OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180557620 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180559520 (-UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z.c)
 *     ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180559A50 (-UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 */

// Hidden C++ exception states: #wind=1
HMONITOR __fastcall VirtualDesktopHelpers::GetMonitorFromApplicationView(
        VirtualDesktopHelpers *this,
        struct IApplicationView *a2)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0LL);
  return 0LL;
}
