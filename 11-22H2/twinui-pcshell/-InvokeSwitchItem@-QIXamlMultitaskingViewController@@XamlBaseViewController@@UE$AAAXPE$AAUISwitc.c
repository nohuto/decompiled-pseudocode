/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802ED72E
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802B2880 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwit.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180779AA0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180781460 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180079B68 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     ??0?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@Z @ 0x180082848 (--0-$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIApplicationView@@@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18076EB60 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180778820 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___ @ 0x18078CCF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___.c)
 *     ?Controller@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18078D20C (-Controller@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSou.c)
 *     ?SwitchToItemAsync@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemController@UISwitchItemController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18078D518 (-SwitchToItemAsync@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemController.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  char v4; // di
  __int64 v5; // r9
  __int64 v6; // rbx
  IUnknown *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  bool v10; // bl
  __int64 v11; // rbx
  __int64 v12; // rax
  IUnknown *v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  IUnknown *v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  LODWORD(v16) = 0;
  AppViewDataSourceHelpers::TryGetApplicationViewForItem(v15);
  v6 = v15[0];
  if ( v15[0] )
  {
    v7 = *(IUnknown **)(a1 + 56);
    v16 = v7;
    if ( v7 )
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->AddRef)(v7);
    CoAllowSetForegroundWindow(v7, 0LL);
    v13 = v7;
    if ( v7 )
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->AddRef)(v7);
    wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::com_ptr_t<IApplicationView,wil::err_returncode_policy>(
      &v14,
      v6);
    Windows::Internal::ComTaskPool::QueueTask__lambda_27d41e6f978e0f5a6483d2ed3ecdf382___(v8, &v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
      1u,
      3u,
      v5);
    v10 = 0;
    if ( *(_QWORD *)(a1 + 96) )
    {
      v9 = (_QWORD *)from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v17, a2);
      v4 = 1;
      LODWORD(v16) = 1;
      if ( winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
             (__int64 *)(a1 + 96),
             v9) )
      {
        v10 = 1;
      }
    }
    if ( (v4 & 1) != 0 && v17 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
    if ( v10 )
    {
      v11 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::Controller(
              a1 + 96,
              &v13);
      v12 = from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v17, a2);
      winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemController<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemController>::SwitchToItemAsync(
        v11,
        &v16,
        v12);
      if ( v16 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
      if ( v17 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
      if ( v13 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v15);
}
