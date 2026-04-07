/*
 * XREFs of _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x18009CBC9
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x18009C7C4 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch_0(__int64 a1, __int64 a2)
{
  int v3; // eax

  wil::details::MaybeGetExceptionString(
    *(wil::details **)(a2 + 32),
    *(const struct stdext::exception **)(a2 + 64),
    *(unsigned __int16 **)(a2 + 72));
  v3 = *(_DWORD *)(a2 + 80);
  if ( v3 >= 0 )
    v3 = -2147024322;
  *(_DWORD *)(a2 + 80) = v3;
  return 0LL;
}
