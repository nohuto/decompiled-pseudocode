/*
 * XREFs of __lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator()_::_1_::catch$36 @ 0x1801AFDA6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator()_::_1_::catch_36(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 64) + 8LL) + 1204LL) = 0;
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0x865,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                           a4);
  return 0LL;
}
