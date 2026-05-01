/*
 * XREFs of ?GetPosition@CMultitaskingViewFrame@@UEAAJPEAUtagRECT@@@Z @ 0x18056DE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMultitaskingViewFrame::GetPosition(HWND *this, struct tagRECT *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( GetWindowRect(this[6], a2) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x22E,
             (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
             v2);
}
