/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x18038BDE4
 * Callers:
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$3 @ 0x1802EA937 (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$3.c)
 *     _CLauncherTipContextMenu::_CheckLinkHash_::_1_::dtor$4 @ 0x1802EA943 (_CLauncherTipContextMenu--_CheckLinkHash_--_1_--dtor$4.c)
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x18059DBD2 (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_AddLinkToCommands_::_1_::dtor$6 @ 0x1806DDD9C (_CLauncherTipContextMenu--_AddLinkToCommands_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
