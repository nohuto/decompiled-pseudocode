/*
 * XREFs of ??1CMMNotificationDelegator@@UEAA@XZ @ 0x1801051FC
 * Callers:
 *     ??_GCMMNotificationDelegator@@UEAAPEAXI@Z @ 0x180105340 (--_GCMMNotificationDelegator@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMMNotificationDelegator::~CMMNotificationDelegator(CMMNotificationDelegator *this)
{
  *(_QWORD *)this = &CMMNotificationDelegator::`vftable';
  *((_QWORD *)this + 1) = &CMMNotificationDelegator::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &CMMNotificationDelegator::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)g_DeviceEnumerator + 56LL))(g_DeviceEnumerator);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>((__int64)this);
}
