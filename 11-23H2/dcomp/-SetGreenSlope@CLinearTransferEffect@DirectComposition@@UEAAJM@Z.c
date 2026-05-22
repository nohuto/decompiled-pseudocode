/*
 * XREFs of ?SetGreenSlope@CLinearTransferEffect@DirectComposition@@UEAAJM@Z @ 0x1800F5390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetGreenSlope(
        DirectComposition::CLinearTransferEffect *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4,
           a2);
}
