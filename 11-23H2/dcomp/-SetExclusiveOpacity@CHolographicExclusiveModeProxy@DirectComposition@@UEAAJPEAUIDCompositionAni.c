/*
 * XREFs of ?SetExclusiveOpacity@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z @ 0x1800E7880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeProxy::SetExclusiveOpacity(
        DirectComposition::CHolographicExclusiveModeProxy *this,
        struct IDCompositionAnimation *a2)
{
  return DirectComposition::CResourceProxy::SetAnimationProperty(
           (DirectComposition::CHolographicExclusiveModeProxy *)((char *)this + 8),
           1u,
           a2);
}
