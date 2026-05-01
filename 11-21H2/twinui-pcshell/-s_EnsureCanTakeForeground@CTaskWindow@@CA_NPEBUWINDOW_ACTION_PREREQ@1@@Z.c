/*
 * XREFs of ?s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z @ 0x18030C060
 * Callers:
 *     <none>
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x180058F1C (-CanChangeForeground@@YAJXZ.c)
 */

bool __fastcall CTaskWindow::s_EnsureCanTakeForeground(const struct CTaskWindow::WINDOW_ACTION_PREREQ *a1)
{
  return (int)CanChangeForeground() >= 0;
}
