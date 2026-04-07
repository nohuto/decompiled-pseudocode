/*
 * XREFs of ?UpdateFloatProperties@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800F5B20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F5B80 (-UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@U.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::UpdateFloatProperties(
        __int64 a1,
        __int64 a2)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h]

  v5 = a2;
  v2 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UpdateFloatProperties(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
