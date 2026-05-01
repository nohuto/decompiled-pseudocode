/*
 * XREFs of ??1XamlAltTabViewHost@@UEAA@XZ @ 0x1802EC532
 * Callers:
 *     ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x180763110 (--_EXamlAltTabViewHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028978C (--1-$com_ptr_t@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returnco.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x180762CA8 (--1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

void __fastcall XamlAltTabViewHost::~XamlAltTabViewHost(XamlAltTabViewHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 64);
  v2 = *((_QWORD *)this + 63);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>,wil::err_returncode_policy>((void **)this + 62);
  XamlSwitcherTelemetry::ShowAltTab::~ShowAltTab((XamlAltTabViewHost *)((char *)this + 176));
  if ( *((_QWORD *)this + 21) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((XamlAltTabViewHost *)((char *)this + 168));
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *((_QWORD *)this + 19) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((XamlAltTabViewHost *)((char *)this + 152));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 18);
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_DWORD *)this + 33) = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)this);
}
