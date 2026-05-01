/*
 * XREFs of ?NumberOfTaskGroupItems@TaskViewFrame@@UEAAIXZ @ 0x18007D120
 * Callers:
 *     <none>
 * Callees:
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x180079A4C (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     ??$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18007D1CC (--$as@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@Utype@-$abi@UI.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskViewFrame::NumberOfTaskGroupItems(TaskViewFrame *this)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v5,
    *((_QWORD *)this + 11));
  v3 = CountTaskGroupSwitchItemsInDataSource(
         (TaskViewFrame *)((char *)this + 168),
         (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource *)&v5,
         v2);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return v3;
}
