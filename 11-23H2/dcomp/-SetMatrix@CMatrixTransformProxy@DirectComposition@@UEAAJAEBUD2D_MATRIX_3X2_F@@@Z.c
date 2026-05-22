/*
 * XREFs of ?SetMatrix@CMatrixTransformProxy@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800F5850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransformProxy::SetMatrix(
        DirectComposition::CMatrixTransformProxy *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CMatrixTransformProxy *)((char *)this + 8),
           6,
           a2,
           0x18uLL);
}
