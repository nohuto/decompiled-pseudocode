/*
 * XREFs of ?SetBlueSlope@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetBlueSlope(
        DirectComposition::CLinearTransferEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           7u,
           a2);
}
