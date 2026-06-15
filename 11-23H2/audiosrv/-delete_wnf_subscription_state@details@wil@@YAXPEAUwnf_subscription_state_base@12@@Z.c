/*
 * XREFs of ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE73C
 * Callers:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x180016988 (--1CAudioStream@@UEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EB304 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ?SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ @ 0x1800EE050 (-SetUpAudioEffectsWatcher@CAudioStream@@AEAAJXZ.c)
 *     ??1CEndpointNotificationDelegator@@UEAA@XZ @ 0x1801048F4 (--1CEndpointNotificationDelegator@@UEAA@XZ.c)
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ @ 0x18010A370 (-SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18015A088 (--1AtmosCheck@@UEAA@XZ.c)
 *     ?RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ @ 0x18015D120 (-RegisterForShellReadyNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::delete_wnf_subscription_state(
        wil::details *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  if ( this )
    (**(void (__fastcall ***)(wil::details *, __int64))this)(this, 1LL);
}
