/*
 * XREFs of ??1CFallbackWindow@@UEAA@XZ @ 0x18017A448
 * Callers:
 *     ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x18017A40C (--_GCFallbackWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1800D452C (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

void __fastcall CFallbackWindow::~CFallbackWindow(CFallbackWindow *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 27) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase((CFallbackWindow *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
