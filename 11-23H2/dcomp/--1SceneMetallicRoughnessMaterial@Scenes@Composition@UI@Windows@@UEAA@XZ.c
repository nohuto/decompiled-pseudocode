/*
 * XREFs of ??1SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ @ 0x18013F0A8
 * Callers:
 *     ??_ESceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18013F180 (--_ESceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::~SceneMetallicRoughnessMaterial(
        Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 33);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(this + 32);
  Windows::UI::Composition::Scenes::ScenePbrMaterial::~ScenePbrMaterial((Windows::UI::Composition::Scenes::ScenePbrMaterial *)this);
}
