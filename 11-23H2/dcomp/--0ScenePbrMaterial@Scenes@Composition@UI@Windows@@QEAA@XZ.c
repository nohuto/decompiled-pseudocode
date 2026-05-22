/*
 * XREFs of ??0ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013F030
 * Callers:
 *     ??0SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013EFB8 (--0SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34 (--0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::ScenePbrMaterial *__fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::ScenePbrMaterial(
        Windows::UI::Composition::Scenes::ScenePbrMaterial *this)
{
  Windows::UI::Composition::Scenes::ScenePbrMaterial *result; // rax

  Windows::UI::Composition::Scenes::SceneObject::SceneObject(this);
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Scenes::SceneMaterialInput::Api::`vftable';
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::ScenePbrMaterial::`vftable';
  *((_QWORD *)this + 21) = &Windows::UI::Composition::Scenes::ScenePbrMaterial::Api::`vftable';
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 58) = 1065353216;
  *((_DWORD *)this + 59) = 1065353216;
  result = this;
  *((_DWORD *)this + 52) = 1056964608;
  return result;
}
