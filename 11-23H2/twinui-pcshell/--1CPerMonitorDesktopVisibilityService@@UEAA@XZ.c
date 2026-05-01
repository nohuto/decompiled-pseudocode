/*
 * XREFs of ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x1801AEEC4
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x1801AEE88 (--_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B7F64 (-InternalRelease@-$ComPtr@UIFullScreenPositioner@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(
        CPerMonitorDesktopVisibilityService *this)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rbp

  Microsoft::WRL::ComPtr<IFullScreenPositioner>::InternalRelease((char *)this + 232);
  v2 = (unsigned __int64 *)((char *)this + 184);
  if ( *((_QWORD *)this + 22) )
  {
    for ( i = 0LL; i < *v2; ++i )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(*((_QWORD *)this + 22) + 8 * i));
    CoTaskMemFree(*((LPVOID *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  *v2 = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((CPerMonitorDesktopVisibilityService *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
