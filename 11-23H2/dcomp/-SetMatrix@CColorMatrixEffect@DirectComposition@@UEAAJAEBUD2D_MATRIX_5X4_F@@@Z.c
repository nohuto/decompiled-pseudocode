/*
 * XREFs of ?SetMatrix@CColorMatrixEffect@DirectComposition@@UEAAJAEBUD2D_MATRIX_5X4_F@@@Z @ 0x1800F5810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffect::SetMatrix(
        DirectComposition::CColorMatrixEffect *this,
        const struct D2D_MATRIX_5X4_F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2,
           0x50uLL);
}
