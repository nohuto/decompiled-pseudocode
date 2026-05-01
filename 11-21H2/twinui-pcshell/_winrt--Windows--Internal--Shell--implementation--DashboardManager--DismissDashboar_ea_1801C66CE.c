/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1_::_1_::catch$19 @ 0x1801C66CE
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync__ResumeCoro_1_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x4A3,
    (unsigned int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
    a4);
  return 0LL;
}
