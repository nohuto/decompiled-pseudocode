/*
 * XREFs of ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180002110
 * Callers:
 *     ?StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180001FA4 (-StartCrossfadeAnimation@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@.c)
 * Callees:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x1800021C8 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x18000238C (-_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z.c)
 *     ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x180002430 (-ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationResource::AddCubic(
        CAnimationResource *this,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  int v8; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-50h]
  float v10; // [rsp+30h] [rbp-48h]
  float v11; // [rsp+34h] [rbp-44h]
  float v12; // [rsp+38h] [rbp-40h]
  float v13; // [rsp+3Ch] [rbp-3Ch]

  if ( !_finite(a2) || a2 < 0.0 )
    return 2147942487LL;
  CAnimationResource::ReleaseAnimationHandle(this);
  v10 = a6;
  v11 = a5;
  v12 = a4;
  v13 = a3;
  v9 = CAnimationResource::_ConvertDoubleToQPC(a2);
  v8 = 1;
  return CAnimationResource::_AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v8);
}
