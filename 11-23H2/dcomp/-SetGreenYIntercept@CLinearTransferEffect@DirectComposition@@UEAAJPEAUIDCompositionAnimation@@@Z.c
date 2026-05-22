/*
 * XREFs of ?SetGreenYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetGreenYIntercept(
        DirectComposition::CLinearTransferEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3u,
           a2);
}
