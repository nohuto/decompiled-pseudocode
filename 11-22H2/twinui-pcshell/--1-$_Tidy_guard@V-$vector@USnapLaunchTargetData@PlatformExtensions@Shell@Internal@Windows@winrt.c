/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x18022A2C8
 * Callers:
 *     ??0?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18022A170 (--0-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$allocator@.c)
 *     _std::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData___::vector_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData_std::allocator_winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData____::_1_::dtor$2 @ 0x18022A1EB (_std--vector_winrt--Windows--Internal--Shell--PlatformExtensions--SnapLaunchTargetData_std--allo.c)
 *     ?LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXU?$array_view@$$CBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@7@@Z @ 0x18022A590 (-LaunchSnappedWindows@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windo.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindows_::_1_::dtor$5 @ 0x18022A6F0 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_18022A6F0.c)
 * Callees:
 *     ?_Tidy@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18022B274 (-_Tidy@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloca.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>::~_Tidy_guard<std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Tidy(v1);
  return result;
}
