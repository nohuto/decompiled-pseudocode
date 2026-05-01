/*
 * XREFs of ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003A960
 * Callers:
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A888 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_39dd6a772f697446fffa4b3e918b8dc3___ @ 0x180214D58 (CVirtualDesktopManager--_OnViewAdded__lambda_39dd6a772f697446fffa4b3e918b8dc3___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___ @ 0x180214EF8 (CVirtualDesktopManager--_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1806022C0 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180602370 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180607370 (-ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18003A918 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003B554 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  unsigned int v4; // edi
  int (__fastcall *v5)(struct IApplicationView *, __int64 *); // rbx
  __int64 v7; // rbx
  int updated; // eax
  int v9; // esi
  _QWORD *CurrentDesktopCollection; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+20h] [rbp-60h] BYREF
  int v13; // [rsp+28h] [rbp-58h]
  int v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v16; // [rsp+40h] [rbp-40h]
  int v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-28h]
  __int64 v20[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v22; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v23; // [rsp+C0h] [rbp+40h] BYREF

  v4 = 0;
  v22 = 0LL;
  v5 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 368LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  if ( v5(a2, &v22) >= 0 )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      &v12,
      v22);
    v14 = 0;
    v15 = 0LL;
    v16 = &v12;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v14);
    v17 = v13;
    v18 = 0LL;
    v19 = &v12;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v17);
    while ( 1 )
    {
      if ( v14 == v17 && v16 == v19 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        goto LABEL_2;
      }
      v7 = v15;
      v23 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
      updated = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *))(**((_QWORD **)this + 15) + 96LL))(
                  *((_QWORD *)this + 15),
                  v7,
                  a2);
      v9 = updated;
      if ( updated < 0 )
        break;
      CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v20);
      updated = CVirtualDesktopManager::UpdateViewVisibility(this, v7, CurrentDesktopCollection);
      v9 = updated;
      if ( updated < 0 )
      {
        v11 = 499LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
      ++v14;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v14);
    }
    v11 = 498LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated,
      v12);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    v4 = v9;
  }
LABEL_2:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  return v4;
}
