/*
 * XREFs of ?SetRed@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetRed(
        DirectComposition::CShadowEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           2u,
           a2);
}
