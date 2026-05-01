/*
 * XREFs of ?RemoveDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1805476A0
 * Callers:
 *     ?RemoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@0@Z @ 0x18020CC60 (-RemoveDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::RemoveDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v10);
  v6 = CVirtualDesktopManager::RemoveDesktopInternal(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x249,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  return v7;
}
