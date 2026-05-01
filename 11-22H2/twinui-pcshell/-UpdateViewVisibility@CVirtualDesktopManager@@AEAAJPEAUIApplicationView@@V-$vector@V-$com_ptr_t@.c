/*
 * XREFs of ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003B554
 * Callers:
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18003A888 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003A960 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_39dd6a772f697446fffa4b3e918b8dc3___ @ 0x180214D58 (CVirtualDesktopManager--_OnViewAdded__lambda_39dd6a772f697446fffa4b3e918b8dc3___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___ @ 0x180214EF8 (CVirtualDesktopManager--_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x180600BA0 (-CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1806022C0 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180602370 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180602900 (-OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1806029A0 (-PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602EA0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180607450 (-ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18004F3E0 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180163F10 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::UpdateViewVisibility(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v6; // bp
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  int CurrentDesktopInternal; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp+18h]
  struct IVirtualDesktop *v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = a3;
  v6 = 0;
  v7 = (_QWORD *)*a3;
  v8 = (_QWORD *)a3[1];
  while ( v7 != v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 120) + 24LL))(
           *(_QWORD *)(a1 + 120),
           a2,
           *v7) )
    {
      v6 = 1;
      break;
    }
    ++v7;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, 2LL, v6 ^ 1u);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x523,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v9,
      v15);
    goto LABEL_10;
  }
  v19 = 0LL;
  if ( v6 )
  {
    CurrentDesktopInternal = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 336LL))(a2, &v17);
    v12 = retaddr;
    if ( CurrentDesktopInternal < 0 )
    {
      v14 = 1325LL;
    }
    else
    {
      if ( !v17 )
        goto LABEL_9;
      v19 = 0LL;
      CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                                 (CVirtualDesktopManager *)(a1 + 8),
                                 &v19);
      v12 = retaddr;
      if ( CurrentDesktopInternal >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**(_QWORD **)(a1 + 120) + 104LL))(
          *(_QWORD *)(a1 + 120),
          a2,
          v19);
        goto LABEL_9;
      }
      v14 = 1326LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v12,
      (void *)v14,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal,
      v15);
  }
LABEL_9:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  v10 = 0;
LABEL_10:
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a3);
  return v10;
}
