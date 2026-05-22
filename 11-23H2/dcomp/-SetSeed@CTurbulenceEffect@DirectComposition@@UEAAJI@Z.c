/*
 * XREFs of ?SetSeed@CTurbulenceEffect@DirectComposition@@UEAAJI@Z @ 0x1800F6050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffect::SetSeed(
        DirectComposition::CTurbulenceEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4,
           a2);
}
