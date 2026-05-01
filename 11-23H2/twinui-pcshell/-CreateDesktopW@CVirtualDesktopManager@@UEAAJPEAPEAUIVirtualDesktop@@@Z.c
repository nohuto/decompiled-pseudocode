/*
 * XREFs of ?CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180600E30
 * Callers:
 *     ?CreateDesktopW@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1802A8790 (-CreateDesktopW@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?CreateDesktopW@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1802A87B0 (-CreateDesktopW@CVirtualDesktopManager@@WBI@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180600C80 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CreateDesktopW(CVirtualDesktopManager *this, struct IVirtualDesktop **a2)
{
  int DesktopInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v8);
  DesktopInternal = CVirtualDesktopManager::CreateDesktopInternal(this, a2);
  v5 = DesktopInternal;
  if ( DesktopInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)DesktopInternal);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return v5;
}
