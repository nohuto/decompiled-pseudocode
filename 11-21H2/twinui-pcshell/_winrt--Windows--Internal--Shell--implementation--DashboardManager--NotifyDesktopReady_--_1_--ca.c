/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch$6 @ 0x1801C9286
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1803198D0 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??C?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@1@XZ @ 0x1805BCC84 (--C-$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA-AV-$test_data_control@U_tip_AppPr.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady_::_1_::catch_6(
        wil *a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = wil::ResultFromCaughtException(a1);
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x4B5,
    (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)v3);
  v4 = *(_QWORD *)tip::test_watcher<_tip_AppPrelaunchBackgroundTask>::operator->(a2 + 48, a2 + 32);
  if ( v4 )
    v4 += 144LL;
  *(_DWORD *)(v4 + 8) = v3;
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)(a2 + 32));
  return 0LL;
}
