/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@0@XZ @ 0x18048C63C
 * Callers:
 *     ?MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@_KI@Z @ 0x18048D530 (-MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Int.c)
 *     ?MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@_K@Z @ 0x180541640 (-MoveDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@_K@Z.c)
 *     ?MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z @ 0x1805463D0 (-MoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@I@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@QEAA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@XZ @ 0x18048E4A0 (-open_and_watch_errors@-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Com.c)
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
