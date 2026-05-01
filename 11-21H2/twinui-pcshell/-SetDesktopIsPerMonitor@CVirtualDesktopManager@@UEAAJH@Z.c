/*
 * XREFs of ?SetDesktopIsPerMonitor@CVirtualDesktopManager@@UEAAJH@Z @ 0x180547F80
 * Callers:
 *     ?SetDesktopIsPerMonitor@CVirtualDesktopManager@@WBA@EAAJH@Z @ 0x18020CC80 (-SetDesktopIsPerMonitor@CVirtualDesktopManager@@WBA@EAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ @ 0x1800A0180 (-IsVirtualDesktopPerMonitor@CVirtualDesktopManager@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::SetDesktopIsPerMonitor(CVirtualDesktopManager *this, int a2)
{
  CVirtualDesktopManager *v4; // rcx
  bool IsVirtualDesktopPerMonitor; // si
  const struct Microsoft::WRL::Wrappers::Details::SyncLockExclusive *v6; // rdx
  CVirtualDesktopManager *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v13);
  IsVirtualDesktopPerMonitor = CVirtualDesktopManager::IsVirtualDesktopPerMonitor(v4);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 104LL))(*((_QWORD *)this + 16));
  v7 = (CVirtualDesktopManager *)((char *)this - 8);
  if ( !a2 )
  {
    if ( IsVirtualDesktopPerMonitor )
    {
      v8 = CVirtualDesktopManager::TransitionToGlobalMode(v7, v6);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 741LL;
        goto LABEL_8;
      }
    }
LABEL_9:
    v9 = 0;
    goto LABEL_10;
  }
  if ( IsVirtualDesktopPerMonitor )
    goto LABEL_9;
  v8 = CVirtualDesktopManager::TransitionToPerMonitorMode(v7, v6);
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_9;
  v10 = 737LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  (*(void (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 17) + 112LL))(*((_QWORD **)v7 + 17));
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return v9;
}
