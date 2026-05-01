/*
 * XREFs of ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x18078BE88
 * Callers:
 *     ?OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z @ 0x18076CF90 (-OnAppSnapped@XamlSnapAssistViewHost@@UEAAJ_KURect@Foundation@Windows@ABI@@@Z.c)
 * Callees:
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModelArgs@1234@@Z @ 0x180069FC8 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSw.c)
 *     ??$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@AEBUIUnknown@Foundation@4winrt@@@Z @ 0x18007B13C (--$to_cx@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@@@YAPE$AAUISwitch.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ @ 0x18007F26C (-get@Size@IBindableVector@Interop@Xaml@UI@Windows@@UE$AAAIXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180223E80 (--1-$test_watcher@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@2@XZ @ 0x1802243C0 (-watch_errors@-$tip_test@V-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0hresult_illegal_state_change@winrt@@QEAA@XZ @ 0x18078B1BC (--0hresult_illegal_state_change@winrt@@QEAA@XZ.c)
 *     ?GetTargetRegion@SnapAssistState@@QEAA?AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@XZ @ 0x18078B42C (-GetTargetRegion@SnapAssistState@@QEAA-AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@.c)
 *     ?get@Regions@__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIBindableObservableVector@Interop@Xaml@UI@Windows@@XZ @ 0x18078C1AC (-get@Regions@__ISnapAssistViewModelPublicNonVirtuals@Switcher@Experiences@ComposableShell@Window.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapAssistState::UpdateViewModel(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall ***v6)(_QWORD, __int64, __int64 *); // rbx
  __int64 v7; // rdi
  bool v8; // bp
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  void **v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rbx
  _OWORD *TargetRegion; // rax
  int v18; // eax
  _OWORD pExceptionObject[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v20[104]; // [rsp+40h] [rbp-68h] BYREF

  tip2::tip_test<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::watch_errors(
    (void **)(a1 + 176),
    (__int64)v20);
  v6 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistViewModelPublicNonVirtuals::Regions::get(a2);
  v7 = __abi_winrt_cast_to(0, v6, (__int64)&_uuidof__AUIBindableVector_Interop_Xaml_UI_Windows__);
  v8 = (unsigned int)Windows::UI::Xaml::Interop::IBindableVector::Size::get(v7) == 0;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v6)[2])(v6);
  if ( v8 )
  {
    winrt::hresult_illegal_state_change::hresult_illegal_state_change((winrt::hresult_illegal_state_change *)pExceptionObject);
    throw (winrt::hresult_illegal_state_change *)pExceptionObject;
  }
  v9 = *(_QWORD *)(a1 + 144);
  v10 = to_cx<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>(a3);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, v10);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v15 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v12,
          *(_QWORD *)(a1 + 144),
          v13,
          v14);
  v16 = __abi_winrt_ptr_ctor(v15);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  TargetRegion = SnapAssistState::GetTargetRegion(a1, pExceptionObject);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL))(a2, *(_QWORD *)TargetRegion, v16);
  if ( v18 < 0 )
    __abi_WinRTraiseException(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  tip2::test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>::~test_watcher<tip2::details::merged_data<_tip_GuidedSnapAssistTest,_tip_GuidedSnapAssistTest>>((__int64)v20);
}
