/*
 * XREFs of ?get_local_iids@?$implements@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIDesktopSnapLayoutManagerFactory@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180186710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 3;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>>::value;
  return a2;
}
