/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading_::_1_::catch$9 @ 0x1806FB0F3
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeDeviceLoading_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x1D6,
    (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
    a4);
  return 0LL;
}
