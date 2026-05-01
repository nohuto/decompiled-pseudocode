/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1801764EC
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x1801F6790 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800EF978 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=6
RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::`vector deleting destructor'(
        RemoteLauncherForegroundHandler *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((RemoteLauncherForegroundHandler *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
