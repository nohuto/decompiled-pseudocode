/*
 * XREFs of ??$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEBU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180229BC0
 * Callers:
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x18022A590 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180229A10 (--$_Destroy_range@V-$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@w.c)
 *     ??0SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@AEBU012345@@Z @ 0x18022A200 (--0SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@AEBU012345@@Z.c)
 */

winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *__fastcall std::_Uninitialized_copy<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData const *>(
        struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a1,
        const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a3)
{
  const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *i; // rdi

  for ( i = a1;
        i != a2;
        i = (const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)i + 40) )
  {
    winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::SnapLaunchTargetData(a3, i);
    a3 = (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)a3 + 40);
  }
  std::_Destroy_range<std::allocator<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(a3, a3);
  return a3;
}
