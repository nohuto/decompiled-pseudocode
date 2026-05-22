/*
 * XREFs of ?Release@?$NestedWinRtImplements@VSceneComponentCollection@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$IIterable@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@785@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800B0580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Scenes::SceneComponentCollection,Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>::Release(
        __int64 a1)
{
  return Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InteropVisualReferenceController,IDCompositionVisualReferenceControllerPartner>::Release(a1 - 8);
}
