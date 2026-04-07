/*
 * XREFs of ?End@CAnimationResource@@UEAAJNM@Z @ 0x180001F20
 * Callers:
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180001FA4 (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x1800021C8 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x18000238C (-_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z.c)
 *     ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x180002430 (-ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationResource::End(CAnimationResource *this, double a2, float a3)
{
  int v5; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-40h]
  float v7; // [rsp+30h] [rbp-38h]

  if ( !_finite(a2) || a2 < 0.0 )
    return 2147942487LL;
  CAnimationResource::ReleaseAnimationHandle(this);
  v7 = a3;
  v6 = CAnimationResource::_ConvertDoubleToQPC(a2);
  v5 = 4;
  return CAnimationResource::_AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v5);
}
