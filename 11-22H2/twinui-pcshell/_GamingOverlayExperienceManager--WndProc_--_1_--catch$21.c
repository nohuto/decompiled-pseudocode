/*
 * XREFs of _GamingOverlayExperienceManager::WndProc_::_1_::catch$21 @ 0x1804094C6
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x1804022D8 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WndProc_::_1_::catch_21(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 280),
    (unsigned __int16 *)0x36E,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    "Exception in WM_HOOKWINEVENT handler",
    v3);
  return 0LL;
}
