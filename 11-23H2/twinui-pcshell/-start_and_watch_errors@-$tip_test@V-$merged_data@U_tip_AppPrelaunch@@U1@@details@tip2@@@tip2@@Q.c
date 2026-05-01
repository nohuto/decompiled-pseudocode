/*
 * XREFs of ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@2@XZ @ 0x18024C0D0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180045EC4 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180085A44 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180234A30 (--0-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@IEAA@AEAV-$com_ptr.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249B88 (-ensure_data@-$tip_test@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@AEBAAEAV-$co.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18024B5C8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::start_and_watch_errors(
        volatile signed __int32 **a1,
        struct wil::details::IFailureCallback *a2)
{
  volatile signed __int32 *v4; // rcx
  void **v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)(v4 + 2)) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::reset(a1);
  v5 = tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::ensure_data((void **)a1);
  tip2::details::shared_data<1,0,0>::start((__int64)*v5 + 8, &v7);
  tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>(
    a2,
    (__int64 *)a1);
  return a2;
}
