/*
 * XREFs of ?StopAnimation@?$produce@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UIAnimatedTransitionVisualWrapper@345@@impl@winrt@@UEAAHXZ @ 0x1800EE3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800EE438 (-StopAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::StopAnimation(
        __int64 a1)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::StopAnimation(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v3);
  }
  return result;
}
