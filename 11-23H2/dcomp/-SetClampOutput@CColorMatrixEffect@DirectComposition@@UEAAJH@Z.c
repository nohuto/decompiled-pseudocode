/*
 * XREFs of ?SetClampOutput@CColorMatrixEffect@DirectComposition@@UEAAJH@Z @ 0x1800F4FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffect::SetClampOutput(
        DirectComposition::CColorMatrixEffect *this,
        int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2);
}
