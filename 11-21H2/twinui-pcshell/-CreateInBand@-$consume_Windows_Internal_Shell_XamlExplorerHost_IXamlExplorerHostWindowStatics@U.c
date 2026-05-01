/*
 * XREFs of ?CreateInBand@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@3@IAEBURect@Foundation@83@@Z @ 0x180015FDC
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180015E7C (-RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 *     ?GetHostWindow@XamlAltTabViewHost@@AEAA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@PEAUIImmersiveMonitor@@@Z @ 0x1805FA7BC (-GetHostWindow@XamlAltTabViewHost@@AEAA-AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?GetData@VirtualDesktopSwitcherHost@@UEAAXPEAPEAXPEA_J0@Z @ 0x180609D90 (-GetData@VirtualDesktopSwitcherHost@@UEAAXPEAPEAXPEA_J0@Z.c)
 *     ?InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060A124 (-InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>::CreateInBand(
        __int64 **a1,
        _QWORD *a2,
        unsigned int a3,
        __int128 *a4)
{
  __int64 *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // rax
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v11 = 0LL;
  v7 = *v4;
  v10 = v5;
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64 *))(v7 + 48))(v4, a3, &v10, &v11);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  *a2 = v11;
  return a2;
}
