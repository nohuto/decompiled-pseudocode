/*
 * XREFs of ??0SceneMesh@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180132040
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMesh@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMesh@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180131EB0 (--$MakeAndInitialize2@VSceneMesh@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Detai.c)
 * Callees:
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneMesh *__fastcall Windows::UI::Composition::Scenes::SceneMesh::SceneMesh(
        Windows::UI::Composition::Scenes::SceneMesh *this)
{
  Windows::UI::Composition::Scenes::SceneObject::SceneObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneMesh::`vftable';
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Scenes::SceneMesh::Api::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  return this;
}
