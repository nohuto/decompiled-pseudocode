/*
 * XREFs of ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1802F10D8
 * Callers:
 *     ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x18022AAB0 (-SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CClassicWindow::s_ShouldShowInSwitchers(char a1)
{
  return (a1 & 3) != 0 && (a1 & 8) == 0;
}
