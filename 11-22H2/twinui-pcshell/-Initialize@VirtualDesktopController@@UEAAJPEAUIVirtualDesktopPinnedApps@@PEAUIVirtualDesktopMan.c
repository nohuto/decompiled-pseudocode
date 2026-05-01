/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@PEAUIUnknown@@@Z @ 0x1801393B0
 * Callers:
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnknown@@@Z @ 0x180139470 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirt_ea_180139470.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18013A84C (--4-$ComPtr@UIVirtualDesktopManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopMana.c)
 *     ??4?$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedApps@@@Z @ 0x18013AA34 (--4-$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopPinnedApp.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotificationService@@@Z @ 0x18013AA84 (--4-$ComPtr@UIVirtualDesktopNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktop.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopController::Initialize(
        RTL_SRWLOCK *this,
        struct IVirtualDesktopPinnedApps *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        struct IVirtualDesktopDataSourceInternal *Ptr)
{
  struct IVirtualDesktopDataSourceInternal *v9; // rbx
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, this + 13);
  Microsoft::WRL::ComPtr<IVirtualDesktopPinnedApps>::operator=(&this[10], a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopManagerInternal>::operator=(&this[7], a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopNotificationService>::operator=(&this[8], a4);
  v9 = Ptr;
  if ( this[9].Ptr != Ptr )
  {
    if ( Ptr )
      (*(void (__fastcall **)(struct IVirtualDesktopDataSourceInternal *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    Ptr = (struct IVirtualDesktopDataSourceInternal *)this[9].Ptr;
    this[9].Ptr = v9;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&Ptr);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  return 0LL;
}
