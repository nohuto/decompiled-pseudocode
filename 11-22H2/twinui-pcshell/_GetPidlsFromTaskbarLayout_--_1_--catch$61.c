/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::catch$61 @ 0x1802C5244
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::catch_61(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 164) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 1160),
                            (void *)0x27E,
                            (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                            a4);
  return 0LL;
}
