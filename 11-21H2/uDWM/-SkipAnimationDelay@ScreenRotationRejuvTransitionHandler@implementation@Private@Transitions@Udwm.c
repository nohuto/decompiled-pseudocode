/*
 * XREFs of ?SkipAnimationDelay@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4C08
 * Callers:
 *     ?UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F5B80 (-UpdateFloatProperties@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@U.c)
 * Callees:
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEBA?AV?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800F3940 (-AcquireAnimationEngine@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5680 (-UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transit.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::SkipAnimationDelay(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this)
{
  const wchar_t *v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+28h] [rbp-10h]
  CAnimationEngine *v4; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)this + 78) = 1;
  if ( *((_DWORD *)this + 16) == -1 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 22) - 1) <= 1 )
    {
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::UnregisterGlobalTimeChanged(this);
      v2 = L"Get skip animation delay request, skip CTimline delay.";
      v3 = 54LL;
      tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log((char *)this + 136, &v2);
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation(this);
    }
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::AcquireAnimationEngine(
      (__int64)this,
      &v4);
    CAnimationEngine::ScheduleStopAnimation(v4, *((_DWORD *)this + 16));
    *((_DWORD *)this + 16) = -1;
    v2 = L"Get skip animation delay request, stop first animation.";
    v3 = 55LL;
    tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log((char *)this + 136, &v2);
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation(this);
    if ( v4 )
      CAnimationEngine::Release(v4);
  }
}
