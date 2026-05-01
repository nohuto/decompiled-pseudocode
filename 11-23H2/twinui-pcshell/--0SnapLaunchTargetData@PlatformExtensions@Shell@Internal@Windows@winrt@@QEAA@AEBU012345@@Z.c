/*
 * XREFs of ??0SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@AEBU012345@@Z @ 0x18022A200
 * Callers:
 *     ??$_Uninitialized_copy@PEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180229B48 (--$_Uninitialized_copy@PEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@.c)
 *     ??$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEBU123456@0PEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180229BC0 (--$_Uninitialized_copy@PEBUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1801BC6D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *__fastcall winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::SnapLaunchTargetData(
        winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *this,
        const struct winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *a2,
        unsigned int a3)
{
  unsigned int v5; // r8d

  *(_DWORD *)this = *(_DWORD *)a2;
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)this + 8),
    (winrt::impl **)a2 + 1,
    a3);
  winrt::hstring::hstring(
    (winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData *)((char *)this + 16),
    (winrt::impl **)a2 + 2,
    v5);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  return this;
}
