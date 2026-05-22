/*
 * XREFs of ?SetTransform3D@CEffectGroupProxy@DirectComposition@@UEAAJPEAUIDCompositionTransform3D@@@Z @ 0x1800F62E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectGroupProxy::SetTransform3D(
        DirectComposition::CEffectGroupProxy *this,
        struct IUnknown *a2)
{
  return DirectComposition::CResourceProxy::SetReferenceProperty(
           (DirectComposition::CEffectGroupProxy *)((char *)this + 8),
           2,
           a2);
}
