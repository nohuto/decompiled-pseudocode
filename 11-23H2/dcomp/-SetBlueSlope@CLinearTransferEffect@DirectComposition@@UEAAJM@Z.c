/*
 * XREFs of ?SetBlueSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z @ 0x1800F4A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetBlueSlope(
        DirectComposition::CLinearTransferEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           7,
           a2);
}
