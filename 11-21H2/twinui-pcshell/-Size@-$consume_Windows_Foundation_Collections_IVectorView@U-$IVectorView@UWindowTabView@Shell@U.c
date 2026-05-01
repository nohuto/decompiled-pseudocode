/*
 * XREFs of ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBAIXZ @ 0x180018878
 * Callers:
 *     ?Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180017E30 (-Show@TaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAG.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x180019CFC (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ??$end@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x18001D058 (--$end@U-$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collect.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  return v4;
}
