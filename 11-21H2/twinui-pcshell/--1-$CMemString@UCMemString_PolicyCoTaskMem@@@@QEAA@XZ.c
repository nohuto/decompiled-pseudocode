/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x1804E49B4
 * Callers:
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$6 @ 0x1801E7D27 (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$6.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$3 @ 0x180239D6A (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$4 @ 0x180239D76 (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$4.c)
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x1804E5D18 (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
