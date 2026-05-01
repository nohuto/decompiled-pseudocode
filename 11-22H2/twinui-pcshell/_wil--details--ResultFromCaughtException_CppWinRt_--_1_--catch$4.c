/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x1802C73F2
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x18038E190 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 72),
    *(const struct std::exception **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152),
    a4);
  return 0LL;
}
