/*
 * XREFs of ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x18040F5C8
 * Callers:
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180403968 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406210 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x1804073E0 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 *     ?put_Bounds@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180412C10 (-put_Bounds@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 * Callees:
 *     ?SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBURect@Foundation@56@@Z @ 0x1802D3A98 (-SetBounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUw.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 v5; // rdx

  v4 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetBounds(
    (__int64)this,
    v5,
    (float *)a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
