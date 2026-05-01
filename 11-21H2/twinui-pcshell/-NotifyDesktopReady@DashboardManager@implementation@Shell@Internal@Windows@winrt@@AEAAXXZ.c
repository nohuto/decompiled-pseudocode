/*
 * XREFs of ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801C91E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180030878 (-TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1801C9DD0 (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ??C?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@1@XZ @ 0x1805BCC84 (--C-$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA-AV-$test_data_control@U_tip_AppPr.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@2@XZ @ 0x1805BE86C (-start_and_watch_errors@-$tip_test@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA-AV-$test_watcher.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  wil *v4; // rcx
  const char *v5; // rbx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v11; // [rsp+88h] [rbp+10h] BYREF

  v7 = 0LL;
  tip::tip_test<_tip_AppPrelaunchBackgroundTask>::start_and_watch_errors(&v7, v8);
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>((__int64)&v7);
  try
  {
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(this, &v11, 0LL);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(this);
    v2 = *(_QWORD *)tip::test_watcher<_tip_AppPrelaunchBackgroundTask>::operator->(v8, &v7);
    v3 = v2 + 152;
    if ( !v2 )
      v3 = 8LL;
    *(_DWORD *)v3 = 0;
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)&v7);
  }
  catch ( ... )
  {
    v5 = (const char *)(unsigned int)wil::ResultFromCaughtException(v4);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x4B5,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      v5);
    v6 = *(_QWORD *)tip::test_watcher<_tip_AppPrelaunchBackgroundTask>::operator->(v8, &v7);
    if ( v6 )
      v6 += 144LL;
    *(_DWORD *)(v6 + 8) = (_DWORD)v5;
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)&v7);
  }
  tip::details::test_common_data<0>::complete(v9 + 8);
  tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)v8);
}
