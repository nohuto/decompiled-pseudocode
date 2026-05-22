/*
 * XREFs of ?Release@SceneMetallicRoughnessMaterialFactory@Scenes@Composition@UI@Windows@@W7EAAKXZ @ 0x1800A9F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterialFactory::Release(__int64 a1)
{
  return Windows::UI::Composition::Scenes::SceneMeshFactory::Release((Windows::UI::Composition::Scenes::SceneMeshFactory *)(a1 - 8));
}
