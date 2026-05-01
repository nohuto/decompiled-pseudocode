/*
 * XREFs of _CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1_::_1_::catch$9 @ 0x18019395C
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::ShowRequested__ResumeCoro_1_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x2EB,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    a4);
  return 0LL;
}
