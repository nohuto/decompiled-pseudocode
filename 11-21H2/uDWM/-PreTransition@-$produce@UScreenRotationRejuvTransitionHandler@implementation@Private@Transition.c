/*
 * XREFs of ?PreTransition@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x1800F4730
 * Callers:
 *     <none>
 * Callees:
 *     ?PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F4790 (-PreTransition@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = a3;
  try
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::PreTransition();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
