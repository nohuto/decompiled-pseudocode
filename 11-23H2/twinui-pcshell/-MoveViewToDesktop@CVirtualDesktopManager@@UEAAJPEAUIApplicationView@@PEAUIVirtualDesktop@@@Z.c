/*
 * XREFs of ?MoveViewToDesktop@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A680
 * Callers:
 *     ?MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1802A89D0 (-MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?MoveViewToDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1802A89F0 (-MoveViewToDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A700 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktop(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  char v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v7);
  LODWORD(a3) = CVirtualDesktopManager::MoveViewToDesktopInternal(this, a2, a3);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v7);
  return (unsigned int)a3;
}
