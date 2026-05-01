/*
 * XREFs of ??1CFullScreenManager@@UEAA@XZ @ 0x1801B1A44
 * Callers:
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x1801B1A0C (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CFullScreenManager::~CFullScreenManager(CFullScreenManager *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rbp

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((char *)this + 208);
  v2 = (unsigned __int64 *)((char *)this + 168);
  if ( *((_QWORD *)this + 20) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 20) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 20));
    *((_QWORD *)this + 20) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CFullScreenManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
