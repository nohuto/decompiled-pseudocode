/*
 * XREFs of ?SwitchDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180605FD0
 * Callers:
 *     ?SwitchDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z @ 0x1802A8CD0 (-SwitchDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z @ 0x1802A8CF0 (-SwitchDesktop@CVirtualDesktopManager@@WBI@EAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1806068E0 (-SwitchDesktopWithAnimation@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::SwitchDesktop(CVirtualDesktopManager *this, struct IVirtualDesktop *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v8);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IVirtualDesktop *))(**((_QWORD **)this + 12) + 32LL))(
         *((_QWORD *)this + 12),
         a2) )
  {
    v5 = CVirtualDesktopManager::SwitchDesktopInternalPrivate((char *)this - 8, a2, 0LL);
    v4 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v5);
  }
  else
  {
    v4 = -2147024809;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return v4;
}
