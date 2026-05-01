/*
 * XREFs of ?GetWindow@CClassicWindow@@UEBAPEAUHWND__@@XZ @ 0x180182090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CClassicWindow::GetWindow(CClassicWindow *this)
{
  return (HWND)*((_QWORD *)this + 2);
}
