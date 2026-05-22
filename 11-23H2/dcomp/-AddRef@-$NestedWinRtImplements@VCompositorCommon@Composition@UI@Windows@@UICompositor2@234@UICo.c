/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositor2@234@UICompositor4@234@UICompositor5@234@UICompositor6@234@UICompositor7@234@UICompositor8@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800ABAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositor2,Windows::UI::Composition::ICompositor4,Windows::UI::Composition::ICompositor5,Windows::UI::Composition::ICompositor6,Windows::UI::Composition::ICompositor7,Windows::UI::Composition::ICompositor8>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneModelTransform,Windows::UI::Composition::Scenes::ISceneModelTransform>::AddRef(a1 - 24);
}
