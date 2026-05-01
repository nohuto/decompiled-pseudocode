/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___ @ 0x1801B507C
 * Callers:
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180546FC0 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180029F94 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_45076b0ac1163e7c92a74a613c702f64_::operator() @ 0x1801B5668 (_lambda_45076b0ac1163e7c92a74a613c702f64_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18054C988 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int (__fastcall *v6)(struct IApplicationView *, struct IUnknown **); // rbx
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *CurrentDesktopCollection; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown *v16; // [rsp+68h] [rbp+28h] BYREF

  v16 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  if ( v6(a2, &v16) < 0 )
  {
    updated = lambda_45076b0ac1163e7c92a74a613c702f64_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 965LL;
      goto LABEL_17;
    }
    CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, CurrentDesktopCollection);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 966LL;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)SHIsSameObject(v16, (struct IUnknown *)a2) )
  {
    updated = lambda_45076b0ac1163e7c92a74a613c702f64_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 952LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    v10 = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, v10);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 953LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(this, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 954LL;
      goto LABEL_17;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 14)
                                                                                              + 96LL))(
                *((_QWORD *)this + 14),
                a2,
                v16);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 959LL;
      goto LABEL_17;
    }
    v11 = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, v11);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 960LL;
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  return v8;
}
