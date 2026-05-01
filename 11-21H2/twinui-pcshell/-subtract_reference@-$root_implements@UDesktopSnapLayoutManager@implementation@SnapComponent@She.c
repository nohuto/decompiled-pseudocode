/*
 * XREFs of ?subtract_reference@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1805B5468
 * Callers:
 *     ??1?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@MEAA@XZ @ 0x1805B388C (--1-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     ?NonDelegatingRelease@?$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@Ucomposable@7@Ucomposing@7@USnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@IEAAIXZ @ 0x1805B431C (-NonDelegatingRelease@-$root_implements@UDesktopSnapLayoutManager@implementation@SnapComponent@S.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::subtract_reference(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt

  v4 = *(_QWORD *)(a1 + 32);
  while ( v4 >= 0 )
  {
    a2 = v4 - 1;
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v4 - 1, v4);
    if ( v5 == v4 )
      return (unsigned int)a2;
  }
  return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v4), a2, a3, a4);
}
