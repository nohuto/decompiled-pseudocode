/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@U_tip_AppPrelaunch@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_AppPrelaunch@@@0@XZ @ 0x18011B2D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_AppPrelaunch@@@details@tip@@@std@@XZ @ 0x18011B350 (-ensure_data@-$tip_test@U_tip_AppPrelaunch@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_tip.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121CB4 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 */

struct wil::details::IFailureCallback *__fastcall tip::start_and_watch_errors<tip::tip_test<_tip_AppPrelaunch>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf
  std::_Ref_count_base *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  v2 = (_QWORD *)tip::tip_test<_tip_AppPrelaunch>::ensure_data(v5);
  tip::details::test_common_data<1>::start(*v2 + 8LL, v6);
  v3 = v5[0] == 0LL;
  *(_QWORD *)a1 = &tip::test_watcher<_tip_StartMenuInvokeTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    !v3);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    (_QWORD *)a1 + 6,
    v5);
  if ( v5[1] )
    std::_Ref_count_base::_Decref(v5[1]);
  return a1;
}
