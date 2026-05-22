/*
 * XREFs of ?SetGreen@CShadowEffect@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800F5330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CShadowEffect::SetGreen(
        DirectComposition::CShadowEffect *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 9) + 8LL),
           3u,
           a2);
}
