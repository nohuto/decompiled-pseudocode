/*
 * XREFs of ??0LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@AEBV01@@Z @ 0x1805D8274
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____ @ 0x1801D7430 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_4d6a380c2bab4ae2f41af78280fc3735__CRefCou.c)
 *     _lambda_4d6a380c2bab4ae2f41af78280fc3735_::operator() @ 0x1801D78FC (_lambda_4d6a380c2bab4ae2f41af78280fc3735_--operator().c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180047D38 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *__fastcall LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::LauncherTipContextMenuExecuteCommand(
        LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *this,
        const struct LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *a2)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)this,
    (__int64)a2);
  *(_QWORD *)this = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  return this;
}
