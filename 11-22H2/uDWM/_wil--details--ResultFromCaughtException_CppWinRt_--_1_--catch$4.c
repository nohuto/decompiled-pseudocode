/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x18009D57C
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x18009C7C4 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 72),
    *(const struct stdext::exception **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  return 0LL;
}
