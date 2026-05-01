/*
 * XREFs of ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1805F97D8
 * Callers:
 *     ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x1805F9B40 (--_EXamlAltTabViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1805F9780 (--1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall XamlAltTabViewHost::~XamlAltTabViewHost(XamlAltTabViewHost *this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 66);
  v2 = *((_QWORD *)this + 65);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 64);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  XamlSwitcherTelemetry::ShowAltTab::~ShowAltTab((XamlAltTabViewHost *)((char *)this + 184));
  if ( *((_QWORD *)this + 22) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((XamlAltTabViewHost *)((char *)this + 176));
  if ( *((_QWORD *)this + 21) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((XamlAltTabViewHost *)((char *)this + 168));
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((XamlAltTabViewHost *)((char *)this + 152));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 18);
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
