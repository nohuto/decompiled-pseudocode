/*
 * XREFs of ?SetStandardDeviation@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F6160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetStandardDeviation(
        DirectComposition::CShadowEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           0,
           a2);
}
