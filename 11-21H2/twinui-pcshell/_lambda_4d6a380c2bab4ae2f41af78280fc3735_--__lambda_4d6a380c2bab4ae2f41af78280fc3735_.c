/*
 * XREFs of _lambda_4d6a380c2bab4ae2f41af78280fc3735_::__lambda_4d6a380c2bab4ae2f41af78280fc3735_ @ 0x1801D76A4
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::_CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D776C (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc_ea_1801D776C.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$9 @ 0x1805DC040 (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$9.c)
 * Callees:
 *     ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1805D84F0 (--1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_4d6a380c2bab4ae2f41af78280fc3735_::__lambda_4d6a380c2bab4ae2f41af78280fc3735_(__int64 *a1)
{
  LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand((LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *)(a1 + 1));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
