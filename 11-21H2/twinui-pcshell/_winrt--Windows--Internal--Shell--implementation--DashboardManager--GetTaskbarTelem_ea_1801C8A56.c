/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::GetTaskbarTelemetryFromContext_::_1_::catch$65 @ 0x1801C8A56
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::GetTaskbarTelemetryFromContext_::_1_::catch_65(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(a2 + 100) = 0;
  **(_QWORD **)(a2 + 104) = *(_QWORD *)(a2 + 96);
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 1064),
    (void *)0x55A,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    a4);
  return 0LL;
}
