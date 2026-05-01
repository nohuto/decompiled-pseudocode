/*
 * XREFs of __lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator()_::_1_::catch$42 @ 0x18020861D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_a09f288fb701b6a3bb133eb64dd6b836_::operator()_::_1_::catch_42(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL) + 1012LL) = 0;
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 248),
                           (void *)0x760,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                           a4);
  return 0LL;
}
