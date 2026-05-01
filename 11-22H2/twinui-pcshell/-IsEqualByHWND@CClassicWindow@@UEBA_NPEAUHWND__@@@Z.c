/*
 * XREFs of ?IsEqualByHWND@CClassicWindow@@UEBA_NPEAUHWND__@@@Z @ 0x180153370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsEqualByHWND(HWND *this, HWND a2)
{
  return a2 == this[2];
}
