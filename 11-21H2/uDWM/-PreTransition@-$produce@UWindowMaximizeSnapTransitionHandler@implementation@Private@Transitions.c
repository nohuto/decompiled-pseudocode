/*
 * XREFs of ?PreTransition@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHHPEAX@Z @ 0x180013C80
 * Callers:
 *     <none>
 * Callees:
 *     ?PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x18003F290 (-PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
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
    winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::PreTransition();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
