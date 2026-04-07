/*
 * XREFs of ?PostTransition@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F7DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F7E38 (-PostTransition@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::PostTransition(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::PostTransition(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
