/*
 * XREFs of ?Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180411CB8
 * Callers:
 *     ?OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804033E4 (-OnTryShowViewEventShared@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 *     ?Show@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180407570 (-Show@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?Show@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHXZ @ 0x180411C60 (-Show@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180411D20 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 */

void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Show(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx

  v2 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  LOBYTE(v3) = (_BYTE)v2;
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(this, v3);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
