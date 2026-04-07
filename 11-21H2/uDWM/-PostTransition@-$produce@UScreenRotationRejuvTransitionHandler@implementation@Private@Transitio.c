/*
 * XREFs of ?PostTransition@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F4630
 * Callers:
 *     <none>
 * Callees:
 *     ?PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4688 (-PostTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::PostTransition(
        __int64 a1)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PostTransition(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
