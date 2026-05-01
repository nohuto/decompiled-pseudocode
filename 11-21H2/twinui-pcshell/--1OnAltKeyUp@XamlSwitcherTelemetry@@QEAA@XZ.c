/*
 * XREFs of ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18060E420
 * Callers:
 *     ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x18060F014 (-OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ.c)
 *     _XamlAltTabViewController::OnAltKeyUp_::_1_::dtor$0 @ 0x18060F0ED (_XamlAltTabViewController--OnAltKeyUp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041D9A8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::OnAltKeyUp::~OnAltKeyUp(XamlSwitcherTelemetry::OnAltKeyUp *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
