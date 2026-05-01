/*
 * XREFs of ?LaunchSnappedWindows@?$produce@UDesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtension@PlatformExtensions@4567@@impl@winrt@@UEAAHIPEAUstruct_Windows_Internal_Shell_PlatformExtensions_SnapLaunchTargetData@23@@Z @ 0x18022A520
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x18022A590 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 */

__int64 winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::LaunchSnappedWindows()
{
  __int64 result; // rax
  int v1; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindows();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v1);
  }
  return result;
}
