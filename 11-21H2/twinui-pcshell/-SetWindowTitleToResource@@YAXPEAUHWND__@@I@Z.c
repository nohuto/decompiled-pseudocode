/*
 * XREFs of ?SetWindowTitleToResource@@YAXPEAUHWND__@@I@Z @ 0x180438458
 * Callers:
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SetWindowTitleToResource(HWND hWnd)
{
  const char *v2; // r9
  WCHAR Buffer[264]; // [rsp+20h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  if ( !LoadStringW(&_ImageBase, 0x5E8u, Buffer, 260) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)8,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      v2);
  SetWindowTextW(hWnd, Buffer);
}
