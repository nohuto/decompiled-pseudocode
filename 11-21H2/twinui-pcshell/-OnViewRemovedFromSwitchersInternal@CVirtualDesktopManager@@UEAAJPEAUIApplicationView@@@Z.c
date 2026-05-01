/*
 * XREFs of ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180029E10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewRemovedFromSwitchersInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int updated; // ebx
  __int64 CurrentDesktopCollection; // rax
  __int64 v7; // rdx
  int v8[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
  if ( updated < 0 )
  {
    v7 = 1118LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated,
      v8[0]);
    return (unsigned int)updated;
  }
  CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((char *)this - 8, v8);
  updated = CVirtualDesktopManager::UpdateViewVisibility((char *)this - 8, a2, CurrentDesktopCollection);
  if ( updated < 0 )
  {
    v7 = 1119LL;
    goto LABEL_6;
  }
  return (unsigned int)updated;
}
