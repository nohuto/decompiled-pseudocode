/*
 * XREFs of _Win32AppStateManager::UpdateAppView_::_1_::catch$8 @ 0x180626B93
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Win32AppStateManager::UpdateAppView_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x197,
    (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
    a4);
  return 0LL;
}
