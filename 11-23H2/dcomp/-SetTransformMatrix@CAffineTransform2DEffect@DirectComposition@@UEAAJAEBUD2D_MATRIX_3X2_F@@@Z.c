/*
 * XREFs of ?SetTransformMatrix@CAffineTransform2DEffect@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F6480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::SetTransformMatrix(
        DirectComposition::CAffineTransform2DEffect *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2,
           0x18uLL);
}
