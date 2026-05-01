/*
 * XREFs of ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1805F96D0
 * Callers:
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1805F9C18 (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     _XamlAltTabViewHost::CreateAltTabControl_::_1_::dtor$0 @ 0x1805FA4B7 (_XamlAltTabViewHost--CreateAltTabControl_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18041D9A8 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::CreateAltTabControl::~CreateAltTabControl(
        XamlSwitcherTelemetry::CreateAltTabControl *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::CreateAltTabControl::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
