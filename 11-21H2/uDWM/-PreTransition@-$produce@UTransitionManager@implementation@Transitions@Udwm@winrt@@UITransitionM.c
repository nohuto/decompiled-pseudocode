/*
 * XREFs of ?PreTransition@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHH@Z @ 0x1800FAC80
 * Callers:
 *     <none>
 * Callees:
 *     ?PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@345@@Z @ 0x1800FACD8 (-PreTransition@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@3.c)
 */

__int64 winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::PreTransition()
{
  __int64 result; // rax
  int v1; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::PreTransition();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v1);
  }
  return result;
}
