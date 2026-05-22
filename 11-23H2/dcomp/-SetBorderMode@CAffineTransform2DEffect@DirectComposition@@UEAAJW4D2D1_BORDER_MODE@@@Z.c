/*
 * XREFs of ?SetBorderMode@CAffineTransform2DEffect@DirectComposition@@UEAAJW4D2D1_BORDER_MODE@@@Z @ 0x1800F4B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffect::SetBorderMode(
        DirectComposition::CAffineTransform2DEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           1,
           a2);
}
