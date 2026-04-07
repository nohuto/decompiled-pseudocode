/*
 * XREFs of ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A6730
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x1800021C8 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z @ 0x18000238C (-_ConvertDoubleToQPC@CAnimationResource@@KA_KN@Z.c)
 *     ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x180002430 (-ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationResource::AddRepeat(CAnimationResource *this, double a2, double a3)
{
  int v5; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-50h]
  unsigned __int64 v7; // [rsp+30h] [rbp-48h]

  if ( !_finite(a2) || a2 < 0.0 || !_finite(a3) || a3 <= 0.0 )
    return 2147942487LL;
  CAnimationResource::ReleaseAnimationHandle(this);
  v6 = CAnimationResource::_ConvertDoubleToQPC(a2);
  v5 = 3;
  v7 = CAnimationResource::_ConvertDoubleToQPC(a3);
  return CAnimationResource::_AddPrimitive(this, (const struct DwmAnimationPrimitive *)&v5);
}
