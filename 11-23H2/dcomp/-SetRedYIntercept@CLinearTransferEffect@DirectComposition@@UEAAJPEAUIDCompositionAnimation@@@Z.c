/*
 * XREFs of ?SetRedYIntercept@CLinearTransferEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffect::SetRedYIntercept(
        DirectComposition::CLinearTransferEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
