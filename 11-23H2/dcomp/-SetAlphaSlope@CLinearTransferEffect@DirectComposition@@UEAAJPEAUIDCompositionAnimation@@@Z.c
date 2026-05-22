/*
 * XREFs of ?SetAlphaSlope@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F44C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetAlphaSlope(
        DirectComposition::CLinearTransferEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0xAu,
           a2);
}
