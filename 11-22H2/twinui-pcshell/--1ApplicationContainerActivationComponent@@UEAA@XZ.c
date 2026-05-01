/*
 * XREFs of ??1ApplicationContainerActivationComponent@@UEAA@XZ @ 0x18062F3E8
 * Callers:
 *     ??_EApplicationContainerActivationComponent@@UEAAPEAXI@Z @ 0x18062F66C (--_EApplicationContainerActivationComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801026C4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall ApplicationContainerActivationComponent::~ApplicationContainerActivationComponent(
        ApplicationContainerActivationComponent *this)
{
  DWORD v2; // ecx

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 21);
  v2 = *((_DWORD *)this + 40);
  if ( v2 )
    CoRevokeClassObject(v2);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((ApplicationContainerActivationComponent *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
