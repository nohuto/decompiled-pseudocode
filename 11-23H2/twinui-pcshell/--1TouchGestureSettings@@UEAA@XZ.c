/*
 * XREFs of ??1TouchGestureSettings@@UEAA@XZ @ 0x1801B0FEC
 * Callers:
 *     ??_E?$heap_implements@VTouchGestureSettings@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801B0FB0 (--_E-$heap_implements@VTouchGestureSettings@@@impl@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall TouchGestureSettings::~TouchGestureSettings(
        TouchGestureSettings *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 13);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, a2);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 40,
    (__int64)a2);
  if ( *((_QWORD *)this + 3) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 3);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 8);
}
