/*
 * XREFs of ?OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F44A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003FDCC (-Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA.c)
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::OnAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  const char *v6; // r9
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *v7; // rcx
  const wchar_t *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    if ( a2 == *((_DWORD *)this + 8) )
    {
      v9 = L"First animation complete";
      v10 = 24LL;
      tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log((char *)this + 104, &v9);
      *((_DWORD *)this + 8) = -1;
      v7 = (winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)((char *)this - 32);
      if ( *((_BYTE *)this + 46) )
      {
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StartSecondAnimation(v7);
      }
      else
      {
        v12 = 2;
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::CreateTimeline(
          v7,
          (const enum winrt::Udwm::Transitions::Private::implementation::RejuvRotationTimelineReason *)&v12,
          v5,
          v6);
      }
    }
    else if ( a2 == *((_DWORD *)this + 9) )
    {
      v9 = L"Second animation complete";
      v10 = 25LL;
      tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::log((char *)this + 104, &v9);
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Cancel((CBaseObject **)this - 4);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xED,
                           (int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.private.screenrotationrejuvtransitionhandler.cpp",
                           a4);
  }
  return 0LL;
}
