/*
 * XREFs of ?SetMatrix@CMatrixTransform3DProxy@DirectComposition@@UEAAJAEBU_D3DMATRIX@@@Z @ 0x1800F5830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DProxy::SetMatrix(
        DirectComposition::CMatrixTransform3DProxy *this,
        const struct _D3DMATRIX *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CMatrixTransform3DProxy *)((char *)this + 8),
           16,
           a2,
           0x40uLL);
}
