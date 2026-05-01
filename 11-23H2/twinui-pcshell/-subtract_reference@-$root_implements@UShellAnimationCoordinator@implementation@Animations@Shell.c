/*
 * XREFs of ?subtract_reference@?$root_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAIXZ @ 0x1800DAFD0
 * Callers:
 *     ?NonDelegatingRelease@?$root_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@U134567@@impl@winrt@@IEAAIXZ @ 0x1800DB230 (-NonDelegatingRelease@-$root_implements@UShellAnimationCoordinator@implementation@Animations@She.c)
 *     ??_E?$heap_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801B7010 (--_E-$heap_implements@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Window.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::subtract_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  do
  {
    if ( v1 < 0 )
      return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
  }
  while ( v4 != v1 );
  return v3;
}
