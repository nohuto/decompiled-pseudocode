/*
 * XREFs of ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x18013FAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::ShouldHaveAppView(CClassicWindow *this)
{
  return (*((_BYTE *)this + 72) & 3) != 0 && (*((_BYTE *)this + 72) & 8) == 0 || (*((_BYTE *)this + 72) & 5) != 0;
}
