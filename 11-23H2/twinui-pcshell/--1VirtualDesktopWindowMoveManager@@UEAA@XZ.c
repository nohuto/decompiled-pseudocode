/*
 * XREFs of ??1VirtualDesktopWindowMoveManager@@UEAA@XZ @ 0x1801B692C
 * Callers:
 *     ??_GVirtualDesktopWindowMoveManager@@UEAAPEAXI@Z @ 0x1801B68F0 (--_GVirtualDesktopWindowMoveManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall VirtualDesktopWindowMoveManager::~VirtualDesktopWindowMoveManager(
        VirtualDesktopWindowMoveManager *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
}
