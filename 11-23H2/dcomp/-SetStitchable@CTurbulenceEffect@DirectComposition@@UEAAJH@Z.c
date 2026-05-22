/*
 * XREFs of ?SetStitchable@CTurbulenceEffect@DirectComposition@@UEAAJH@Z @ 0x1800F61A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffect::SetStitchable(
        DirectComposition::CTurbulenceEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           6,
           a2);
}
