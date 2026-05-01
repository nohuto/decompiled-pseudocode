/*
 * XREFs of ?Hide@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x1802D3902
 * Callers:
 *     ?Hide@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180400520 (-Hide@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180402BA4 (-OnConsolidationRequestedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewMan.c)
 *     ?Hide@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x18040FE00 (-Hide@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ?HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1802D396A (-HideInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Hide(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx

  v2 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  LOBYTE(v3) = (_BYTE)v2;
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::HideInternal(this, v3);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
