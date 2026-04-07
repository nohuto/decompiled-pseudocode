/*
 * XREFs of ?Complete@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHXZ @ 0x1801013B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180101408 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::Complete(
        __int64 a1)
{
  winrt::Udwm::Transitions::implementation::TransitionState *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::implementation::TransitionState *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionState::Complete(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
