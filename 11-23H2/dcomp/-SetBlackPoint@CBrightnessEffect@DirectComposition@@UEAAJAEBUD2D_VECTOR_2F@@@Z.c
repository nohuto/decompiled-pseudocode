/*
 * XREFs of ?SetBlackPoint@CBrightnessEffect@DirectComposition@@UEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1800F48A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffect::SetBlackPoint(
        DirectComposition::CBrightnessEffect *this,
        const struct D2D_VECTOR_2F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           1,
           a2,
           8uLL);
}
