/*
 * XREFs of ?SetBlueYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z @ 0x1800F4B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetBlueYIntercept(
        DirectComposition::CLinearTransferEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           6,
           a2);
}
