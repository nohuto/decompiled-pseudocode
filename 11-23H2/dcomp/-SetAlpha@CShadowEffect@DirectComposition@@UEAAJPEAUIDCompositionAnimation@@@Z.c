/*
 * XREFs of ?SetAlpha@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F4400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetAlpha(
        DirectComposition::CShadowEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           5u,
           a2);
}
