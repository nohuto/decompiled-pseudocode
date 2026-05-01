/*
 * XREFs of _wil::MakeAndInitializeOrThrow_TaskViewFrame_enum_ALL_UP_VIEW_FLAGS_&_IImmersiveMonitor___&_IImmersiveMonitor___&_winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_const_&_winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView_const_&_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_const_&_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController_const_&_IXamlMultitaskingViewController___&_IXamlSwitcherWindowInteractionEvents___&_IApplicationViewCollection___&_winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter_const_&_ABI::Windows::Internal::Shell::IRemoteSessionWindowManager___&__::_1_::dtor$0 @ 0x1802C01F6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_TaskViewFrame_enum_ALL_UP_VIEW_FLAGS___IImmersiveMonitor_____IImmersiveMonitor_____winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_const___winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView_const___winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_const___winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController_const___IXamlMultitaskingViewController_____IXamlSwitcherWindowInteractionEvents_____IApplicationViewCollection_____winrt::Windows::Internal::Shell::TaskGroups::TaskGroupDataSourceAdapter_const___ABI::Windows::Internal::Shell::IRemoteSessionWindowManager______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 112) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 112) &= ~1u;
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(*(void **)(a2 + 144));
  }
}
