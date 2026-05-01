/*
 * XREFs of ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1805D84F0
 * Callers:
 *     _lambda_4d6a380c2bab4ae2f41af78280fc3735_::__lambda_4d6a380c2bab4ae2f41af78280fc3735_ @ 0x1801D76A4 (_lambda_4d6a380c2bab4ae2f41af78280fc3735_--__lambda_4d6a380c2bab4ae2f41af78280fc3735_.c)
 *     _lambda_4d6a380c2bab4ae2f41af78280fc3735_::operator() @ 0x1801D78FC (_lambda_4d6a380c2bab4ae2f41af78280fc3735_--operator().c)
 *     __lambda_4d6a380c2bab4ae2f41af78280fc3735_::operator()_::_1_::dtor$0 @ 0x1801D7C4C (__lambda_4d6a380c2bab4ae2f41af78280fc3735_--operator()_--_1_--dtor$0.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1805DBD08 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$1 @ 0x1805DC010 (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180069B14 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
