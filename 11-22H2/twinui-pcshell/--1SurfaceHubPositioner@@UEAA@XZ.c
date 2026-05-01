/*
 * XREFs of ??1SurfaceHubPositioner@@UEAA@XZ @ 0x18014334C
 * Callers:
 *     ??_ESurfaceHubPositioner@@UEAAPEAXI@Z @ 0x1801BE32C (--_ESurfaceHubPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SurfaceHubPositioner::~SurfaceHubPositioner(SurfaceHubPositioner *this)
{
  char *v2; // rbx

  v2 = (char *)this + 448;
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 448));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>(v2);
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 320));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 320);
  SmartCookie::Unregister((SurfaceHubPositioner *)((char *)this + 192));
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 192);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 37) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((SurfaceHubPositioner *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
