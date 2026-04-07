/*
 * XREFs of ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800E0E9C
 * Callers:
 *     ?SetBorderRect@CSystemBackdropVisual@@QEAAJAEBUtagRECT@@@Z @ 0x1800E18D0 (-SetBorderRect@CSystemBackdropVisual@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
