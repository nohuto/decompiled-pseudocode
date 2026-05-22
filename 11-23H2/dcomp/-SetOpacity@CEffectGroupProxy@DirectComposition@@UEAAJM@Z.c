/*
 * XREFs of ?SetOpacity@CEffectGroupProxy@DirectComposition@@UEAAJM@Z @ 0x180012C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectGroupProxy::SetOpacity(
        DirectComposition::CEffectGroupProxy *this,
        float a2)
{
  return DirectComposition::CResourceProxy::SetScalarFloatProperty(
           (DirectComposition::CEffectGroupProxy *)((char *)this + 8),
           0,
           a2);
}
