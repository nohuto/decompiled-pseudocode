/*
 * XREFs of _GamingAudio::AppList::GetEndpointSessions_::_1_::catch$30 @ 0x18033F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GamingAudio::AppList::GetEndpointSessions_::_1_::catch_30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x29E,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
    a4);
  return 0LL;
}
