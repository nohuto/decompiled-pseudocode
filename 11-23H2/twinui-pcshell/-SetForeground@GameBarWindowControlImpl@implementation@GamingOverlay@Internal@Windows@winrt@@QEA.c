/*
 * XREFs of ?SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180411368
 * Callers:
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180407180 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetForeground@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x180411310 (-SetForeground@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows.c)
 * Callees:
 *     ?SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1804113CC (-SetForegroundInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForeground(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForegroundInternal(this);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
