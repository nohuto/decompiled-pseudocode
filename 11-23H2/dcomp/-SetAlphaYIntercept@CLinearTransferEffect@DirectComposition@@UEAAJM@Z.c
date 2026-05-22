/*
 * XREFs of ?SetAlphaYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z @ 0x1800F4580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetAlphaYIntercept(
        DirectComposition::CLinearTransferEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           9,
           a2);
}
