/*
 * XREFs of ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI@Z @ 0x180411FD0
 * Callers:
 *     ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180407180 (-SetForeground@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180408E54 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?put_WindowBand@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHI@Z @ 0x180412E90 (-put_WindowBand@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 * Callees:
 *     ?SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBI@Z @ 0x180411B60 (-SetWindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEA.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowBand(
        RTL_SRWLOCK *this,
        int a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v4; // rdx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetWindowBand(
    (__int64)this,
    v4,
    &v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
