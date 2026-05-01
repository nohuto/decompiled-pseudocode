/*
 * XREFs of ?GetLastActiveDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180601B00
 * Callers:
 *     ?GetLastActiveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1802A8970 (-GetLastActiveDesktop@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18038D25C (--1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$copy_to@UIVirtualDesktop@@@?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVirtualDesktop@@@Z @ 0x1805FE704 (--$copy_to@UIVirtualDesktop@@@-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetLastActiveDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  unsigned int v4; // ebx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( a2 )
    *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &v6);
  if ( *((_QWORD *)this + 22) )
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::copy_to<IVirtualDesktop>((__int64 *)this + 22, a2);
  else
    v4 = -2147467259;
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(&v6);
  return v4;
}
