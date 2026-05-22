/*
 * XREFs of ?SetAngle@CHueRotationEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F45E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHueRotationEffect::SetAngle(
        DirectComposition::CHueRotationEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
