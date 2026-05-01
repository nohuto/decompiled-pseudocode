/*
 * XREFs of ??1SetPendingApplicationWindow@CImmersiveAppTelemetry@@QEAA@XZ @ 0x1803BF344
 * Callers:
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C454C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::SetPendingApplicationWindow_::_1_::dtor$0 @ 0x1803C46C8 (_CImmersiveApp--CImmersiveWindowCollection--SetPendingApplicationWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180022D38 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::SetPendingApplicationWindow::~SetPendingApplicationWindow(
        CImmersiveAppTelemetry::SetPendingApplicationWindow *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::SetPendingApplicationWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
