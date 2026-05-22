/*
 * XREFs of ?SetInterpolationMode@CAffineTransform2DEffect@DirectComposition@@UEAAJW4D2D1_2DAFFINETRANSFORM_INTERPOLATION_MODE@@@Z @ 0x1800F5730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::SetInterpolationMode(
        DirectComposition::CAffineTransform2DEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
