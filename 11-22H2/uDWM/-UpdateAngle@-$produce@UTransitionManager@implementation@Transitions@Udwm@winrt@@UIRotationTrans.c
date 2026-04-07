/*
 * XREFs of ?UpdateAngle@?$produce@UTransitionManager@implementation@Transitions@Udwm@winrt@@UIRotationTransitionManager@Private@345@@impl@winrt@@UEAAHHH@Z @ 0x1800FF1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800FF218 (-UpdateAngle@TransitionManager@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TransitionManager,winrt::Udwm::Transitions::Private::IRotationTransitionManager>::UpdateAngle(
        __int64 a1,
        int a2,
        int a3)
{
  winrt::Udwm::Transitions::implementation::TransitionManager *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (winrt::Udwm::Transitions::implementation::TransitionManager *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::TransitionManager::UpdateAngle(v3, a2, a3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
