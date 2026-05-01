/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$8 @ 0x1805BDD80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x18011FB18 (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_SwipeDashboard@@@0@XZ @ 0x1805BC838 (--$start_and_watch_errors@V-$tip_test@U_tip_SwipeDashboard@@@tip@@@tip@@YA-AV-$test_watcher@U_ti.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  tip::start_and_watch_errors<tip::tip_test<_tip_SwipeDashboard>>((struct wil::details::IFailureCallback *)(a2 + 64));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a2 + 48),
    (_QWORD *)(a2 + 112));
  v3 = *(_QWORD *)(a2 + 48);
  tip::details::test_common_data<1>::begin_update(v3 + 8);
  if ( v3 )
    v4 = v3 + 144;
  else
    v4 = 0LL;
  *(_BYTE *)(v4 + 12) = 1;
  if ( v3 )
  {
    tip::details::test_common_data<1>::end_update(v3 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)(a2 + 48));
  }
  v5 = *(std::_Ref_count_base **)(a2 + 56);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  tip::details::test_common_data<1>::complete(*(_QWORD *)(a2 + 112) + 8LL);
  v6 = *(std::_Ref_count_base **)(a2 + 120);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( *(_DWORD *)(a2 + 96) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 72));
  return 0LL;
}
