/*
 * XREFs of ??0SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013332C
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180133104 (--$MakeAndInitialize2@VSceneMeshRendererComponent@Scenes@Composition@UI@Windows@@V12345@PEAVComp.c)
 * Callees:
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneMeshRendererComponent *__fastcall Windows::UI::Composition::Scenes::SceneMeshRendererComponent::SceneMeshRendererComponent(
        Windows::UI::Composition::Scenes::SceneMeshRendererComponent *this)
{
  Windows::UI::Composition::Scenes::SceneMeshRendererComponent *result; // rax

  Windows::UI::Composition::Scenes::SceneObject::SceneObject(this);
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Scenes::SceneComponent::Api::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Scenes::SceneRendererComponent::Api::`vftable';
  *((_BYTE *)this + 200) &= 0xFCu;
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneMeshRendererComponent::`vftable'{for `Windows::UI::Composition::Scenes::SceneRendererComponent'};
  *((_QWORD *)this + 23) = &Windows::UI::Composition::Scenes::SceneMeshRendererComponent::`vftable'{for `DirectComposition::CRebuildableObject'};
  *((_QWORD *)this + 27) = &Windows::UI::Composition::Scenes::SceneMeshRendererComponent::Api::`vftable';
  result = this;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
