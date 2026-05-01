/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_ResumeCoro$1_::_1_::catch$7 @ 0x180240CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__ResumeCoro_1_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  int v3; // [rsp+20h] [rbp-8h]

  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x968,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    (const char *)*(unsigned int *)(*(_QWORD *)(a2 + 48) + 12LL),
    v3);
  return 0LL;
}
