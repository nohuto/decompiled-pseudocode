/*
 * XREFs of ?Release@?$produce_base@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@X@impl@winrt@@UEAAIXZ @ 0x1805B4660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension,void>::Release(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx

  v1 = (a1 - 48) & -(__int64)(a1 != 0);
  v2 = *(_QWORD *)(v1 + 24);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*(_QWORD *)(v1 + 24));
  else
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::composable,winrt::composing,winrt::Windows::Internal::Shell::PlatformExtensions::SnapLayoutManagerExtension>::NonDelegatingRelease((volatile __int64 *)v1);
}
