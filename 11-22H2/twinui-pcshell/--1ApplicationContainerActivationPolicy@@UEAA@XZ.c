/*
 * XREFs of ??1ApplicationContainerActivationPolicy@@UEAA@XZ @ 0x18062F448
 * Callers:
 *     ??_GApplicationContainerActivationPolicy@@UEAAPEAXI@Z @ 0x18062F6B0 (--_GApplicationContainerActivationPolicy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall ApplicationContainerActivationPolicy::~ApplicationContainerActivationPolicy(
        ApplicationContainerActivationPolicy *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 20);
  std::wstring::_Tidy_deallocate((__int64)this + 128);
  *((_DWORD *)this + 25) = -1073741823;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
