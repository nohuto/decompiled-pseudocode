/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8
 * Callers:
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800EE0A0 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ @ 0x18010A3C0 (-SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D170 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18015D9F0 (-StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC58 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE78C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        wil::details **a1,
        wil::details *a2)
{
  wil::details *v2; // rsi
  DWORD LastError; // ebx
  struct wil::details::wnf_subscription_state_base *v6; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::delete_wnf_subscription_state(v2, v6);
    SetLastError(LastError);
  }
  *a1 = a2;
}
