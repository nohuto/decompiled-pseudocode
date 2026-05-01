/*
 * XREFs of ??1ViewEventArgsForShowAsStandalone@@UEAA@XZ @ 0x18003E9BC
 * Callers:
 *     ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x18003E980 (--_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall ViewEventArgsForShowAsStandalone::~ViewEventArgsForShowAsStandalone(
        ViewEventArgsForShowAsStandalone *this)
{
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((char *)this + 152);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>(this);
}
