/*
 * XREFs of ?TaskGroupItemCount@CachedDataSource@@QEBAHXZ @ 0x180766A3C
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180764E70 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Internal@Windows@winrt@@AEBUISwitchItemDataSource@Multitasking@ComposableShell@456@@Z @ 0x180079A4C (-CountTaskGroupSwitchItemsInDataSource@@YAHAEBUTaskGroupDataSourceAdapter@TaskGroups@Shell@Inter.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?DataSource@CachedDataSource@@QEBA?AUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@XZ @ 0x180763924 (-DataSource@CachedDataSource@@QEBA-AUISwitchItemDataSource@Multitasking@ComposableShell@Internal.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CachedDataSource::TaskGroupItemCount(CachedDataSource *this)
{
  winrt::Windows::Foundation::IUnknown *v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = CachedDataSource::DataSource((__int64)this, (winrt::Windows::Foundation::IUnknown *)&v6);
  v4 = CountTaskGroupSwitchItemsInDataSource((CachedDataSource *)((char *)this + 48), v2, v3);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v4;
}
