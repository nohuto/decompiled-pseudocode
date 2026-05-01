/*
 * XREFs of ?abi_GetTrustLevel@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x180685E74
 * Callers:
 *     ?GetTrustLevel@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1806846A0 (-GetTrustLevel@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Inter.c)
 *     ?GetTrustLevel@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1806846C0 (-GetTrustLevel@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponen_ea_1806846C0.c)
 *     ?GetTrustLevel@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1806846E0 (-GetTrustLevel@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponen_ea_1806846E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::abi_GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 40LL))(*(_QWORD *)(a1 + 24));
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::IRemoteSystemDataModelStatics,winrt::static_lifetime>::NonDelegatingGetTrustLevel(
             a1,
             a2);
}
