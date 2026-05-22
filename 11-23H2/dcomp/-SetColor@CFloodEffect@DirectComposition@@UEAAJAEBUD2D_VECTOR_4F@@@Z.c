/*
 * XREFs of ?SetColor@CFloodEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_4F@@@Z @ 0x1800F5160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CFloodEffect::SetColor(
        DirectComposition::CFloodEffect *this,
        const struct D2D_VECTOR_4F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2,
           0x10uLL);
}
