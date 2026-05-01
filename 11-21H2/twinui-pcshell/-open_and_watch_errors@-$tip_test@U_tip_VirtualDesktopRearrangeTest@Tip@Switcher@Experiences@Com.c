/*
 * XREFs of ?open_and_watch_errors@?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@QEAA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@XZ @ 0x18048E4A0
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@0@XZ @ 0x18048C63C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@@std@@QEAA@XZ @ 0x18048C598 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Ex.c)
 *     ??0?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18048CC1C (--0-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::open_and_watch_errors(
        _QWORD *a1,
        __int64 a2)
{
  std::_Ref_count_base *v4; // rdi
  void *v5; // rax
  std::_Ref_count_base *v6; // rax
  _DWORD *v8; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]

  v4 = (std::_Ref_count_base *)operator new(0xB8uLL);
  *((_DWORD *)v4 + 2) = 1;
  *((_DWORD *)v4 + 3) = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SnapFlyoutShowTest>>::`vftable';
  tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>(
    (__int64)v4 + 16,
    0LL,
    0LL);
  v8 = (_DWORD *)((char *)v4 + 16);
  v9 = v4;
  std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)&v8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( !*a1 )
  {
    v5 = operator new(0xB8uLL);
    v6 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::_Ref_count_obj2<tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v5);
    v8 = (_DWORD *)((char *)v6 + 16);
    v9 = v6;
    std::shared_ptr<KBViewInfo>::operator=(a1, (__int64 *)&v8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
  *(_QWORD *)a2 = &tip::test_watcher<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a2 + 48),
    a1);
  return a2;
}
