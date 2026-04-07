/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x1800957AB
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800083F0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x180094DBC (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_5(__int64 a1, __int64 a2)
{
  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 64),
    *(const struct stdext::exception **)(a2 + 152),
    *(unsigned __int16 **)(a2 + 160));
  *(_DWORD *)(a2 + 72) = -2147024322;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
  *(_BYTE *)(a2 + 80) = 0;
  return 0LL;
}
