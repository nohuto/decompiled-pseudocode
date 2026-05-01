/*
 * XREFs of ?_IsSkippedItem@CLauncherTipContextMenu@@AEAA_NK@Z @ 0x1802EA956
 * Callers:
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x1806CF52C (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLauncherTipContextMenu::_IsSkippedItem(CLauncherTipContextMenu *this, int a2)
{
  _DWORD *v3; // rax
  int v4; // eax
  _DWORD *i; // rcx

  v3 = &CLauncherTipContextMenu::c_rgSkippedItems;
  do
  {
    if ( *v3 == a2 )
      return 1;
    ++v3;
  }
  while ( v3 != (_DWORD *)&unk_1808A670C );
  v4 = 0;
  for ( i = &CLauncherTipContextMenu::c_rgSkippedDuplicateItems; *i != a2; ++i )
  {
    if ( (unsigned int)++v4 >= 3 )
      return 0;
  }
  if ( *((_BYTE *)this + v4 + 346) )
    return 1;
  *((_BYTE *)this + v4 + 346) = 1;
  return 0;
}
