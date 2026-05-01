/*
 * XREFs of ?start_and_watch_errors@?$tip_test@U_tip_ToggleDashboardExtension@@@tip@@QEAA?AV?$test_watcher@U_tip_ToggleDashboardExtension@@@2@XZ @ 0x180033ED8
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_ToggleDashboardExtension@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_ToggleDashboardExtension@@@0@XZ @ 0x180033E98 (--$start_and_watch_errors@V-$tip_test@U_tip_ToggleDashboardExtension@@@tip@@@tip@@YA-AV-$test_wa.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ToggleDashboardExtension@@@details@tip@@@std@@QEAA@XZ @ 0x180033FA8 (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ToggleDashboardExtension@@@details@tip@@@st.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180041254 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip::tip_test<_tip_ToggleDashboardExtension>::start_and_watch_errors(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  void *v5; // rax
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  char v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( *a1 && (unsigned __int8)tip::details::test_common_data<1>::has_ever_started(v4 + 8) )
  {
    std::shared_ptr<PeoplePaneViewInfo>::reset(a1);
    v4 = *a1;
  }
  if ( !v4 )
  {
    v5 = operator new(0xB0uLL);
    v6 = std::_Ref_count_obj2<tip::details::test_merged_data<_tip_ToggleDashboardExtension>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_ToggleDashboardExtension>>(v5);
    v4 = v6 + 16;
    *a1 = v6 + 16;
    v7 = (std::_Ref_count_base *)a1[1];
    a1[1] = v6;
    if ( v7 )
    {
      std::_Ref_count_base::_Decref(v7);
      v4 = *a1;
    }
  }
  tip::details::test_common_data<1>::start(v4 + 8, v9);
  *(_QWORD *)a2 = &tip::test_watcher<_tip_StartMenuInvokeTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    *a1 != 0);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)(a2 + 48),
    a1);
  return a2;
}
