/*
 * XREFs of ?SetAlphaMode@CColorMatrixEffect@DirectComposition@@UEAAJW4D2D1_COLORMATRIX_ALPHA_MODE@@@Z @ 0x1800F4460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffect::SetAlphaMode(
        DirectComposition::CColorMatrixEffect *this,
        enum D2D1_COLORMATRIX_ALPHA_MODE a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           1,
           a2);
}
