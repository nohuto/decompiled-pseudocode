/*
 * XREFs of ?SetStandardDeviation@CGaussianBlurEffect@DirectComposition@@UEAAJM@Z @ 0x1800F6100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffect::SetStandardDeviation(
        DirectComposition::CGaussianBlurEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
