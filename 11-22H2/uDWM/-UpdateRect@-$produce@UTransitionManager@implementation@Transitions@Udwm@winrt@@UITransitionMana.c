/*
 * XREFs of ?UpdateRect@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UITransitionManager@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@H@Z @ 0x1800FF450
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@5@W4ShellTransition@345@@Z @ 0x1800FF4A8 (-UpdateRect@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Wi.c)
 */

__int64 winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::ITransitionManager>::UpdateRect()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+18h] BYREF

  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::UpdateRect();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v1);
  }
  return result;
}
