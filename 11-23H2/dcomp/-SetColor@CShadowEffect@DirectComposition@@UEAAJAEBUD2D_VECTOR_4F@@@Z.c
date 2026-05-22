/*
 * XREFs of ?SetColor@CShadowEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_4F@@@Z @ 0x1800F51A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetColor(
        DirectComposition::CShadowEffect *this,
        const struct D2D_VECTOR_4F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           1,
           a2,
           0x10uLL);
}
