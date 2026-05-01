/*
 * XREFs of ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x18078B798
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x18076CF90 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 * Callees:
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180035110 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?SwitchItems@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007AB58 (-SwitchItems@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwi.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E80 (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x1802243C0 (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??$emplace_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x1802E8B4A (--$emplace_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$vector@UW.c)
 *     ??$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@?$vector@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@V?$allocator@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x18078AC20 (--$_Emplace_reallocate@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@-$v.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_8aafd0e0e31e0023c064f20d88d85697___ @ 0x18078AE70 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_18078AE70.c)
 *     ?MakeFilteredDataSource@SnapAssistState@@AEAA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBU234567@@Z @ 0x18078BA30 (-MakeFilteredDataSource@SnapAssistState@@AEAA-AUISwitchItemDataSource@Multitasking@ComposableShe.c)
 */

// Hidden C++ exception states: #wind=3
_DWORD *__fastcall SnapAssistState::ItemSnapped(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4, float *a5)
{
  __int64 v9; // r14
  __int64 *v10; // rax
  winrt::Windows::Foundation::IUnknown *v11; // rdx
  float v12; // xmm0_4
  float v13; // xmm1_4
  int v14; // ecx
  _BYTE *v15; // r8
  __int64 *v16; // rax
  bool v17; // bl
  void *v19; // [rsp+20h] [rbp-51h] BYREF
  __int64 v20[3]; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v22[56]; // [rsp+50h] [rbp-21h] BYREF
  _DWORD v23[4]; // [rsp+88h] [rbp+17h] BYREF

  v20[0] = (__int64)a2;
  v9 = a1 + 176;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    (void **)(a1 + 176),
    (__int64)v22);
  v10 = tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
          v9,
          (__int64 *)&v19);
  ++*(_DWORD *)(*v10 + 272);
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
  if ( *a4 )
  {
    v11 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
    if ( v11 == *(winrt::Windows::Foundation::IUnknown **)(a1 + 16) )
    {
      std::vector<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::_Emplace_reallocate<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem const &>(
        (__int64 *)a1,
        (__int64)v11,
        a4);
    }
    else
    {
      *(_QWORD *)v11 = *a4;
      winrt::Windows::Foundation::IUnknown::add_ref(v11);
      *(_QWORD *)(a1 + 8) += 8LL;
    }
  }
  LODWORD(v19) = a3;
  std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::emplace_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
    a1 + 24,
    &v19);
  *(_QWORD *)(a1 + 120) = a3;
  *(_BYTE *)(a1 + 152) = 0;
  v19 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(a1 + 184),
    (winrt::Windows::Foundation::IUnknown *)&v19);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  v12 = a5[1] + a5[3];
  v13 = *a5 + a5[2];
  v14 = (int)a5[1];
  v23[0] = (int)*a5;
  v23[1] = v14;
  v23[2] = (int)v13;
  v23[3] = (int)v12;
  v21[0] = v23;
  v21[1] = a1;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_8aafd0e0e31e0023c064f20d88d85697___(
    &v19,
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)(a1 + 56),
    (__int64)v21);
  v15 = *(_BYTE **)(a1 + 56);
  if ( v19 == v15 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                  v9,
                  (__int64 *)&v19)
             + 280) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
    *a2 = 2;
LABEL_9:
    *((_QWORD *)a2 + 1) = 0LL;
    goto LABEL_19;
  }
  memmove_0(v19, (char *)v19 + 32, v15 - ((_BYTE *)v19 + 32));
  *(_QWORD *)(a1 + 56) -= 32LL;
  if ( *(_QWORD *)(a1 + 48) == *(_QWORD *)(a1 + 56) )
  {
    *a2 = 3;
    goto LABEL_9;
  }
  SnapAssistState::MakeFilteredDataSource(a1, v20, a1 + 160);
  v16 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>::SwitchItems(
          v20,
          &v19);
  v17 = (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(v16) == 0;
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  if ( v17 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                  v9,
                  (__int64 *)&v19)
             + 276) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
    *a2 = 2;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  else
  {
    *a2 = 1;
    *((_QWORD *)a2 + 1) = v20[0];
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a2 + 2));
  }
  if ( v20[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v20);
LABEL_19:
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v22);
  return a2;
}
