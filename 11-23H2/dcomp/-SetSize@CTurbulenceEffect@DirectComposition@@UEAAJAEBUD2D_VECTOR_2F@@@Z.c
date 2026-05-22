/*
 * XREFs of ?SetSize@CTurbulenceEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1800F60D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffect::SetSize(
        DirectComposition::CTurbulenceEffect *this,
        const struct D2D_VECTOR_2F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2,
           8uLL);
}
