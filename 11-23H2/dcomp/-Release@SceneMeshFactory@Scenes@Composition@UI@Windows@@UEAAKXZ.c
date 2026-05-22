/*
 * XREFs of ?Release@SceneMeshFactory@Scenes@Composition@UI@Windows@@UEAAKXZ @ 0x180102BD0
 * Callers:
 *     ?Release@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@W7EAAKXZ @ 0x1800A9F50 (-Release@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@W7EAAKXZ.c)
 *     ?Release@SceneMeshRendererComponentFactory@Scenes@Composition@UI@Windows@@WCI@EAAKXZ @ 0x1800A9F70 (-Release@SceneMeshRendererComponentFactory@Scenes@Composition@UI@Windows@@WCI@EAAKXZ.c)
 *     ?Release@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@WDI@EAAKXZ @ 0x1800AB370 (-Release@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::UI::Composition::Scenes::SceneMeshFactory::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Scenes::ISceneMeshStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
           this,
           a2);
}
