/*
 * XREFs of __anonymous_namespace_::TryGetProcessPublisher_::_1_::catch$12 @ 0x1806A7EE5
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _anonymous_namespace_::TryGetProcessPublisher_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v5; // rax

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x226,
    (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    a4);
  v5 = *(_QWORD **)(a2 + 32);
  *v5 = 0LL;
  v5[2] = 0LL;
  v5[2] = 0LL;
  v5[3] = 7LL;
  *(_WORD *)v5 = 0;
  return 0LL;
}
