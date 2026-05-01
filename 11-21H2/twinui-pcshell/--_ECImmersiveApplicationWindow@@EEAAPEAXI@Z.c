/*
 * XREFs of ??_ECImmersiveApplicationWindow@@EEAAPEAXI@Z @ 0x180083160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CImmersiveApplicationWindow *__fastcall CImmersiveApplicationWindow::`vector deleting destructor'(
        CImmersiveApplicationWindow *this,
        char a2)
{
  *(_QWORD *)this = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
  *((_QWORD *)this + 4) = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 24);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
