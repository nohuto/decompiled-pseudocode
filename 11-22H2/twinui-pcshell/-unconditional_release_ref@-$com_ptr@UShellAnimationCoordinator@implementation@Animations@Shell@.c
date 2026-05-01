/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180181CD0
 * Callers:
 *     ?Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA?AU134567@XZ @ 0x1801819F8 (-Create@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@SA-AU1.c)
 *     ?InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180181A8C (-InitializeEdgyRelationshipManager@ShellAnimationCoordinator@implementation@Animations@Shell@Int.c)
 *     ??1?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18075FD14 (--1-$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::unconditional_release_ref(
        volatile __int64 **a1)
{
  volatile __int64 *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator,winrt::Windows::Internal::Shell::Animations::ShellAnimationCoordinator>::NonDelegatingRelease(v2);
}
