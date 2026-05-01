/*
 * XREFs of ?MoveViewToDesktop@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546840
 * Callers:
 *     ?MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18020CA80 (-MoveViewToDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546990 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktop(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v7);
  LODWORD(a3) = CVirtualDesktopManager::MoveViewToDesktopInternal(this, a2, a3);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  return (unsigned int)a3;
}
