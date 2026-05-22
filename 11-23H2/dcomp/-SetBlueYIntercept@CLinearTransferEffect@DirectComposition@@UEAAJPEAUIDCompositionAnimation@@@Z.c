/*
 * XREFs of ?SetBlueYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetBlueYIntercept(
        DirectComposition::CLinearTransferEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           6u,
           a2);
}
