/*
 * XREFs of ?SetBlue@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F49B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetBlue(
        DirectComposition::CShadowEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           4u,
           a2);
}
