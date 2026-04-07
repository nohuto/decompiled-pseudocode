/*
 * XREFs of ?UpdateAngle@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXHH@Z @ 0x1800F68E8
 * Callers:
 *     ?UpdateFloatProperties@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBU?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@6@@Z @ 0x1800F6A70 (-UpdateFloatProperties@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transiti.c)
 * Callees:
 *     ?Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAA_NXZ @ 0x180016EB4 (-Captured@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4RotationState@Rotation@3456@@Z @ 0x180016F08 (-SetRotationState@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@U.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4FA0 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5170 (-DrawBackground@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udw.c)
 *     ?UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6B18 (-UpdateParentVisual@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 *     ?log@?$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6DF8 (-log@-$tip_test@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180105BDC (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UpdateAngle(
        CVisual **this,
        int a2,
        int a3)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  struct tagPOINT *v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagPOINT v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v12[1] = 28LL;
  v12[0] = L"Receive updated angle signal";
  tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest>::log(this + 13, v12);
  if ( !winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)this) )
    return;
  *((_DWORD *)this + 11) = a2;
  if ( a2 == -270 || a2 == -360 )
  {
    v5 = a2 + 360;
    goto LABEL_8;
  }
  if ( a2 == 270 || a2 == 360 )
  {
    v5 = a2 - 360;
LABEL_8:
    *((_DWORD *)this + 11) = v5;
  }
  v6 = *((_DWORD *)this + 10);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( (unsigned int)(v8 - 1) <= 1 )
        {
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DrawBackground((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)this);
          winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UpdateParentVisual((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)this);
          *((_BYTE *)this + 81) = 1;
        }
      }
      else
      {
        *((_BYTE *)this + 80) = 1;
      }
    }
    else
    {
      CVisual::SetRotation(this[7], 0.0);
      v9 = (struct tagPOINT *)this[7];
      v13 = 0LL;
      CVisual::SetOffset(v9, &v13);
    }
  }
  else
  {
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::UpdateParentVisual((winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)this);
    if ( !*((_BYTE *)this + 82) )
    {
      v14 = 1;
      winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::DelayNextAnimation(
        (winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *)this,
        (const enum winrt::Udwm::Transitions::Private::implementation::ResponsiveRotationTimelineReason *)&v14,
        v10,
        v11);
    }
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::SetRotationState(
      (__int64)this,
      1);
  }
}
