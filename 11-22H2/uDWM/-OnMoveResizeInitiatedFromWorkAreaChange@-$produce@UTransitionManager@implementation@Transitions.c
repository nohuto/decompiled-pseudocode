/*
 * XREFs of ?OnMoveResizeInitiatedFromWorkAreaChange@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIAnimationsTransitionManager@Private@345@@impl@winrt@@UEAAH_K@Z @ 0x1800FE390
 * Callers:
 *     <none>
 * Callees:
 *     ?OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAX_K@Z @ 0x1800FE3E8 (-OnMoveResizeInitiatedFromWorkAreaChange@TransitionManager@implementation@Transitions@Udwm@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IAnimationsTransitionManager>::OnMoveResizeInitiatedFromWorkAreaChange(
        __int64 a1,
        unsigned __int64 a2)
{
  winrt::Udwm::Transitions::implementation::TransitionManager *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Udwm::Transitions::implementation::TransitionManager *)((a1 - 32) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::OnMoveResizeInitiatedFromWorkAreaChange(v2, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
