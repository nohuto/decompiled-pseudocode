/*
 * XREFs of ??1LockScreenDirectorServiceProviderImpl@@EEAA@XZ @ 0x1801ADFB4
 * Callers:
 *     ??_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z @ 0x1801ADF78 (--_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::~LockScreenDirectorServiceProviderImpl(
        LockScreenDirectorServiceProviderImpl *this)
{
  char *v2; // rcx
  char *v3; // rcx

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  v2 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((LockScreenDirectorServiceProviderImpl *)((char *)this + 48));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((LockScreenDirectorServiceProviderImpl *)((char *)this + 8));
}
