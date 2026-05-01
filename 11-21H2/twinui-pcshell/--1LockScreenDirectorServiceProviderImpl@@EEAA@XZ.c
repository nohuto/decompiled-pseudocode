/*
 * XREFs of ??1LockScreenDirectorServiceProviderImpl@@EEAA@XZ @ 0x180105DC8
 * Callers:
 *     ??_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z @ 0x180180900 (--_ELockScreenDirectorServiceProviderImpl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

void __fastcall LockScreenDirectorServiceProviderImpl::~LockScreenDirectorServiceProviderImpl(
        LockScreenDirectorServiceProviderImpl *this)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 19);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 136);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 128);
  *((_DWORD *)this + 31) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((LockScreenDirectorServiceProviderImpl *)((char *)this + 48));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((LockScreenDirectorServiceProviderImpl *)((char *)this + 8));
}
