/*
 * XREFs of ?GetScene@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x18001265C
 * Callers:
 *     ?GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180012690 (-GetWorldTransform@SpectreLightNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z.c)
 *     ?SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x1800129D0 (-SetLocalTransform@SpectreLightNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z @ 0x180012F60 (-SetTransform@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_3F@@0@Z.c)
 *     ?Initialize@SpectreMeshComponent@@IEAAXXZ @ 0x1800143FC (-Initialize@SpectreMeshComponent@@IEAAXXZ.c)
 *     ?SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z @ 0x1800144E0 (-SetMaterial@SpectreMeshComponent@@UEAAJPEAUISpectreMaterial@@@Z.c)
 *     ?SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z @ 0x180014650 (-SetMesh@SpectreMeshComponent@@UEAAJPEAUISpectreMesh@@@Z.c)
 *     ?Uninitialize@SpectreMeshComponent@@IEAAXXZ @ 0x180014790 (-Uninitialize@SpectreMeshComponent@@IEAAXXZ.c)
 *     ?UpdateBounds@SpectreMeshComponent@@UEAAJXZ @ 0x1800148B0 (-UpdateBounds@SpectreMeshComponent@@UEAAJXZ.c)
 *     ?AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z @ 0x180014CA0 (-AddNode@SpectreNode@@UEAAJPEAPEAUISpectreNode@@@Z.c)
 *     ?GetWorldTransform@SpectreNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z @ 0x180014E10 (-GetWorldTransform@SpectreNode@@UEBAJPEAUXMMATRIX@DirectX@@@Z.c)
 *     ?RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z @ 0x180014FF0 (-RemoveNode@SpectreNode@@UEAAXPEAUISpectreNode@@@Z.c)
 *     ?SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z @ 0x180015090 (-SetLocalTransform@SpectreNode@@UEAAJAEBUXMMATRIX@DirectX@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?FindWorld@SpectreRenderer@@QEBAPEAVSpectreWorld@@PEAVSceneNode@Engine@Spectre@@@Z @ 0x180018900 (-FindWorld@SpectreRenderer@@QEBAPEAVSpectreWorld@@PEAVSceneNode@Engine@Spectre@@@Z.c)
 *     ?AddCamera@Engine@1Spectre@@QEAA_KV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x1800326EC (-AddCamera@Engine@1Spectre@@QEAA_KV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?Clone@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z @ 0x18003B950 (-Clone@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z.c)
 *     ?RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@AEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18003D310 (-RenderSymbols@SceneNode@Engine@Spectre@@AEBAX_KAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x18003DF88 (-TryAttachToScene@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ?VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2B0 (-VerifyReadAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ @ 0x18003E2F0 (-VerifyWriteAccess@SceneNode@Engine@Spectre@@QEBAXXZ.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@Math@Utils@3@1W4EViewportMode@Camera@23@@Z @ 0x180057470 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@UVector2@.c)
 *     ?GetSceneLockless@Display@Engine@Spectre@@AEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180057A00 (-GetSceneLockless@Display@Engine@Spectre@@AEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?PreRenderCamera@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x1800672D0 (-PreRenderCamera@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std.c)
 *     ?UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@_N1@Z @ 0x18006B874 (-UpdateModelFromCameraConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VViewerCa.c)
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 *     ?OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180080C30 (-OnFrameRender@BackgroundUnlitShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engi.c)
 *     ?PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x18008E390 (-PostUpdate@ShadowMapCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ @ 0x180093110 (-StartIdleRotation@ViewerCamera@Engine@Spectre@@MEAAXXZ.c)
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??$_Construct_from_weak@VScene@Engine@Spectre@@@?$_Ptr_base@VScene@Engine@Spectre@@@std@@IEAA_NAEBV?$weak_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180010974 (--$_Construct_from_weak@VScene@Engine@Spectre@@@-$_Ptr_base@VScene@Engine@Spectre@@@std@@IEAA_NA.c)
 */

__int64 __fastcall Spectre::Engine::SceneNode::GetScene(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<Spectre::Engine::Scene>::_Construct_from_weak<Spectre::Engine::Scene>((__int64)a2, a1 + 72);
  return v2;
}
