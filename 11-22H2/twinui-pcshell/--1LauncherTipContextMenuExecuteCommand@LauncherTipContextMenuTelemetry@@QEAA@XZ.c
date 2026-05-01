/*
 * XREFs of ??1LauncherTipContextMenuExecuteCommand@LauncherTipContextMenuTelemetry@@QEAA@XZ @ 0x1806CBB60
 * Callers:
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::__lambda_21d9478fa7481aa5ac8b815bdb34bba5_ @ 0x1806CB934 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--__lambda_21d9478fa7481aa5ac8b815bdb34bba5_.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1806CBCEC (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 *     __lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator()_::_1_::dtor$0 @ 0x1806CC015 (__lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator()_--_1_--dtor$0.c)
 *     shell::TaskScheduler::CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34bba5__CRefCountedObject_CLauncherTipContextMenu::LauncherTipMenuCommand____::_scalar_deleting_destructor_ @ 0x1806CC140 (shell--TaskScheduler--CSimpleRunnableTaskParam__lambda_21d9478fa7481aa5ac8b815bdb34_ea_1806CC140.c)
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1806DF458 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 *     _CLauncherTipContextMenu::_ExecuteCommand_::_1_::dtor$1 @ 0x1806DF74B (_CLauncherTipContextMenu--_ExecuteCommand_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18019522C (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::~LauncherTipContextMenuExecuteCommand(
        LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand *this)
{
  *(_QWORD *)this = &LauncherTipContextMenuTelemetry::LauncherTipContextMenuExecuteCommand::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
