/*
 * XREFs of ??1?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18075FD14
 * Callers:
 *     _winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator::InitializeEdgyRelationshipManager_::_1_::dtor$0 @ 0x1802C561C (_winrt--Windows--Internal--Shell--Animations--implementation--ShellAnimationCoordinator--Initial.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180181CD0 (-unconditional_release_ref@-$com_ptr@UShellAnimationCoordinator@implementation@Animations@Shell@.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::~com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>(
        volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::Animations::implementation::ShellAnimationCoordinator>::unconditional_release_ref(a1);
  return result;
}
