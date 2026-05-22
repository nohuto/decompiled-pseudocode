/*
 * XREFs of ??0SceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013EFB8
 * Callers:
 *     ??$MakeAndInitialize2@VSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x18013EC74 (--$MakeAndInitialize2@VSceneMetallicRoughnessMaterial@Scenes@Composition@UI@Windows@@V12345@PEAV.c)
 * Callees:
 *     ??0ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013F030 (--0ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial *__fastcall Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::SceneMetallicRoughnessMaterial(
        Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial *this)
{
  Windows::UI::Composition::Scenes::ScenePbrMaterial::ScenePbrMaterial(this);
  *((_DWORD *)this + 71) = 1065353216;
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::`vftable';
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 30) = &Windows::UI::Composition::Scenes::SceneMetallicRoughnessMaterial::Api::`vftable';
  *((_DWORD *)this + 68) = 1043878380;
  *((_DWORD *)this + 69) = 1043878380;
  *((_DWORD *)this + 70) = 1043878380;
  *((_DWORD *)this + 72) = 1025758986;
  *((_DWORD *)this + 73) = 1025758986;
  return this;
}
