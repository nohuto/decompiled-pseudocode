/*
 * XREFs of ?SetBorderMode@CGaussianBlurEffect@DirectComposition@@UEAAJW4D2D1_BORDER_MODE@@@Z @ 0x1800F4B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffect::SetBorderMode(
        DirectComposition::CGaussianBlurEffect *this,
        unsigned int a2)
{
  return DirectComposition::CResourceProxy::SetScalarIntegerProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2,
           a2);
}
