/*
 * XREFs of ??1TabletModePositionerManager@@UEAA@XZ @ 0x1804FEAF8
 * Callers:
 *     ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1804FEDB8 (--_GTabletModePositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModePositionerManager::~TabletModePositionerManager(TabletModePositionerManager *this)
{
  char *v2; // rbx
  void *v3; // rcx
  unsigned __int64 v4; // rsi

  v2 = (char *)this + 176;
  SmartCookie::Unregister((TabletModePositionerManager *)((char *)this + 176));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)v2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  v3 = (void *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_QWORD *)this + 17) )
    {
      do
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 16) + 8 * v4++));
      while ( v4 < *((_QWORD *)this + 17) );
      v3 = (void *)*((_QWORD *)this + 16);
    }
    CoTaskMemFree(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 14);
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((TabletModePositionerManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
