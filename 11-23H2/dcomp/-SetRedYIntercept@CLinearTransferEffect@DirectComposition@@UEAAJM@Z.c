/*
 * XREFs of ?SetRedYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetRedYIntercept(
        DirectComposition::CLinearTransferEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
