/*
 * XREFs of _XamlLauncher::PublishServices_::_1_::catch$7 @ 0x1802BCC3F
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncher::PublishServices_::_1_::catch_7(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 176) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x2A5,
                            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
                            a4);
  return 0LL;
}
