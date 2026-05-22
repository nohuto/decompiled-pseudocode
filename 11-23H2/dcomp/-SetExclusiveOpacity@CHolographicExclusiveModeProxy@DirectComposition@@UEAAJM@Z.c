/*
 * XREFs of ?SetExclusiveOpacity@CHolographicExclusiveModeProxy@DirectComposition@@UEAAJM@Z @ 0x1800E7860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveModeProxy::SetExclusiveOpacity(
        DirectComposition::CHolographicExclusiveModeProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CHolographicExclusiveModeProxy *)((char *)this + 8),
           1,
           a2);
}
