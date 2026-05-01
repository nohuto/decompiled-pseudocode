/*
 * XREFs of ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x18078BA30
 * Callers:
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x18078B798 (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 * Callees:
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180035110 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?EvaluateItem@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@winrt@@UIEvaluateItemEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800796F0 (-EvaluateItem@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDa_ea_1800796F0.c)
 *     ?SwitchItems@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007AB58 (-SwitchItems@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwi.c)
 *     ?CreateView@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007CD7C (-CreateView@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwit.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___ @ 0x18078AA78 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--ComposableS_ea_18078AA78.c)
 *     ??0?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18078AF1C (--0-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@UISwi.c)
 *     ?_Tidy@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18078C164 (-_Tidy@-$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall SnapAssistState::MakeFilteredDataSource(
        _QWORD *a1,
        _QWORD *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // rbx
  signed int v7; // eax
  __int64 *v8; // rax
  bool v9; // bl
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  winrt::Windows::Foundation::IUnknown *v12[3]; // [rsp+30h] [rbp-30h] BYREF
  winrt::Windows::Foundation::IUnknown *v13[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  void *v15; // [rsp+88h] [rbp+28h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp+38h] BYREF

  v15 = a2;
  *a2 = 0LL;
  if ( *a1 == a1[1] )
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)a2, a3);
  }
  else
  {
    std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
      v13,
      a1);
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>::CreateView(
      (__int64 *)a3,
      &v16);
    v6 = v16;
    v7 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, void *, __int64 *), _QWORD))(*v16)[7])(v16, 0LL);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
      v12,
      v13);
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_4bd855e1dd94d2f8892f0782f15ffa49___(
      &v14,
      (__int64 *)v12);
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView>::EvaluateItem(
      &v16,
      &v11,
      &v14);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    v14 = 0LL;
    (**v6)(
      v6,
      &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>,
      &v14);
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)a2,
      (winrt::Windows::Foundation::IUnknown *)&v14);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
    std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Tidy(v13);
  }
  v8 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>::SwitchItems(
         a2,
         &v14);
  v9 = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(v8) == 0;
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  if ( v9 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                  (__int64)(a1 + 22),
                  (__int64 *)&v15)
             + 276) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v15);
  }
  return a2;
}
