/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopSwitchAnimator@@QEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1801126FC
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x18011242C (--$MakeAndInitialize@VVirtualDesktopSwitchAnimator@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerPrivate@@@Z @ 0x180112A38 (--4-$ComPtr@UIVirtualDesktopManagerPrivate@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManag.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopSwitchAnimator::RuntimeClassInitialize(
        VirtualDesktopSwitchAnimator *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopAnimationSyncNotificationServicePrivate *a3,
        struct IMultitaskingViewVisibilityService *a4)
{
  struct IVirtualDesktopAnimationSyncNotificationServicePrivate *v7; // rcx
  __int64 v8; // rdi

  Microsoft::WRL::ComPtr<IVirtualDesktopManagerPrivate>::operator=((char *)this + 40, a2);
  v7 = (struct IVirtualDesktopAnimationSyncNotificationServicePrivate *)*((_QWORD *)this + 6);
  if ( v7 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopAnimationSyncNotificationServicePrivate *))(*(_QWORD *)a3 + 8LL))(a3);
      v7 = (struct IVirtualDesktopAnimationSyncNotificationServicePrivate *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = a3;
    if ( v7 )
      (*(void (__fastcall **)(struct IVirtualDesktopAnimationSyncNotificationServicePrivate *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IMultitaskingViewVisibilityService *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
