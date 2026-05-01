/*
 * XREFs of ??1CreateXamlHostWindow@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6C28
 * Callers:
 *     ?CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ @ 0x1806E7674 (-CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ.c)
 *     _SharedDesktopBackgroundVisualHost::CreateXamlHostWindow_::_1_::dtor$0 @ 0x1806E7843 (_SharedDesktopBackgroundVisualHost--CreateXamlHostWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1806E7858 (-Destroy@-$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 */

void __fastcall SharedVisualHostProvider::CreateXamlHostWindow::~CreateXamlHostWindow(
        SharedVisualHostProvider::CreateXamlHostWindow *this)
{
  *(_QWORD *)this = &SharedVisualHostProvider::CreateXamlHostWindow::`vftable';
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
