/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x18009D34E
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18009BF74 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x18009C7C4 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 56),
    *(const struct stdext::exception **)(a2 + 152),
    *(unsigned __int16 **)(a2 + 160));
  *(_DWORD *)(a2 + 72) = -2147024882;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
  *(_BYTE *)(a2 + 80) = 0;
  return 0LL;
}
