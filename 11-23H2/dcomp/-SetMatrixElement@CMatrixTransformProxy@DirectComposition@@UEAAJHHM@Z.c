/*
 * XREFs of ?SetMatrixElement@CMatrixTransformProxy@DirectComposition@@UEAAJHHM@Z @ 0x1800F5950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransformProxy::SetMatrixElement(
        DirectComposition::CMatrixTransformProxy *this,
        unsigned int a2,
        unsigned int a3,
        float a4)
{
  if ( a2 > 2 || a3 > 1 )
    return 2147942487LL;
  else
    return DirectComposition::CResourceProxy::SetScalarFloatProperty(
             (DirectComposition::CMatrixTransformProxy *)((char *)this + 8),
             a3 + 2 * a2,
             a4);
}
