/*
 * XREFs of ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x180029E8C
 * Callers:
 *     ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180029E10 (-OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___ @ 0x1801B507C (CVirtualDesktopManager--_OnViewAdded__lambda_45076b0ac1163e7c92a74a613c702f64___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___ @ 0x1801B521C (CVirtualDesktopManager--_OnViewAdded__lambda_452398a9c9150a8650d8808a41b7c76c___.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x180544E70 (-CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z.c)
 *     ?MoveViewInHighZOrderBandToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546750 (-MoveViewInHighZOrderBandToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtu.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180546A80 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180546B30 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1805472F0 (-PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180547810 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18054ACB0 (-SwitchDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@PEAUIVirtualDesktop@@22PEAPEAU5@@Z @ 0x18054BC7C (-TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV-$unordered_map@PEAUH.c)
 *     ?ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18054C4E0 (-ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x18054C8E0 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18054C988 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180037D08 (-_Tidy@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::UpdateViewVisibility(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v6; // bp
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  int v9; // eax
  struct IApplicationView *v10; // rdx
  VirtualDesktopHelpers *v11; // rcx
  unsigned int v12; // ebx
  HMONITOR MonitorFromApplicationView; // rbx
  int CurrentDesktopInternal; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v20; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp+18h]
  struct IVirtualDesktop *v22; // [rsp+68h] [rbp+20h] BYREF

  v21 = a3;
  v6 = 0;
  v7 = (_QWORD *)*a3;
  v8 = (_QWORD *)a3[1];
  while ( v7 != v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 112) + 24LL))(
           *(_QWORD *)(a1 + 112),
           a2,
           *v7) )
    {
      v6 = 1;
      break;
    }
    ++v7;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, 2LL, v6 ^ 1u);
  v12 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D7,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v9,
      v18);
    goto LABEL_10;
  }
  v22 = 0LL;
  MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v11, v10);
  if ( v6 )
  {
    CurrentDesktopInternal = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 336LL))(a2, &v20);
    v15 = retaddr;
    if ( CurrentDesktopInternal < 0 )
    {
      v17 = 1251LL;
    }
    else
    {
      if ( !v20 )
        goto LABEL_9;
      v22 = 0LL;
      CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                                 (CVirtualDesktopManager *)(a1 + 8),
                                 MonitorFromApplicationView,
                                 &v22);
      v15 = retaddr;
      if ( CurrentDesktopInternal >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**(_QWORD **)(a1 + 112) + 104LL))(
          *(_QWORD *)(a1 + 112),
          a2,
          v22);
        goto LABEL_9;
      }
      v17 = 1252LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v15,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal,
      v18);
  }
LABEL_9:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
  v12 = 0;
LABEL_10:
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy(a3);
  return v12;
}
