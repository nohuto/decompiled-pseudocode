/*
 * XREFs of ?open_and_watch_errors@?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@QEAA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@2@XZ @ 0x180543D40
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?A_PXZ @ 0x180540D4C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$?0$$TAEAW4TestRetrievalOptions@@@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@@std@@QEAA@$$QEA$$TAEAW4TestRetrievalOptions@@@Z @ 0x180540C08 (--$-0$$TAEAW4TestRetrievalOptions@@@-$_Ref_count_obj2@V-$test_merged_data@U_tip_VirtualDesktopRe.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@@std@@QEAA@XZ @ 0x180540CC4 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Ex.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::open_and_watch_errors(
        _QWORD *a1,
        __int64 a2)
{
  void *v4; // rax
  std::_Ref_count_base *v5; // rax
  void *v6; // rax
  std::_Ref_count_base *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-8h]
  int v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF

  v11 = 0;
  v12 = 0LL;
  v4 = operator new(0xD8uLL);
  v5 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::_Ref_count_obj2<tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>(
                                 (__int64)v4,
                                 &v12,
                                 &v11);
  v9 = (__int64)v5 + 16;
  v10 = v5;
  std::shared_ptr<KBViewInfo>::operator=(a1, &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( !*a1 )
  {
    v6 = operator new(0xD8uLL);
    v7 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>::_Ref_count_obj2<tip::details::test_merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v6);
    v9 = (__int64)v7 + 16;
    v10 = v7;
    std::shared_ptr<KBViewInfo>::operator=(a1, &v9);
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  *(_QWORD *)a2 = &tip::test_watcher<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    (_QWORD *)(a2 + 48),
    a1);
  return a2;
}
