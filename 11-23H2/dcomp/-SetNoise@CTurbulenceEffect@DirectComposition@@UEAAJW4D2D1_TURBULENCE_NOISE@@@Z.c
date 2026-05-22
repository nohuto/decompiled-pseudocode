/*
 * XREFs of ?SetNoise@CTurbulenceEffect@DirectComposition@@UEAAJW4D2D1_TURBULENCE_NOISE@@@Z @ 0x1800F59F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffect::SetNoise(
        DirectComposition::CTurbulenceEffect *this,
        enum D2D1_TURBULENCE_NOISE a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5,
           a2);
}
