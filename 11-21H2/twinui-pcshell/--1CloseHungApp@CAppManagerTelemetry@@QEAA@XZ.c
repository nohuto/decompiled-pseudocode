/*
 * XREFs of ??1CloseHungApp@CAppManagerTelemetry@@QEAA@XZ @ 0x1802E0210
 * Callers:
 *     ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1802E4520 (-HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 *     _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$0 @ 0x1802E475E (_CApplicationManager--HandleFrameWindowGhosted_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

void __fastcall CAppManagerTelemetry::CloseHungApp::~CloseHungApp(CAppManagerTelemetry::CloseHungApp *this)
{
  *(_QWORD *)this = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
