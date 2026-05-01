/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$4 @ 0x180222436
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z @ 0x18041F34C (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  wil::details *v5; // rbx

  v5 = *(wil::details **)(a2 + 56);
  wil::details::MaybeGetExceptionString(
    v5,
    *(const struct wil::ResultException **)(a2 + 112),
    *(wchar_t **)(a2 + 120),
    a4);
  *(_DWORD *)(a2 + 136) = *((_DWORD *)v5 + 8);
  return 0LL;
}
