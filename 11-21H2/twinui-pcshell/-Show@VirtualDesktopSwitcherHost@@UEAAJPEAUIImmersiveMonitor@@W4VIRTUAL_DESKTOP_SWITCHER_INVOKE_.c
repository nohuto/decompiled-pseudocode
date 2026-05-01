/*
 * XREFs of ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x18060B720
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitor@@@Z @ 0x180015F8C (--4-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMon.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?complete@?$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ @ 0x180016F30 (-complete@-$tip_test@U_tip_TaskViewShowTest@@@tip@@QEAAXXZ.c)
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBAXXZ @ 0x180042AE4 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1802E01E8 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@0@XZ @ 0x180607418 (--$start_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@@tip.c)
 *     wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___ @ 0x180607C90 (wil--details--ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___--_ScopeExitFn__lambda_92a9.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060B36C (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x18060C9E8 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@IEAAJPEAU.c)
 *     ?ensure_data@?$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@details@tip@@@std@@XZ @ 0x18060CAD4 (-ensure_data@-$tip_test@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@@@tip@@AEBAAEAV-$shared_p.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopSwitcherHost::Show(__int64 a1, __int64 a2, int a3)
{
  VirtualDesktopSwitcherHost *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  struct wil::details::IFailureCallback *v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19[2]; // [rsp+20h] [rbp-88h] BYREF
  char v20; // [rsp+28h] [rbp-80h]
  LPCRITICAL_SECTION v21; // [rsp+30h] [rbp-78h] BYREF
  int v22; // [rsp+38h] [rbp-70h]
  __int64 v23; // [rsp+40h] [rbp-68h] BYREF
  std::_Ref_count_base *v24; // [rsp+48h] [rbp-60h]
  _BYTE v25[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-50h] BYREF
  int v27; // [rsp+70h] [rbp-38h]
  std::_Ref_count_base *v28; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v30; // [rsp+B0h] [rbp+8h] BYREF

  v6 = (VirtualDesktopSwitcherHost *)(a1 - 8);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 8));
  v21 = v7;
  try
  {
    v22 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
    if ( *(_DWORD *)(a1 + 496) == 1 )
    {
      CThreadUseDetector::~CThreadUseDetector(&v21);
      result = 0LL;
    }
    else
    {
      *(_QWORD *)v19 = v6;
      v20 = 1;
      if ( *(_BYTE *)(a1 + 112) )
      {
        (*(void (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a2 + 96LL))(a2, *(_QWORD *)(a1 + 208), &v30);
        if ( v30 && (a3 & 2) != 0 )
        {
          winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate((_QWORD *)(a1 + 224));
          *(_DWORD *)(a1 + 480) = a3;
        }
        v20 = 0;
        wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___(v19);
        CThreadUseDetector::~CThreadUseDetector(&v21);
        result = 0LL;
      }
      else
      {
        v10 = tip::start_and_watch_errors<tip::tip_test<_tip_VirtualDesktopSwitcherShowReliabiltyTest>>((struct wil::details::IFailureCallback *)v25);
        v11 = (__int64 *)(a1 + 184);
        v12 = std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
                &v23,
                (_QWORD *)v10 + 6);
        v13 = *v12;
        *v12 = *(_QWORD *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = v13;
        v14 = v12[1];
        v12[1] = *(_QWORD *)(a1 + 192);
        *(_QWORD *)(a1 + 192) = v14;
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        if ( v28 )
          std::_Ref_count_base::_Decref(v28);
        if ( v27 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
        wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::operator=((__int64 *)(a1 + 208), a2);
        v15 = CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>::_RegisterForMonitorEvents(
                a1,
                *(_QWORD *)(a1 + 200));
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xFC,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
            (const char *)(unsigned int)v15,
            v19[0]);
        VirtualDesktopSwitcherHost::CreateXaml(v6, *(struct IImmersiveMonitor **)(a1 + 208));
        if ( *(_QWORD *)(a1 + 224) )
        {
          *(_DWORD *)(a1 + 480) = a3;
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
            *(_QWORD *)(a1 + 88),
            *(unsigned int *)(a1 + 72));
          *(_BYTE *)(a1 + 112) = 1;
          VirtualDesktopSwitcherHost::RegisterKeyboardHook(v6);
          v16 = (_QWORD *)tip::tip_test<_tip_VirtualDesktopSwitcherShowReliabiltyTest>::ensure_data(a1 + 184);
          std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
            &v23,
            v16);
          v17 = v23;
          tip::details::test_common_data<0>::begin_update(v23 + 8);
          v18 = v17 + 152;
          if ( !v17 )
            v18 = 8LL;
          *(_BYTE *)v18 = 1;
          if ( v17 )
          {
            tip::details::test_common_data<0>::end_update(v17 + 8);
            std::shared_ptr<PeoplePaneViewInfo>::reset(&v23);
          }
          if ( v24 )
            std::_Ref_count_base::_Decref(v24);
          tip::tip_test<_tip_TaskViewShowTest>::complete(v11);
          v20 = 0;
          wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___(v19);
          CThreadUseDetector::~CThreadUseDetector(&v21);
          result = 0LL;
        }
        else
        {
          wil::details::ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___::_ScopeExitFn__lambda_92a9be5246f827a40e0744a670073799___(v19);
          CThreadUseDetector::~CThreadUseDetector(&v21);
          result = 0LL;
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                           v8);
  }
  return result;
}
