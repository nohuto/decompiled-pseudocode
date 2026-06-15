/*
 * XREFs of ??1CEndpointNotificationDelegator@@UEAA@XZ @ 0x1801048F4
 * Callers:
 *     ??_GCEndpointNotificationDelegator@@UEAAPEAXI@Z @ 0x180105460 (--_GCEndpointNotificationDelegator@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EE73C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall CEndpointNotificationDelegator::~CEndpointNotificationDelegator(CEndpointNotificationDelegator *this)
{
  struct wil::details::wnf_subscription_state_base *v2; // rdx
  wil::details *v3; // rcx

  *(_QWORD *)this = &CEndpointNotificationDelegator::`vftable';
  *((_QWORD *)this + 1) = &CEndpointNotificationDelegator::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CEndpointNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  ((void (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD))g_DeviceEnumerator->lpVtbl->UnregisterEndpointNotificationCallback)(
    g_DeviceEnumerator,
    ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  v3 = (wil::details *)*((_QWORD *)this + 7);
  if ( v3 )
    wil::details::delete_wnf_subscription_state(v3, v2);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>((__int64)this);
}
