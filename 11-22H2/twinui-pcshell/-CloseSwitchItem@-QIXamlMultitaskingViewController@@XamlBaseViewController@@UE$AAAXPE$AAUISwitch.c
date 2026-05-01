/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18078D048
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802B2320 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitc.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1807791C4 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwit.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18077D914 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180079B68 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 *     ?TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18076EB60 (-TryGetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$com_ptr_t@UIApplicationView@@Uerr.c)
 *     ??$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x180778820 (--$from_cx@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@@YA-AUISwitchItem@.c)
 *     ?Controller@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18078D20C (-Controller@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSou.c)
 *     ?TryCloseItemAsync@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemController@UISwitchItemController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18078D570 (-TryCloseItemAsync@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemController.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  char v4; // bl
  __int64 v5; // r9
  _QWORD *v6; // rax
  bool v7; // di
  __int64 v8; // rbx
  _QWORD *v9; // rax
  const char *v10; // r9
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall ***v12[4])(_QWORD, GUID *, __int64); // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  LODWORD(v14) = 0;
  try
  {
    AppViewDataSourceHelpers::TryGetApplicationViewForItem(v12, (__int64)a2);
    if ( v12[0] )
    {
      ApplicationViewHelpers::CloseView(v12[0], *(_QWORD *)(a1 + 64), 7, 8, 3);
    }
    else
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
        1u,
        3u,
        v5);
      v7 = 0;
      if ( *(_QWORD *)(a1 + 96) )
      {
        v6 = from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v15, a2);
        v4 = 1;
        LODWORD(v14) = 1;
        if ( winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
               (__int64 *)(a1 + 96),
               v6) )
        {
          v7 = 1;
        }
      }
      if ( (v4 & 1) != 0 && v15 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
      if ( v7 )
      {
        v8 = winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::Controller(
               a1 + 96,
               &v11);
        v9 = from_cx<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(&v15, a2);
        winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemController<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemController>::TryCloseItemAsync(
          v8,
          &v14,
          v9);
        if ( v14 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
        if ( v15 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
        if ( v11 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      v10);
  }
}
