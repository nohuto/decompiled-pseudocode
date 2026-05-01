/*
 * XREFs of ??1SnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18022A428
 * Callers:
 *     ??$_Destroy_range@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@YAXPEAUSnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAU123456@AEAV?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180229A10 (--$_Destroy_range@V-$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData::~SnapLaunchTargetData(
        void **this)
{
  winrt::hstring::~hstring(this + 2);
  winrt::hstring::~hstring(this + 1);
}
