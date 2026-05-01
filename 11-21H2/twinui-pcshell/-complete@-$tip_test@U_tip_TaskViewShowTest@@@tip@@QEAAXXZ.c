/*
 * XREFs of ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30
 * Callers:
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x180016BB0 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?v_DismissView@TaskViewHost@@MEAAXXZ @ 0x180041AE0 (-v_DismissView@TaskViewHost@@MEAAXXZ.c)
 *     _lambda_0ccf2911bb3556e965c79eb60c053427_::operator() @ 0x1801B68C8 (_lambda_0ccf2911bb3556e965c79eb60c053427_--operator().c)
 *     ?DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ @ 0x1801E8D1C (-DisplayAltTab@XamlAltTabViewHost@@AEAAXXZ.c)
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180553C94 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail.c)
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1805DB10C (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ?v_DismissView@XamlAltTabViewHost@@MEAAXXZ @ 0x1805FE150 (-v_DismissView@XamlAltTabViewHost@@MEAAXXZ.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x180604430 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x180605380 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18060A8B0 (-PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18060B720 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x18060CFC0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 */

__int64 __fastcall tip::tip_test<_tip_TaskViewShowTest>::complete(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip::details::test_common_data<0>::complete(v1 + 8);
  return result;
}
