/*
 * XREFs of __lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator()_::_1_::catch$8 @ 0x1801A71F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_5a859347bbbbbb78c34c3a6938b2a83e_::operator()_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 504),
                           (void *)0xC3,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
                           a4);
  return 0LL;
}
