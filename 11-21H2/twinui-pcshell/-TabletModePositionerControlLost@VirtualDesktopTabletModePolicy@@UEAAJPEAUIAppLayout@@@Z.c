/*
 * XREFs of ?TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z @ 0x18054CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x18054D054 (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopTabletModePolicy::TabletModePositionerControlLost(
        VirtualDesktopTabletModePolicy *this,
        struct IAppLayout *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v8);
  if ( *((_DWORD *)this + 24) == 1
    && (*((_DWORD *)this + 24) = 0,
        v4 = VirtualDesktopTabletModePolicy::TransitionToDesktopMode(this, a2),
        v5 = v4,
        v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = 0;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return v5;
}
