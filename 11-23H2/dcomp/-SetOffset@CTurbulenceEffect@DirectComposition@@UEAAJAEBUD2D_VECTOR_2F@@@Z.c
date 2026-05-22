/*
 * XREFs of ?SetOffset@CTurbulenceEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1800F5A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffect::SetOffset(
        DirectComposition::CTurbulenceEffect *this,
        const struct D2D_VECTOR_2F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2,
           8uLL);
}
