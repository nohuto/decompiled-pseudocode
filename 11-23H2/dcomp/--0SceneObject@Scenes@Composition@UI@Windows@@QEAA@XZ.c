/*
 * XREFs of ??0SceneObject@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180122D34
 * Callers:
 *     ??$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@W4MIL_RESOURCE_TYPE@@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVVisualReference@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@$$QEAW4MIL_RESOURCE_TYPE@@$$QEA_NAEAPEAX@Z @ 0x180121FC8 (--$MakeAndInitialize2@VVisualReference@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@34.c)
 *     ??0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ @ 0x180122D6C (--0VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0SceneMesh@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x180132040 (--0SceneMesh@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013332C (--0SceneMeshRendererComponent@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18013F030 (--0ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??0SceneNode@Scenes@Composition@UI@Windows@@QEAA@XZ @ 0x18014131C (--0SceneNode@Scenes@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@V12345@PEAVCompositor@345@@Details@WRL2@Microsoft@@YAJPEAPEAVSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@$$QEAPEAVCompositor@567@@Z @ 0x180144EFC (--$MakeAndInitialize2@VSceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@V12345@PEAVCompo.c)
 *     ??$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@_NAEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVInteropVisualReference@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@$$QEA_NAEAPEAX@Z @ 0x18015C080 (--$MakeAndInitialize2@VInteropVisualReference@Composition@UI@Windows@@V1234@PEAVInteropComposito.c)
 * Callees:
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::Scenes::SceneObject *__fastcall Windows::UI::Composition::Scenes::SceneObject::SceneObject(
        Windows::UI::Composition::Scenes::SceneObject *this)
{
  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::Scenes::SceneObject::`vftable';
  *((_QWORD *)this + 17) = &Windows::UI::Composition::Internal::VisualReference::Api::`vftable';
  return this;
}
