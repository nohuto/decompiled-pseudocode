/*
 * XREFs of ??$?0VDefaultSceneNodeTraversal@Engine@Spectre@@$0A@@?$shared_ptr@VISceneNodeTraversal@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VDefaultSceneNodeTraversal@Engine@Spectre@@@1@@Z @ 0x180011DA0
 * Callers:
 *     ??$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLight@Engine@Spectre@@@std@@XZ @ 0x180011E04 (--$AddComponent@VLight@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLight@Eng.c)
 *     ??$AddComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VBounds@Engine@Spectre@@@std@@XZ @ 0x180013C74 (--$AddComponent@VBounds@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VBounds@E.c)
 *     ??$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VMeshInstance@Engine@Spectre@@@std@@XZ @ 0x180013D44 (--$AddComponent@VMeshInstance@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VMe.c)
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 *     ??$CreateOutput@VRenderOutputDwm@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@AEBKAEBKAEBKAEBM@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VRenderOutputDwm@@@std@@UOutputDescription@12@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@4@$$QEAV?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@4@AEBK33AEBM@Z @ 0x180015D28 (--$CreateOutput@VRenderOutputDwm@@AEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared.c)
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8 (-CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 *     ??$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@XZ @ 0x18002DAEC (--$AddComponent@VCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VCamera@E.c)
 *     _anonymous_namespace_::ForEachNode_Internal_std::function_void___cdecl(std::shared_ptr_Spectre::Engine::SceneNode_const___const_&)__std::shared_ptr_Spectre::Engine::SceneNode___ @ 0x18003F130 (_anonymous_namespace_--ForEachNode_Internal_std--function_void___cdecl(std--shared_ptr_Spectre--.c)
 *     ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584 (-UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spec.c)
 *     ?UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z @ 0x180042654 (-UpdateLayerBoundingBox@Scene@Engine@Spectre@@QEAAXAEAVSceneLayer@23@@Z.c)
 *     ?Clone@Light@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180043020 (-Clone@Light@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$shared_.c)
 *     ?Clone@Bounds@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18004A110 (-Clone@Bounds@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$shared.c)
 *     ?Clone@MeshInstance@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18004B470 (-Clone@MeshInstance@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$.c)
 *     ?Clone@LightProbe@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180051690 (-Clone@LightProbe@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$sh.c)
 *     ?Clone@Camera@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18005ADC0 (-Clone@Camera@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$shared.c)
 *     ??$?4VViewerCamera@Engine@Spectre@@@?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VViewerCamera@Engine@Spectre@@@1@@Z @ 0x1800617DC (--$-4VViewerCamera@Engine@Spectre@@@-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAAEAV01@AEBV-$.c)
 *     ??$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VAimer@Engine@Spectre@@@std@@XZ @ 0x180061878 (--$AddComponent@VAimer@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VAimer@Eng.c)
 *     ??$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VColorTransform@Engine@Spectre@@@std@@XZ @ 0x180061948 (--$AddComponent@VColorTransform@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x180061A68 (--$AddComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VLigh.c)
 *     ??$AddComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VShadowMapCamera@Engine@Spectre@@@std@@XZ @ 0x180061B88 (--$AddComponent@VShadowMapCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@.c)
 *     ??$AddComponent@VViewerCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VViewerCamera@Engine@Spectre@@@std@@XZ @ 0x180061CA8 (--$AddComponent@VViewerCamera@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VVi.c)
 *     ?ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180064B30 (-ApplyImageProcessing@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA?AV?$shared_ptr@USceneCustomData@Engine@Spectre@@@std@@AEBVScene@34@AEAV734@@Z @ 0x1800657E0 (-Clone@ViewerSceneData@ViewerEngine@Engine@Spectre@@UEAA-AV-$shared_ptr@USceneCustomData@Engine@.c)
 *     ?Clone@ShadowMapCamera@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18008DDC0 (-Clone@ShadowMapCamera@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI.c)
 *     ?Clone@ColorTransform@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x18008F740 (-Clone@ColorTransform@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV.c)
 *     ?Clone@ViewerCamera@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x180092260 (-Clone@ViewerCamera@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$.c)
 *     ?Clone@Aimer@Engine@Spectre@@UEBA?AV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV?$shared_ptr@VSceneNode@Engine@Spectre@@@5@@Z @ 0x1800966D0 (-Clone@Aimer@Engine@Spectre@@UEBA-AV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBIV-$shared_.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<Spectre::Engine::ISceneNodeTraversal>::shared_ptr<Spectre::Engine::ISceneNodeTraversal>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
