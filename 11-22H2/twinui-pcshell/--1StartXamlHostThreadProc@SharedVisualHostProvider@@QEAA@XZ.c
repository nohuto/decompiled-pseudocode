/*
 * XREFs of ??1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D5C
 * Callers:
 *     ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214 (-XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ.c)
 *     _SharedDesktopBackgroundVisualHost::XamlHostThreadProc_::_1_::dtor$0 @ 0x1806EC4D4 (_SharedDesktopBackgroundVisualHost--XamlHostThreadProc_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806E790C (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::StartXamlHostThreadProc::~StartXamlHostThreadProc(
        SharedVisualHostProvider::StartXamlHostThreadProc *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::StartXamlHostThreadProc::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
