/*
 * XREFs of ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1806022C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18003A918 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003A960 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003B554 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveViewToDesktopNoGroupPropagateInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  int updated; // ebx
  __int64 v6; // rdx
  CVirtualDesktopManager *v7; // rdi
  _QWORD *CurrentDesktopCollection; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 40LL))(
              *((_QWORD *)this + 14),
              a2,
              a3);
  if ( updated < 0 )
  {
    v6 = 252LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v7 = (CVirtualDesktopManager *)((char *)this - 8);
  CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)v7, v10);
  updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)v7, (__int64)a2, CurrentDesktopCollection);
  if ( updated < 0 )
  {
    v6 = 253LL;
    goto LABEL_7;
  }
  updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(v7, a2);
  if ( updated < 0 )
  {
    v6 = 254LL;
    goto LABEL_7;
  }
  return (unsigned int)updated;
}
