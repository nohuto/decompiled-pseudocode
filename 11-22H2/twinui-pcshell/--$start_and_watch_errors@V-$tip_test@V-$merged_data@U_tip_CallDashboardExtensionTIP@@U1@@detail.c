/*
 * XREFs of ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x1802333D0
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x180187594 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 * Callees:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180045EC4 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18021E404 (--0-$test_watcher@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235068 (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249BE8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>>(
        struct wil::details::IFailureCallback *a1)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::ensure_data(&v5);
  tip2::details::shared_data<1,0,0>::start(*v2 + 8LL, &v4);
  tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>(
    a1,
    &v5);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>(&v5);
  return a1;
}
