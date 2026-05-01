/*
 * XREFs of ?IsTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x18019A9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::IsTrayWindow(CClassicWindow *this)
{
  return *((_BYTE *)this + 72) & 1;
}
