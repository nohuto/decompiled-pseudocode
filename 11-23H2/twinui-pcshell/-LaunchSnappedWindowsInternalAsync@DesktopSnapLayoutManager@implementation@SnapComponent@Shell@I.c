/*
 * XREFs of ?LaunchSnappedWindowsInternalAsync@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUfire_and_forget@7@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@7@AEBUCRect@Geometry@@I@Z @ 0x18022AF10
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_InitCoro$2 @ 0x18022A728 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 *     ?_Tidy@?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18022B274 (-_Tidy@-$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V-$alloca.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4)
{
  _DWORD *v7; // rax
  _BYTE v9[4]; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v10[69]; // [rsp+44h] [rbp-114h] BYREF
  int v11; // [rsp+178h] [rbp+20h] BYREF

  v11 = a4;
  v7 = operator new(0xF1uLL);
  v10[0] = 0;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync__InitCoro_2(
    v9,
    v10,
    v7,
    a1,
    a2,
    a3,
    &v11);
  LOBYTE(a3) = v9[0];
  std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>::_Tidy(a1);
  winrt::com_ptr<JointResize>::release_ref(a2);
  return a3;
}
