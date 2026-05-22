/*
 * XREFs of ?GetHwnd@CHwndTarget@DirectComposition@@UEBAPEAUHWND__@@XZ @ 0x18008F1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall DirectComposition::CHwndTarget::GetHwnd(DirectComposition::CHwndTarget *this)
{
  return (HWND)*((_QWORD *)this + 2);
}
