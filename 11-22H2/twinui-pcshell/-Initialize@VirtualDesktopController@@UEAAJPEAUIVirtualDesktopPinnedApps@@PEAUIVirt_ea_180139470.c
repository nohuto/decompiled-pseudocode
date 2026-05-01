/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIUnknown@@@Z @ 0x180139470
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@PEAUIUnknown@@@Z @ 0x1801393B0 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopMan.c)
 *     ??4?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@@Z @ 0x18013A8F4 (--4-$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@.c)
 */

__int64 __fastcall VirtualDesktopController::Initialize(
        RTL_SRWLOCK *a1,
        struct IVirtualDesktopPinnedApps *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        struct IVirtualDesktopDataSourceInternal *a5,
        _QWORD *a6)
{
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF

  VirtualDesktopController::Initialize(a1, a2, a3, a4, a5);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v8, a1 + 13);
  wil::com_ptr_t<Windows::Internal::Shell::IRemoteSessionWindowManager,wil::err_exception_policy>::operator=(
    &a1[14],
    *a6);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return 0LL;
}
