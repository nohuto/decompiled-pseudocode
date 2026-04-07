/*
 * XREFs of ?get_AnimationsEnabled@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x180103FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x1801011B8 (-AnimationsEnabled@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA_NXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::ITransitionState>::get_AnimationsEnabled(
        __int64 a1,
        char *a2)
{
  winrt::Udwm::Transitions::implementation::TransitionState *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Udwm::Transitions::implementation::TransitionState *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a2 = winrt::Udwm::Transitions::implementation::TransitionState::AnimationsEnabled(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
