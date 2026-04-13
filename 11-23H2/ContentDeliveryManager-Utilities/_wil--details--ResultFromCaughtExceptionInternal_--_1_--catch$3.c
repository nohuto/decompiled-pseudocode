/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x1800D5CC3
 * Callers:
 *     <none>
 * Callees:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x180039360 (-MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_3(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx

  **(_BYTE **)(a2 + 168) = 1;
  v3 = *(_QWORD *)(a2 + 48);
  wil::details::MaybeGetExceptionString(
    (wil::details *)v3,
    *(const struct wil::ResultException **)(a2 + 152),
    *(unsigned __int16 **)(a2 + 160));
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(a2 + 76) = *(_DWORD *)(v3 + 36);
  *(_BYTE *)(a2 + 80) = (*(_BYTE *)(v3 + 28) & 8) != 0;
  return 0LL;
}
