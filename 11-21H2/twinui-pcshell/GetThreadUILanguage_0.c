/*
 * XREFs of GetThreadUILanguage_0 @ 0x18018A13C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x180146FA0 (-IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImm.c)
 *     ?SetSite@CLauncherTipContextMenu@@UEAAJPEAUIUnknown@@@Z @ 0x180171E30 (-SetSite@CLauncherTipContextMenu@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x180232FE0 (-SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z.c)
 *     _lambda_3f3d9ba04ec2c8622cba6a99ff36500b_::operator() @ 0x1804B7EE4 (_lambda_3f3d9ba04ec2c8622cba6a99ff36500b_--operator().c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x1804B8A80 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x1804BEF64 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x1804BFDF0 (-_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@M.c)
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C0B60 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804C7660 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 *     ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x1804C78C0 (-v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@.c)
 *     ?Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z @ 0x1804CD390 (-Scroll@AccessibleElementBase@@UEAAJW4ScrollAmount@@0@Z.c)
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804CF664 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D0EF8 (-LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z.c)
 *     ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x1804D4230 (-v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ.c)
 *     ?v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ @ 0x1804DB270 (-v_LayoutChildren@CVirtualDesktopContainerElement@@MEAAXXZ.c)
 *     ?GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@KAEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4284 (-GetOtherColumns@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMon.c)
 *     ?GetOtherQuadrants@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@Z @ 0x1805A4388 (-GetOtherQuadrants@AdvancedSmartFill@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveM.c)
 *     ?AddRegionToViewModel@XamlSnapAssistViewHost@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@9ABI@@@Z @ 0x18060118C (-AddRegionToViewModel@XamlSnapAssistViewHost@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experience.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LANGID __stdcall GetThreadUILanguage_0()
{
  return GetThreadUILanguage();
}
