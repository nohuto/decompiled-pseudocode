/*
 * XREFs of ?UpdateFloatProperties@?$produce@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHPEAX@Z @ 0x1800F83A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F8400 (-UpdateFloatProperties@WindowJointResizeTransitionHandler@implementation@Private@Transitions@Udw.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::UpdateFloatProperties(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h]

  v4 = a2;
  try
  {
    winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransitionHandler::UpdateFloatProperties();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
