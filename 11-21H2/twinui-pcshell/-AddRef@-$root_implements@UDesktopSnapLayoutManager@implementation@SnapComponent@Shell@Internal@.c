/*
 * XREFs of ?AddRef@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@QEAAIXZ @ 0x1805B3B28
 * Callers:
 *     ?AddRef@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAIXZ @ 0x1805B3AF0 (-AddRef@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Win.c)
 *     ?AddRef@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAIXZ @ 0x1805B3B10 (-AddRef@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell_ea_1805B3B10.c)
 *     ?query_interface@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805B5134 (-query_interface@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::AddRef(
        __int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(a1 + 24));
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingAddRef(a1);
}
