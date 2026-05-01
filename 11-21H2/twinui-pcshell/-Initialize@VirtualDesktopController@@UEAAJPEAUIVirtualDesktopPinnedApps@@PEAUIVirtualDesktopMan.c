/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@PEAUITabViewManager@@@Z @ 0x1800A2490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z @ 0x1800A255C (--4-$ComPtr@UITabViewManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUITabViewManager@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1800A258C (--4-$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x1800A25DC (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??4?$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedApps@@@Z @ 0x1800A2640 (--4-$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedApp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::Initialize(
        RTL_SRWLOCK *this,
        struct IVirtualDesktopPinnedApps *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        struct IVirtualDesktopDataSourceInternal *a5,
        struct ITabViewManager *a6)
{
  struct IVirtualDesktopDataSourceInternal *Ptr; // rax
  struct IVirtualDesktopDataSourceInternal *v11; // rbx
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, this + 12);
  Microsoft::WRL::ComPtr<IVirtualDesktopPinnedApps>::operator=(&this[10], a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=(&this[7], a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotificationService>::operator=(&this[8], a4);
  Ptr = (struct IVirtualDesktopDataSourceInternal *)this[9].Ptr;
  v11 = a5;
  if ( Ptr != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IVirtualDesktopDataSourceInternal *))(*(_QWORD *)a5 + 8LL))(a5);
      Ptr = (struct IVirtualDesktopDataSourceInternal *)this[9].Ptr;
    }
    a5 = Ptr;
    this[9].Ptr = v11;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a5);
  }
  Microsoft::WRL::ComPtr<ITabViewManager>::operator=(&this[11], a6);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return 0LL;
}
