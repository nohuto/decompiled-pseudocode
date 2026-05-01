/*
 * XREFs of ?Show@VirtualDesktopSwitcherHost@@UEAAJPEAUIImmersiveMonitor@@W4VIRTUAL_DESKTOP_SWITCHER_INVOKE_DETAILS@@@Z @ 0x180775F00
 * Callers:
 *     <none>
 * Callees:
 *     ?TryActivate@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800722B4 (-TryActivate@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExp.c)
 *     ??4?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMonitor@@@Z @ 0x18007B6BC (--4-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIImmersiveMon.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18028B59C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyT.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B718 (--1-$test_data_control@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028B750 (--1-$test_watcher@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@@1@XZ @ 0x18028B78C (--C-$tip_test@V-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@de.c)
 *     ?Release@?$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@tip2@@AEAAKXZ @ 0x18028BAFC (-Release@-$merged_data@U_tip_VirtualDesktopSwitcherShowReliabiltyTest@SwitcherTip@@U12@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180775A6C (-RegisterKeyboardHook@VirtualDesktopSwitcherHost@@AEAAXXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x180777334 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@IEAAJPEAU.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopSwitcherHost::Show(__int64 a1, __int64 a2, int a3)
{
  VirtualDesktopSwitcherHost *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  int v8; // eax
  const char *v9; // r9
  int v10; // r14d
  __int64 result; // rax
  VirtualDesktopSwitcherHost *v12; // rbx
  struct wil::details::IFailureCallback *v13; // rax
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rax
  int v16; // eax
  int Xaml; // eax
  __int64 v18; // rdx
  int v19; // [rsp+28h] [rbp-80h]
  _BYTE v20[64]; // [rsp+40h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 *v22; // [rsp+B0h] [rbp+8h] BYREF
  void *v23; // [rsp+C8h] [rbp+20h] BYREF

  v6 = (VirtualDesktopSwitcherHost *)(a1 - 8);
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 8));
  try
  {
    v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
    v10 = v8;
    v19 = v8;
    if ( *(_DWORD *)(a1 + 520) == 1 )
    {
      if ( v8 >= 0 )
        LeaveCriticalSection(v7);
      result = 0LL;
    }
    else
    {
      v12 = v6;
      if ( *(_BYTE *)(a1 + 112) )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)a2 + 96LL))(a2, *(_QWORD *)(a1 + 192), &v22);
        if ( (_DWORD)v22 && (a3 & 2) != 0 )
        {
          winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::TryActivate((_QWORD *)(a1 + 216));
          *(_DWORD *)(a1 + 504) = a3;
        }
        if ( v10 >= 0 )
          LeaveCriticalSection(v7);
        result = 0LL;
      }
      else
      {
        v13 = tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>>((struct wil::details::IFailureCallback *)v20);
        v22 = (__int64 *)(a1 + 176);
        v14 = *((_QWORD *)v13 + 6);
        v15 = *(volatile signed __int32 **)(a1 + 176);
        *(_QWORD *)(a1 + 176) = v14;
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 272));
          v10 = v19;
          v12 = v6;
        }
        if ( v15 )
          tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>::Release(v15);
        tip2::test_watcher<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::~test_watcher<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>((__int64)v20);
        wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::operator=((__int64 *)(a1 + 192), a2);
        v16 = CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>::_RegisterForMonitorEvents(
                a1,
                *(_QWORD *)(a1 + 184));
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xF6,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
            (const char *)(unsigned int)v16,
            (int)v7);
        Xaml = VirtualDesktopSwitcherHost::CreateXaml(v6, *(struct IImmersiveMonitor **)(a1 + 192));
        if ( Xaml >= 0 )
        {
          if ( *(_QWORD *)(a1 + 216) )
          {
            *(_DWORD *)(a1 + 504) = a3;
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
              *(_QWORD *)(a1 + 88),
              *(unsigned int *)(a1 + 72));
            *(_BYTE *)(a1 + 112) = 1;
            VirtualDesktopSwitcherHost::RegisterKeyboardHook(v6);
            v18 = *tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::operator->(
                     (__int64)v22,
                     (__int64 *)&v23);
            *(_BYTE *)(v18 + 264) = 1;
            tip2::test_data_control<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>::~test_data_control<tip2::details::merged_data<SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest,SwitcherTip::_tip_VirtualDesktopSwitcherShowReliabiltyTest>>(
              &v23,
              v18);
            tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete(v22);
            if ( v10 >= 0 )
              LeaveCriticalSection(v7);
            result = 0LL;
          }
          else
          {
            (*(void (__fastcall **)(__int64))(*((_QWORD *)v12 + 1) + 40LL))((__int64)v12 + 8);
            if ( v10 >= 0 )
              LeaveCriticalSection(v7);
            result = 0LL;
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF8,
            (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
            (const char *)(unsigned int)Xaml);
          tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete(v22);
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v12 + 1) + 40LL))((__int64)v12 + 8);
          if ( v10 >= 0 )
            LeaveCriticalSection(v7);
          result = 0LL;
        }
      }
    }
  }
  catch ( ... )
  {
    LODWORD(v22) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x10E,
                     (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\virtualdesktopswitcherhost.cpp",
                     v9);
    return (unsigned int)v22;
  }
  return result;
}
