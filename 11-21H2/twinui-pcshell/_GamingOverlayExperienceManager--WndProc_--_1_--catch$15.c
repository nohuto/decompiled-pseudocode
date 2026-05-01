/*
 * XREFs of _GamingOverlayExperienceManager::WndProc_::_1_::catch$15 @ 0x18033B62F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x1803348FC (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::WndProc_::_1_::catch_15(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+20h] [rbp-28h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 280),
    (unsigned __int16 *)0x359,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    "Exception in WM_HOOKWINEVENT handler",
    v3);
  return 0LL;
}
