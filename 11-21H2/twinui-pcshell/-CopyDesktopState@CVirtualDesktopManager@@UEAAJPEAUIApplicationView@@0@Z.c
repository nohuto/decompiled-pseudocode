/*
 * XREFs of ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x180544E70
 * Callers:
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z @ 0x18020C940 (-CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::CopyDesktopState(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IApplicationView *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _QWORD *CurrentDesktopCollection; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19), &v13);
  updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 13) + 96LL))(
              *((_QWORD *)this + 13),
              a2,
              a3);
  v7 = updated;
  if ( updated >= 0 )
  {
    CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this - 8, v11);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this - 8, (__int64)a2, CurrentDesktopCollection);
    v7 = updated;
    if ( updated >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 699LL;
  }
  else
  {
    v8 = 698LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return v7;
}
