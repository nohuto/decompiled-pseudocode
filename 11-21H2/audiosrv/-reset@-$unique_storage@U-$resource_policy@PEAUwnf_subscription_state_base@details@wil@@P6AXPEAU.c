/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1800128C0
 * Callers:
 *     ??_ECAudioStream@@UEAAPEAXI@Z @ 0x180012910 (--_ECAudioStream@@UEAAPEAXI@Z.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ @ 0x1800E5954 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@IEAAJXZ.c)
 *     ?RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180105D2C (-RegisterForLoopbackEndpointChangeNotifications@CAecAttributes@@QEAAJAEAVWeakRef@WRL@Microsoft@@.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x180156110 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180156960 (-StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x1801569F4 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800E5F74 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v4; // rsi
  DWORD LastError; // ebx
  struct wil::details::wnf_subscription_state_base *v6; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::delete_wnf_subscription_state(v4, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
