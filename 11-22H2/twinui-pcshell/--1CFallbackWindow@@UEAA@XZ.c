/*
 * XREFs of ??1CFallbackWindow@@UEAA@XZ @ 0x18006ED20
 * Callers:
 *     ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x18006ECE4 (--_GCFallbackWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x180103494 (--1CIAMSpecialWindowBase@@UEAA@XZ.c)
 */

void __fastcall CFallbackWindow::~CFallbackWindow(CFallbackWindow *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 15);
  *((_DWORD *)this + 27) = -1073741823;
  CIAMSpecialWindowBase::~CIAMSpecialWindowBase((CFallbackWindow *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 16);
}
