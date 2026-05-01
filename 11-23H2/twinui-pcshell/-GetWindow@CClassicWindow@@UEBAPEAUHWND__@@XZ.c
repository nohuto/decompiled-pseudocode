/*
 * XREFs of ?GetWindow@CClassicWindow@@UEBAPEAUHWND__@@XZ @ 0x1801BFDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CClassicWindow::GetWindow(CClassicWindow *this)
{
  return (HWND)*((_QWORD *)this + 2);
}
