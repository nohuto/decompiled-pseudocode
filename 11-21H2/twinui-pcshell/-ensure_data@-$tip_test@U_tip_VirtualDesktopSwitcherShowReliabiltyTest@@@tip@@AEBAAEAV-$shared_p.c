/*
 * XREFs of ?ensure_data@?$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@@std@@XZ @ 0x18060CAD4
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@0@XZ @ 0x180607418 (--$start_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@@tip.c)
 *     ?PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18060A8B0 (-PositionVirtualDesktopSwitcher@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18060B720 (-Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@@std@@QEAA@XZ @ 0x180605404 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@.c)
 */

_QWORD *__fastcall tip::tip_test<_tip_VirtualDesktopSwitcherShowReliabiltyTest>::ensure_data(_QWORD *a1)
{
  void *v2; // rax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  if ( !*a1 )
  {
    v2 = operator new(0xB0uLL);
    v3 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_VirtualDesktopSwitcherShowReliabiltyTest>>((__int64)v2);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  return a1;
}
