/*
 * XREFs of ?SetNumOctaves@CTurbulenceEffect@DirectComposition@@UEAAJI@Z @ 0x1800F5A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffect::SetNumOctaves(
        DirectComposition::CTurbulenceEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3,
           a2);
}
