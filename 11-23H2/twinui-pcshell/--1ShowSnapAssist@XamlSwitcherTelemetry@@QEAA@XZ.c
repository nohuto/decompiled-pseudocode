/*
 * XREFs of ??1ShowSnapAssist@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802ECDEC
 * Callers:
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x18076A52C (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ??4ShowSnapAssist@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18076A768 (--4ShowSnapAssist@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$2 @ 0x18076E390 (_XamlSnapAssistViewHost--Show_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802EC68C (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_P.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowSnapAssist::~ShowSnapAssist(XamlSwitcherTelemetry::ShowSnapAssist *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowSnapAssist::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
