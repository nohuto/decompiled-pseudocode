/*
 * XREFs of ??1DragCancel@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1802F3BEC
 * Callers:
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1802F5010 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802F4F64 (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragCancel::~DragCancel(AppViewManagerTabTelemetry::DragCancel *this)
{
  *(_QWORD *)this = &AppViewManagerTabTelemetry::DragCancel::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
