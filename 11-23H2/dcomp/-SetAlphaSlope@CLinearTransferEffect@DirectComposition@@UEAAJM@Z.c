/*
 * XREFs of ?SetAlphaSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z @ 0x1800F44A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetAlphaSlope(
        DirectComposition::CLinearTransferEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           10,
           a2);
}
