/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services_::_1_::catch$4 @ 0x180222762
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::subscribe_to_services_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x50,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp",
    a4);
  return 0LL;
}
