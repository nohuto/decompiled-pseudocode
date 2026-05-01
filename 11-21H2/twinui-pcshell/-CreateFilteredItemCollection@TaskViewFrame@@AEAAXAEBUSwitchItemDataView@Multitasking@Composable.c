/*
 * XREFs of ?CreateFilteredItemCollection@TaskViewFrame@@AEAAXAEBUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18000FD70
 * Callers:
 *     ?RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@W4ALL_UP_VIEW_FLAGS@@PEAUIImmersiveMonitor@@2AEBUIDesktopThumbnailDevice@Desktop@Multitasking@4567@AEBUSwitchItemDataView@Multitasking@ComposableShell@567@AEBUIVirtualDesktopDataSource@Multitasking@ComposableShell@567@AEBUIVirtualDesktopController@Multitasking@ComposableShell@567@PE$AAUIXamlMultitaskingViewController@@PE$AAUIXamlSwitcherWindowInteractionEvents@@@Z @ 0x180015E7C (-RuntimeClassInitialize@TaskViewFrame@@QEAAJAEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@.c)
 * Callees:
 *     ?CreateView@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@USwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUSwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@3@XZ @ 0x18000FC30 (-CreateView@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@USwitc.c)
 *     ??0?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@@Z @ 0x18000FCC8 (--0-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIImmersiveMonitor@@.c)
 *     ?EvaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@UIEvaluateItemEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18000FD04 (-EvaluateItem@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwit.c)
 *     _lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_ @ 0x18000FF2C (_lambda_e1408536c029d8c29a87d65e8f468219_--__lambda_e1408536c029d8c29a87d65e8f468219_.c)
 *     ??4?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180011204 (--4-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ??1?$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@QEAA@XZ @ 0x180011278 (--1-$event_revoker@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@$MP.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TaskViewFrame::CreateFilteredItemCollection(
        TaskViewFrame *this,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h] BYREF
  __int64 *v19; // [rsp+80h] [rbp+20h] BYREF

  v3 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView>::CreateView(
         (__int64 *)a2,
         &v19);
  winrt::Windows::Foundation::IUnknown::operator=((char *)this + 72, v3);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
    &v16,
    *((_QWORD *)this + 2));
  v17 = *((_QWORD *)this + 11);
  v4 = v17;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  v18 = *((_QWORD *)this + 12);
  v5 = v18;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>(
    &v13,
    v16);
  v14 = v4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  v15 = v5;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  v19 = &v13;
  v6 = operator new(0x28uLL);
  v7 = v13;
  v13 = 0LL;
  v6[1] = v7;
  v8 = v14;
  v14 = 0LL;
  v6[2] = v8;
  v9 = v15;
  v15 = 0LL;
  v6[3] = v9;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 8) = 1;
  *v6 = off_1807ABCC0;
  v19 = v6;
  lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_(&v13);
  v11 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::EvaluateItem(
          (_QWORD *)this + 9,
          (__int64)v12,
          v10,
          &v19);
  __4__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (char *)this + 152,
    v11);
  __1__event_revoker_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt___MP8type___abi_UISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__QEAA_XZ(v12);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  lambda_e1408536c029d8c29a87d65e8f468219_::__lambda_e1408536c029d8c29a87d65e8f468219_(&v16);
}
