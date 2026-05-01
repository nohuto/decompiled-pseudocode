/*
 * XREFs of ?MoveViewInHighZOrderBandToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546750
 * Callers:
 *     ?OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180547020 (-OnViewMonitorChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18054C988 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopManager::MoveViewInHighZOrderBandToDesktop(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        struct IVirtualDesktop *a3)
{
  __int64 v5; // rax
  _QWORD *CurrentDesktopCollection; // rax
  int updated; // ebx
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+28h] [rbp-50h] BYREF
  GUID v11; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11 = GUID_NULL;
  if ( a3 && (*(int (__fastcall **)(struct IVirtualDesktop *, GUID *))(*(_QWORD *)a3 + 32LL))(a3, &v11) >= 0 )
  {
    v5 = *(_QWORD *)&v11.Data1 - 0x4658059A45DB96FFLL;
    if ( *(_QWORD *)&v11.Data1 == 0x4658059A45DB96FFLL )
      v5 = *(_QWORD *)v11.Data4 - 0x1012647F7CCD4687LL;
    if ( v5 )
    {
      CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v10);
      updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, CurrentDesktopCollection);
      if ( updated < 0 )
      {
        v8 = 265LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)updated);
        return (unsigned int)updated;
      }
      updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(this, a2);
      if ( updated < 0 )
      {
        v8 = 266LL;
        goto LABEL_8;
      }
    }
  }
  return 0LL;
}
