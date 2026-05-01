/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x1801382D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::ShouldShowInSwitchers(CClassicWindow *this)
{
  return (*((_BYTE *)this + 72) & 3) != 0 && (*((_BYTE *)this + 72) & 8) == 0;
}
