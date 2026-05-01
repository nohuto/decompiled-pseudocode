/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$6 @ 0x180223F25
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x18022A18C (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_6(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details *v5; // rbx

  **(_BYTE **)(a2 + 160) = 1;
  v5 = *(wil::details **)(a2 + 80);
  wil::details::MaybeGetExceptionString(
    v5,
    *(const struct wil::ResultException **)(a2 + 144),
    *(unsigned __int16 **)(a2 + 152),
    a4);
  *(_DWORD *)(a2 + 168) = *((_DWORD *)v5 + 8);
  return 0LL;
}
