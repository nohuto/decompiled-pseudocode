/*
 * XREFs of ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x180600BA0
 * Callers:
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z @ 0x1802A8750 (-CopyDesktopState@CVirtualDesktopManager@@WBA@EAAJPEAUIApplicationView@@0@Z.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@0@Z @ 0x1802A8770 (-CopyDesktopState@CVirtualDesktopManager@@WBI@EAAJPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18003A918 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003B554 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IApplicationView *))(**((_QWORD **)this + 14) + 96LL))(
              *((_QWORD *)this + 14),
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
    v8 = 878LL;
  }
  else
  {
    v8 = 877LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_7:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return v7;
}
