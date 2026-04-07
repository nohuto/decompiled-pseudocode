/*
 * XREFs of ?GetAnimationID@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAK_N@Z @ 0x1800F5594
 * Callers:
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5E18 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F6320 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler::GetAnimationID(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler *this,
        char a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 11);
  if ( v2 == -180 )
    return 5LL;
  if ( v2 == -90 )
    return a2 != 0 ? 4 : 7;
  result = 0LL;
  if ( v2 )
  {
    if ( v2 == 90 )
    {
      return a2 != 0 ? 2 : 6;
    }
    else if ( v2 == 180 )
    {
      return 3LL;
    }
  }
  return result;
}
