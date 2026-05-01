/*
 * XREFs of ?ShouldHaveAppView@CClassicWindow@@UEBA_NXZ @ 0x1800D1580
 * Callers:
 *     <none>
 * Callees:
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x1800D1A44 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 */

char __fastcall CClassicWindow::ShouldHaveAppView(CClassicWindow *this)
{
  unsigned int v1; // ebx
  char ShouldShowInSwitchers; // al
  char v3; // cl

  v1 = *((_DWORD *)this + 18);
  ShouldShowInSwitchers = CClassicWindow::s_ShouldShowInSwitchers(v1);
  v3 = 0;
  if ( ShouldShowInSwitchers || (v1 & 5) != 0 )
    return 1;
  return v3;
}
