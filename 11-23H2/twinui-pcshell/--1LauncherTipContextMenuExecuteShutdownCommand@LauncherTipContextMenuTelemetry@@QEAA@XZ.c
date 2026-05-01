/*
 * XREFs of ??1LauncherTipContextMenuExecuteShutdownCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1806CBB8C
 * Callers:
 *     ?_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipShutdownMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEBUtagRECT@@@Z @ 0x1806DF790 (-_ExecuteShutdownCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherT.c)
 *     _CLauncherTipContextMenu::_ExecuteShutdownCommand_::_1_::dtor$1 @ 0x1806DF9B9 (_CLauncherTipContextMenu--_ExecuteShutdownCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18019522C (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::~LauncherTipContextMenuExecuteShutdownCommand(
        LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand *this)
{
  *(_QWORD *)this = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteShutdownCommand::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
