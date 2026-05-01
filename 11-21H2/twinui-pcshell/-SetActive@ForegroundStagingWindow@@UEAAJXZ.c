/*
 * XREFs of ?SetActive@ForegroundStagingWindow@@UEAAJXZ @ 0x180043170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ForegroundStagingWindow::SetActive(HWND *this)
{
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( SetForegroundWindow(this[3]) )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (unsigned int)"pcshell\\TwinUI\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
    (const char *)0x80070005LL,
    v2);
  return 2147942405LL;
}
