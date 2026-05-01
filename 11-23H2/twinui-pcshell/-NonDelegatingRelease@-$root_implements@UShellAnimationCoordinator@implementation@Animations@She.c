/*
 * XREFs of ?NonDelegatingRelease@?$root_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAIXZ @ 0x1800DB230
 * Callers:
 *     ?Release@?$produce_base@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@UIShellAnimationCoordinator@34567@X@impl@winrt@@UEAAIXZ @ 0x1800DC440 (-Release@-$produce_base@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Wind.c)
 *     ?unconditional_release_ref@?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180181CD0 (-unconditional_release_ref@-$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@.c)
 * Callees:
 *     ?subtract_reference@?$root_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAIXZ @ 0x1800DAFD0 (-subtract_reference@-$root_implements@UShellAnimationCoordinator@implementation@Animations@Shell.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::NonDelegatingRelease(
        volatile __int64 *a1)
{
  unsigned int v2; // edi
  __int64 v4; // r8

  v2 = winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::subtract_reference((__int64)a1);
  if ( !v2 )
  {
    v4 = _InterlockedExchange64(a1 + 1, 1LL);
    if ( a1 )
      (*(void (__fastcall **)(volatile __int64 *, __int64, __int64))(*a1 + 8))(a1, 1LL, v4);
  }
  return v2;
}
