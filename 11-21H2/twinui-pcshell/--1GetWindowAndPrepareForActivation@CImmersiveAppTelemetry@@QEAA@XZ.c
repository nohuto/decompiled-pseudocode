/*
 * XREFs of ??1GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAA@XZ @ 0x180021860
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x1800216F0 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     _CImmersiveApp::GetWindowAndPrepareForActivation_::_1_::dtor$0 @ 0x180214BD2 (_CImmersiveApp--GetWindowAndPrepareForActivation_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::~GetWindowAndPrepareForActivation(
        CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *this)
{
  *(_QWORD *)this = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
