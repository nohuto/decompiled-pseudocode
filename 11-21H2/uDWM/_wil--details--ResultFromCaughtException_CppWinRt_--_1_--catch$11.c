/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x180095B45
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x180094DBC (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_11(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 112),
    *(const struct stdext::exception **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  return 0LL;
}
