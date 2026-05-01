/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_ResumeCoro$1_::_1_::catch$10 @ 0x1801CAD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??C?$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEBAPEAU_tip_AppPrelaunchBackgroundTask@@XZ @ 0x1805BCC68 (--C-$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEBAPEAU_tip_AppPrelaunchBackgrou.c)
 *     ??C?$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA?AV?$test_data_control@U_tip_AppPrelaunchBackgroundTask@@@1@XZ @ 0x1805BCC84 (--C-$test_watcher@U_tip_AppPrelaunchBackgroundTask@@@tip@@QEAA-AV-$test_data_control@U_tip_AppPr.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent__ResumeCoro_1_::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // rax

  v2 = (_DWORD *)(*(_QWORD *)(a2 + 72) + 12LL);
  v3 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v3 + 544) = v2;
  LODWORD(v2) = *v2;
  *(_DWORD *)(v3 + 560) = (_DWORD)v2;
  *(_DWORD *)(v3 + 208) = (_DWORD)v2;
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x4CF,
    (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)(unsigned int)v2);
  v4 = tip::test_watcher<_tip_AppPrelaunchBackgroundTask>::operator->(v3 + 48, v3 + 216);
  *(_QWORD *)(v3 + 336) = v4;
  v5 = (_DWORD *)(tip::test_data_control<_tip_AppPrelaunchBackgroundTask>::operator->(v4) + 8);
  *(_QWORD *)(v3 + 576) = v5;
  *v5 = *(_DWORD *)(v3 + 208);
  tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>((__int64 *)(v3 + 216));
  return 0LL;
}
