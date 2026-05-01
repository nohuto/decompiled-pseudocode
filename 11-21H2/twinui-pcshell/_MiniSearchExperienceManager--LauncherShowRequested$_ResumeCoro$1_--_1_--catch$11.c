/*
 * XREFs of _MiniSearchExperienceManager::LauncherShowRequested$_ResumeCoro$1_::_1_::catch$11 @ 0x1801A7F9E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall MiniSearchExperienceManager::LauncherShowRequested__ResumeCoro_1_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x1A4,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
    a4);
  return 0LL;
}
