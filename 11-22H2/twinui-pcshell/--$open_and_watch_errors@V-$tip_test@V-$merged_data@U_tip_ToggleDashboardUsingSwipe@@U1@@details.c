/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180230B6C
 * Callers:
 *     ?CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x1806955F0 (-CancelSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CancelSwipe_::_1_::catch$14 @ 0x1806957A4 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CancelSwipe_--_1_--catch$14.c)
 *     ?CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695810 (-CommitSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::CommitSwipe_::_1_::catch$14 @ 0x1806959E2 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--CommitSwipe_--_1_--catch$14.c)
 *     ?ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180695B50 (-ContinueSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::ContinueSwipe_::_1_::catch$14 @ 0x180695D22 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--ContinueSwipe_--_1_--catch$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartSwipe_::_1_::catch$51 @ 0x1806982C4 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--StartSwipe_--_1_--catch$51.c)
 * Callees:
 *     ??0?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18023452C (--0-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180234A84 (--0-$test_watcher@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@IEAA@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235128 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180235BEC (--4-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249DD4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@@tip2@.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>>(
        struct wil::details::IFailureCallback *a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v2 = CoTaskMemAlloc(0x140uLL);
  if ( !v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
  v6 = tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>(
         v2,
         0LL);
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::operator=(
    &v5,
    &v6);
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>(&v6);
  tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::ensure_data(&v5);
  tip2::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>::test_watcher<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>>(a1);
  wil::com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>,wil::err_returncode_policy>(&v5);
  return a1;
}
