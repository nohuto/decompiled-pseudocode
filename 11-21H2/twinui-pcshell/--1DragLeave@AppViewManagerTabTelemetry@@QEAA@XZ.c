/*
 * XREFs of ??1DragLeave@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1802F3C70
 * Callers:
 *     ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1802F5A50 (-DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802F4EBC (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragLeave::~DragLeave(AppViewManagerTabTelemetry::DragLeave *this)
{
  *(_QWORD *)this = &AppViewManagerTabTelemetry::DragLeave::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
