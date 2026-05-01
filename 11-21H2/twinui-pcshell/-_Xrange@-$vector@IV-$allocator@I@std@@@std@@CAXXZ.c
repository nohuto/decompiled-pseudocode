/*
 * XREFs of ?_Xrange@?$vector@IV?$allocator@I@std@@@std@@CAXXZ @ 0x1801E7DF8
 * Callers:
 *     ?_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z @ 0x1801DA504 (-_AddFolderLinksToCommands@CLauncherTipContextMenu@@AEAAJPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     <none>
 */

void std::vector<unsigned int>::_Xrange()
{
  std::_Xout_of_range("invalid vector subscript");
  __debugbreak();
  JUMPOUT(0x1801E7E10LL);
}
