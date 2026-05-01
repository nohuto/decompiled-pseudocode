/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1805B431C
 * Callers:
 *     ?Release@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UINonDelegatingInspectable@impl@7@@impl@winrt@@UEAAIXZ @ 0x1805B4540 (-Release@-$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows.c)
 *     ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManager@34567@X@impl@winrt@@UEAAIXZ @ 0x1805B4620 (-Release@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Wi.c)
 *     ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAIXZ @ 0x1805B4660 (-Release@-$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shel_ea_1805B4660.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?subtract_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1805B5468 (-subtract_reference@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@She.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingRelease(
        volatile __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::subtract_reference();
  if ( !v2 )
  {
    v3 = _InterlockedExchange64(a1 + 4, 1LL);
    if ( a1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64, __int64))(*a1 + 8))(a1, 1LL, v3);
  }
  return v2;
}
