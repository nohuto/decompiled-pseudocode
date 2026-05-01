/*
 * XREFs of ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PU_GUID@@@Z @ 0x180230ADC
 * Callers:
 *     ?EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUDashboardExtension@Dashboard@3UI@WindowsUdk@6@AEAUguid@6@@Z @ 0x180239044 (-EnsureDashboardExtensionCreated@DashboardManager@implementation@Shell@Internal@Windows@winrt@@A.c)
 * Callees:
 *     ??0?$test_watcher@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18021E404 (--0-$test_watcher@V-$merged_data@U_tip_TaskGroupSwitchToTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 *     ??0?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180233D9C (--0-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235068 (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180235B8C (--4-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180249BE8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1803900AC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

struct wil::details::IFailureCallback *__fastcall tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>>(
        struct wil::details::IFailureCallback *a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  LPVOID v4; // rax
  wil::details::in1diag3 *v5; // rcx
  __int64 *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a2;
  v9 = 0LL;
  v8 = v2;
  v4 = CoTaskMemAlloc(0x138uLL);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v5);
  v10 = tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>(
          v4,
          &v8);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::operator=(
    &v9,
    &v10);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>(&v10);
  v6 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::ensure_data(&v9);
  tip2::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>::test_watcher<tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupSwitchToTest>>(
    a1,
    v6);
  wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>(&v9);
  return a1;
}
