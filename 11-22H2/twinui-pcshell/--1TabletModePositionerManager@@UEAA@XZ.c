/*
 * XREFs of ??1TabletModePositionerManager@@UEAA@XZ @ 0x1805B7294
 * Callers:
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1805B7558 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModePositionerManager::~TabletModePositionerManager(TabletModePositionerManager *this)
{
  char *v2; // rbx
  unsigned __int64 *v3; // rdi
  unsigned __int64 i; // rbp

  v2 = (char *)this + 176;
  SmartCookie::Unregister((TabletModePositionerManager *)((char *)this + 176));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((__int64)v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  v3 = (unsigned __int64 *)((char *)this + 136);
  if ( *((_QWORD *)this + 16) )
  {
    for ( i = 0LL; i < *v3; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 16) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  *v3 = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((TabletModePositionerManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
