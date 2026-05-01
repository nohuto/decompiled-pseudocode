/*
 * XREFs of ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18042EE74
 * Callers:
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::__lambda_baaea9c5454d5217874bd274f7881db0_ @ 0x18042E794 (_lambda_baaea9c5454d5217874bd274f7881db0_--__lambda_baaea9c5454d5217874bd274f7881db0_.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804324F4 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _XamlAllUpViewHost::CreateFrameForMonitor_::_1_::dtor$12 @ 0x180432E64 (_XamlAllUpViewHost--CreateFrameForMonitor_--_1_--dtor$12.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041D9A8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback(
        XamlSwitcherTelemetry::WindowCreatedCallback *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
