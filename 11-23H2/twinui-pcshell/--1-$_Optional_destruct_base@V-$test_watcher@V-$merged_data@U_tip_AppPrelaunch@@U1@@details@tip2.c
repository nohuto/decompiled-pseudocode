/*
 * XREFs of ??1?$_Optional_destruct_base@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@$0A@@std@@QEAA@XZ @ 0x180234FF4
 * Callers:
 *     ??1?$optional@V?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@std@@QEAA@XZ @ 0x1802355C4 (--1-$optional@V-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@@std@@.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235894 (--1-$test_watcher@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Optional_destruct_base<tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>,0>::~_Optional_destruct_base<tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>,0>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 56) )
    return tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>::~test_watcher<tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>>();
  return result;
}
