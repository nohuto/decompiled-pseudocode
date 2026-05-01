/*
 * XREFs of ?AllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18040F464
 * Callers:
 *     ?SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z @ 0x180406A10 (-SetAllowPointerActivation@GamingOverlayExperienceManager@@UEAAJE@Z.c)
 *     ?put_AllowPointerActivation@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAH_N@Z @ 0x180412BB0 (-put_AllowPointerActivation@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Int.c)
 * Callees:
 *     ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180411280 (-SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Window.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::AllowPointerActivation(
        RTL_SRWLOCK *this,
        char a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v4; // rdx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v3 = this + 22;
  AcquireSRWLockExclusive(this + 22);
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
    this,
    v4,
    &v5);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
