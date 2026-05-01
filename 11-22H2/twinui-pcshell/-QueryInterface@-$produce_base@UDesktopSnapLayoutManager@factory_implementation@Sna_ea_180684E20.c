/*
 * XREFs of ?QueryInterface@?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180684E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics,void>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager,winrt::Windows::Internal::Shell::Animations::EdgeAnimationRelationshipManager>::query_interface(
           (volatile signed __int64 *)((a1 - 40) & -(__int64)(a1 != 0)),
           a2,
           a3);
}
