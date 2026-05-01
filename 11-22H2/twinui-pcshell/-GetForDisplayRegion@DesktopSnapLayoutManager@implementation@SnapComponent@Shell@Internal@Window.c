/*
 * XREFs of ?GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x180683770
 * Callers:
 *     ?GetForDisplayRegion@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180683700 (-GetForDisplayRegion@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x180682750 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetForDisplayRegion(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *a1,
        const struct winrt::Windows::UI::WindowManagement::DisplayRegion *a2)
{
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v4; // rbx
  char *v5; // rcx
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *v7; // [rsp+40h] [rbp+8h] BYREF
  char *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  v4 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)operator new(0x80uLL);
  v7 = v4;
  winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
    v4,
    a2);
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vftable';
  v5 = (char *)v4 + 40;
  v8 = (char *)v4 + 40;
  if ( v4 == (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)-40LL )
  {
    *(_QWORD *)a1 &= (unsigned __int64)v5;
  }
  else
  {
    v7 = 0LL;
    (**(void (__fastcall ***)(char *, void *, winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager **))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>,
      &v7);
    *(_QWORD *)a1 = v7;
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  }
  return a1;
}
