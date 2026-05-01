/*
 * XREFs of ??1ShowPPIAllUpView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180562F04
 * Callers:
 *     ?Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180563AC0 (-Show@CPPIAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _CPPIAllUpViewHost::Show_::_1_::dtor$1 @ 0x180563D2C (_CPPIAllUpViewHost--Show_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002DBC8 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall MultitaskingViewTelemetry::ShowPPIAllUpView::~ShowPPIAllUpView(
        MultitaskingViewTelemetry::ShowPPIAllUpView *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::ShowPPIAllUpView::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
