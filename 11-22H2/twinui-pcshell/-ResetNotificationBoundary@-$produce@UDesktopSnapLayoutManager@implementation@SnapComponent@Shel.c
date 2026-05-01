/*
 * XREFs of ?ResetNotificationBoundary@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHXZ @ 0x180685110
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@?$event@UResetNotificationBoundaryHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAAXAEBUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@1@@Z @ 0x180680E88 (--$-RUDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@-$eve.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::ResetNotificationBoundary(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 - 48;
  v2 = -a1;
  try
  {
    winrt::event<winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler>::operator()<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>(
      v2,
      v1 & -(__int64)(v2 != 0));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
