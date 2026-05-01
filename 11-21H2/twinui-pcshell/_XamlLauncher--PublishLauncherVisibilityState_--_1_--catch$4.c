/*
 * XREFs of _XamlLauncher::PublishLauncherVisibilityState_::_1_::catch$4 @ 0x18021FC99
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncher::PublishLauncherVisibilityState_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x582,
    (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    a4);
  return 0LL;
}
