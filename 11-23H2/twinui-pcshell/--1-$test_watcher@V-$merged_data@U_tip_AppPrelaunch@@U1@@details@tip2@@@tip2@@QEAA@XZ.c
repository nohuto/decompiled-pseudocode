/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235894
 * Callers:
 *     ??$emplace@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@?$optional@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@std@@QEAAAEAV?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@$$QEAV23@@Z @ 0x180230028 (--$emplace@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@-$option.c)
 *     ??1?$_Optional_destruct_base@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@$0A@@std@@QEAA@XZ @ 0x180234FF4 (--1-$_Optional_destruct_base@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?reset@?$_Optional_destruct_base@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@$0A@@std@@QEAAXXZ @ 0x18024B5A0 (-reset@-$_Optional_destruct_base@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180235028 (--1-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::~test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>,wil::err_returncode_policy>((void **)(a1 + 48));
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
