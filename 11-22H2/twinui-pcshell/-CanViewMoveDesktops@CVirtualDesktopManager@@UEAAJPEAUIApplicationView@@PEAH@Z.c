/*
 * XREFs of ?CanViewMoveDesktops@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180600A30
 * Callers:
 *     ?CanViewMoveDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAH@Z @ 0x1802A8710 (-CanViewMoveDesktops@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?CanViewMoveDesktops@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAH@Z @ 0x1802A8730 (-CanViewMoveDesktops@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@PEAH@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CanViewMoveDesktops(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        int *a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  *a3 = (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 14) + 48LL))(
          *((_QWORD *)this + 14),
          a2);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
