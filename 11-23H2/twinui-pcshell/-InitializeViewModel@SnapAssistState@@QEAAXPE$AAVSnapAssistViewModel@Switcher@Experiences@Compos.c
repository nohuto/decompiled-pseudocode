/*
 * XREFs of ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x18078B474
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x18007F26C (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E10 (--1-$test_data_control@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E80 (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@1@XZ @ 0x180223F44 (--C-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x1802243C0 (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@Z @ 0x1802E8B4A (--$emplace_back@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-$vector@UW.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@XZ @ 0x18078B1BC (--0hresult_illegal_state_change@winrt@@QEAA@XZ.c)
 *     ?AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x18078B34C (-AddRegionToViewModel@SnapAssistState@@AEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compo.c)
 *     ?get@Regions@__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@XZ @ 0x18078C1AC (-get@Regions@__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@Window.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall SnapAssistState::InitializeViewModel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r13
  void *v7; // rbx
  __int64 v8; // rdi
  bool v9; // r14
  _DWORD *v10; // rdi
  _DWORD *i; // rbx
  char *v12; // rdx
  _DWORD *j; // rdi
  char *k; // rax
  size_t v15; // rbx
  __int64 v16; // rbx
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v18[56]; // [rsp+38h] [rbp-38h] BYREF
  void *v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+58h]

  v6 = a1 + 176;
  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    (void **)(a1 + 176),
    (__int64)v18);
  v7 = (void *)WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistViewModelPublicNonVirtuals::Regions::get(a2);
  v19 = v7;
  v8 = __abi_winrt_cast_to(
         0,
         (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))v7,
         (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v20 = v8;
  v9 = (unsigned int)Windows::UI::Xaml::Interop::IBindableVector::Size::get(v8) != 0;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 )
  {
    winrt::hresult_illegal_state_change::hresult_illegal_state_change((winrt::hresult_illegal_state_change *)pExceptionObject);
    throw (winrt::hresult_illegal_state_change *)pExceptionObject;
  }
  __abi_winrt_ptr_assign((_QWORD *)(a1 + 144), a3);
  v10 = *(_DWORD **)(a1 + 56);
  for ( i = *(_DWORD **)(a1 + 48); i != v10; i += 8 )
  {
    SnapAssistState::AddRegionToViewModel((float *)a1, a2, (__int64)i);
    if ( i[6] == 2 )
    {
      LODWORD(v19) = *i;
      std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::emplace_back<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>(
        a1 + 72,
        &v19);
    }
  }
  v19 = *(void **)(a1 + 136);
  pExceptionObject[0] = a1 + 72;
  pExceptionObject[1] = &v19;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e153033c267a3414dd193f619d51719c___,
    (LPARAM)pExceptionObject);
  v12 = *(char **)(a1 + 56);
  for ( j = *(_DWORD **)(a1 + 48); j != (_DWORD *)v12 && j[6] != 2; j += 8 )
    ;
  if ( j != (_DWORD *)v12 )
  {
    for ( k = (char *)(j + 8); k != v12; k += 32 )
    {
      if ( *((_DWORD *)k + 6) != 2 )
      {
        *(_OWORD *)j = *(_OWORD *)k;
        *((_OWORD *)j + 1) = *((_OWORD *)k + 1);
        j += 8;
      }
    }
    if ( j != (_DWORD *)v12 )
    {
      v15 = *(_QWORD *)(a1 + 56) - (_QWORD)v12;
      memmove_0(j, v12, v15);
      *(_QWORD *)(a1 + 56) = (char *)j + v15;
    }
  }
  v16 = (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48)) >> 5;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::operator->(
                 v6,
                 (__int64 *)&v19)
            + 264) = v16;
  tip2::test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_data_control<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>(&v19);
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v18);
}
