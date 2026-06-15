/*
 * XREFs of _TsSessionIdAddAppManagerClient_::_1_::catch$11 @ 0x18004619D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000C5DC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall TsSessionIdAddAppManagerClient_::_1_::catch_11(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x4F3,
                            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                            a4);
  return 0LL;
}
