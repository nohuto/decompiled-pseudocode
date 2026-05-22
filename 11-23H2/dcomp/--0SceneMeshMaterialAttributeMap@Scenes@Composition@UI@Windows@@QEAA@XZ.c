/*
 * XREFs of ??0SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x1801332C4
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneMeshRendererComponent@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneMeshRendererComponent@4567@@Z @ 0x180133048 (--$MakeAndInitialize2@VSceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@V12345@AEAPE.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap *__fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::SceneMeshMaterialAttributeMap(
        Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Scenes::SceneBoundingBox::ApiSceneObject::`vftable';
  *((_QWORD *)this + 18) = &Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Api::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Api::`vftable'{for `Windows::Foundation::Collections::IMap<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,enum Windows::UI::Composition::Scenes::SceneAttributeSemantic> *>>'};
  return this;
}
