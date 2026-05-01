/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?A_PXZ @ 0x180540D4C
 * Callers:
 *     ?MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1805428F0 (-MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Int.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z @ 0x1805FC0E0 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@_K@Z.c)
 *     ?MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@I@Z @ 0x180601E60 (-MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@I@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@QEAA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@XZ @ 0x180543D40 (-open_and_watch_errors@-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Com.c)
 */

__int64 __fastcall tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>(
        __int64 a1)
{
  std::_Ref_count_base *v3[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::open_and_watch_errors(
    v3,
    a1);
  if ( v3[1] )
    std::_Ref_count_base::_Decref(v3[1]);
  return a1;
}
