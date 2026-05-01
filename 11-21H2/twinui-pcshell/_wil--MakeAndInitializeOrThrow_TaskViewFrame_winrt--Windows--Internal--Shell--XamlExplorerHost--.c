/*
 * XREFs of _wil::MakeAndInitializeOrThrow_TaskViewFrame_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics_const_&_enum_ALL_UP_VIEW_FLAGS_&_IImmersiveMonitor___&_IImmersiveMonitor___&_winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_const_&_winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView_const_&_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_const_&_winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController_const_&_IXamlMultitaskingViewController___&_IXamlSwitcherWindowInteractionEvents___&__::_1_::dtor$0 @ 0x1802138F6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_TaskViewFrame_winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics_const___enum_ALL_UP_VIEW_FLAGS___IImmersiveMonitor_____IImmersiveMonitor_____winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_const___winrt::Windows::Internal::ComposableShell::Multitasking::SwitchItemDataView_const___winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_const___winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController_const___IXamlMultitaskingViewController_____IXamlSwitcherWindowInteractionEvents______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~1u;
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(*(void **)(a2 + 128));
  }
}
