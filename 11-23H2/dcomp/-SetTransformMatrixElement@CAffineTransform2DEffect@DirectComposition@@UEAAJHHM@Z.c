/*
 * XREFs of ?SetTransformMatrixElement@CAffineTransform2DEffect@DirectComposition@@UEAAJHHM@Z @ 0x1800F64B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::SetTransformMatrixElement(
        DirectComposition::CAffineTransform2DEffect *this,
        unsigned int a2,
        unsigned int a3,
        float a4)
{
  if ( a2 > 2 || a3 > 1 )
    return 2147942487LL;
  else
    return DirectComposition::CResourceProxy::SetScalarFloatProperty(
             (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
             a3 + 4 + 2 * a2,
             a4);
}
