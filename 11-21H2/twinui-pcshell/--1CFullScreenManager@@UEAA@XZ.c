/*
 * XREFs of ??1CFullScreenManager@@UEAA@XZ @ 0x180177224
 * Callers:
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x1801771EC (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x180173F8C (-InternalRelease@-$ComPtr@UICallingProcessInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CFullScreenManager::~CFullScreenManager(CFullScreenManager *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<ICallingProcessInfo>::InternalRelease((__int64 *)this + 26);
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 21) )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 20) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 21) );
      v2 = (void *)*((_QWORD *)this + 20);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CFullScreenManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
