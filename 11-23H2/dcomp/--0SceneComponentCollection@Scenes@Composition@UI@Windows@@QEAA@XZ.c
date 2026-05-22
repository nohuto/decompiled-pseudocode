/*
 * XREFs of ??0SceneComponentCollection@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x1801412A4
 * Callers:
 *     ??$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCompositor@345@PEAVSceneNode@2345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneComponentCollection@Scenes@Composition@UI@Windows@@AEAPEAVCompositor@567@$$QEAPEAVSceneNode@4567@@Z @ 0x180140294 (--$MakeAndInitialize2@VSceneComponentCollection@Scenes@Composition@UI@Windows@@V12345@AEAPEAVCom.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneComponentCollection *__fastcall Windows::UI::Composition::Scenes::SceneComponentCollection::SceneComponentCollection(
        Windows::UI::Composition::Scenes::SceneComponentCollection *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneComponentCollection::`vftable'{for `Windows::UI::Composition::CompositionObject'};
  *((_QWORD *)this + 16) = &Windows::UI::Composition::Scenes::SceneComponentCollection::`vftable'{for `Windows::UI::Composition::VectorBasedCollection<Microsoft::WRL2::RefPtr<Windows::UI::Composition::Scenes::SceneComponent>>'};
  *((_QWORD *)this + 20) = &Windows::UI::Composition::Scenes::SceneNodeCollection::ApiSceneObject::`vftable';
  *((_QWORD *)this + 22) = &Windows::UI::Composition::Scenes::SceneComponentCollection::Api::`vftable'{for `Windows::Foundation::Collections::IVector<Windows::UI::Composition::Scenes::SceneComponent *>'};
  *((_QWORD *)this + 23) = &Windows::UI::Composition::Scenes::SceneComponentCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::Scenes::SceneComponent *>>'};
  return this;
}
