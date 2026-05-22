/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x1800CAFB5
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x18007C714 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_11(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 112),
    *(wchar_t **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152));
  return 0LL;
}
