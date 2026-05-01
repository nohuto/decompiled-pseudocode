/*
 * XREFs of ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x180079A4C
 * Callers:
 *     ?NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ @ 0x18007D120 (-NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ.c)
 *     ?TaskGroupItemCount@CachedDataSource@@QEBAHXZ @ 0x180766A3C (-TaskGroupItemCount@CachedDataSource@@QEBAHXZ.c)
 * Callees:
 *     ?Size@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180035110 (-Size@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@U.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UISwitchItem@Multitasking@ComposableShell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180079B08 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UISwitchItem@Multitas.c)
 *     ?AcceptsSwitchItem@?$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UIDataSourceAdapter@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x180079B68 (-AcceptsSwitchItem@-$consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter@UI.c)
 *     ?SwitchItems@?$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007AB58 (-SwitchItems@-$consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource@UISwi.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180117E20 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapGroupsInSwitchers@@@details@wil@@QEAA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CountTaskGroupSwitchItemsInDataSource(
        const struct winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter *a1,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *a2,
        __int64 a3)
{
  const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *v3; // rbx
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SnapGroupsInSwitchers>::GetImpl'::`2'::impl,
    a2,
    a3);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v5 = 0;
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource>::SwitchItems(
    v3,
    &v9);
  v6 = 0;
  v7 = winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::Size(&v9);
  while ( v6 != v7 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem>::GetAt(
      &v9,
      &v10,
      v6);
    if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IDataSourceAdapter<winrt::Windows::Internal::ComposableShell::Multitasking::IDataSourceAdapter>::AcceptsSwitchItem(
                            a1,
                            &v10) )
      ++v5;
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    ++v6;
  }
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return v5;
}
