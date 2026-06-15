/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x14004DC84
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x14004CB00 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14004D268 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_1(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 40),
    *(const struct std::exception **)(a2 + 152),
    *(unsigned __int16 **)(a2 + 160));
  *(_DWORD *)(a2 + 72) = -2147024882;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
  *(_BYTE *)(a2 + 80) = 0;
  return 0LL;
}
