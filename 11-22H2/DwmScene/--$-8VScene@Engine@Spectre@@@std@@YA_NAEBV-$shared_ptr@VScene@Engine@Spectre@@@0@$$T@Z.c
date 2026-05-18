/*
 * XREFs of ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0
 * Callers:
 *     ?SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180012AA0 (-SetParent@SpectreLightNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ?SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z @ 0x180015190 (-SetParent@SpectreNode@@UEAAJPEAUISpectreNode@@@Z.c)
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 *     ?GetTweenManager@Engine@1Spectre@@QEBA?AV?$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std@@AEBV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x1800348A4 (-GetTweenManager@Engine@1Spectre@@QEBA-AV-$shared_ptr@VTweenManager@Tweening@Utils@Spectre@@@std.c)
 *     ?SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z @ 0x180036A54 (-SendShutdownOrSuspendTelemetry@Engine@1Spectre@@IEAAX_N@Z.c)
 *     ?Clone@SceneNode@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z @ 0x18003B950 (-Clone@SceneNode@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@IV45@@Z.c)
 *     ?GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z @ 0x18003C050 (-GetNextInTree@SceneNode@Engine@Spectre@@AEAAPEAV123@PEBV123@@Z.c)
 *     ?SetParent@SceneNode@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18003D484 (-SetParent@SceneNode@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_K0V?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040230 (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_K0V-$shared.c)
 *     ?AddNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z @ 0x18004033C (-AddNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@@Z.c)
 *     ?AddNodeInternal@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV45@AEBV?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@@Z @ 0x180040548 (-AddNodeInternal@Scene@Engine@Spectre@@AEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_KV4.c)
 *     ?DeregisterNode@Scene@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180040BD8 (-DeregisterNode@Scene@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?GetRootNode@Scene@Engine@Spectre@@QEBA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@@Z @ 0x18004126C (-GetRootNode@Scene@Engine@Spectre@@QEBA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$basic.c)
 *     ?InsertNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x1800414F0 (-InsertNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?PostUpdate@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800418A4 (-PostUpdate@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spect.c)
 *     ?RegisterNode@Scene@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041920 (-RegisterNode@Scene@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?RemoveNode@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041AA0 (-RemoveNode@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ?SetNodeParent@Scene@Engine@Spectre@@QEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z @ 0x180041EB0 (-SetNodeParent@Scene@Engine@Spectre@@QEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@0@Z.c)
 *     ?Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x1800421F0 (-Update@Scene@Engine@Spectre@@AEAAXAEBVFrameData@23@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@.c)
 *     ?UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@AEAUBoundingBox@DirectX@@AEA_N@Z @ 0x180042584 (-UpdateBoundingBoxRecursive@Scene@Engine@Spectre@@SAXAEBV-$shared_ptr@$$CBVSceneNode@Engine@Spec.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?AddExtension@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@std@@@Z @ 0x18004EF08 (-AddExtension@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VIShaderExtension@Engine@Spectre@.c)
 *     ?GetShader@ShaderManager@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z @ 0x18004FE4C (-GetShader@ShaderManager@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@V-$ba.c)
 *     ?AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180054610 (-AttachDevice@Sampler@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060780 (-EndDeclaration@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     ?UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006B21C (-UpdateLightingFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engin.c)
 *     ?UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@IAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18006D03C (-UpdatePlanarReflection@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre.c)
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?GetShader@ShaderPipeline@Engine@Spectre@@QEBA?AV?$shared_ptr@VShader@Engine@Spectre@@@std@@W4EShaderType@23@@Z @ 0x1800873D4 (-GetShader@ShaderPipeline@Engine@Spectre@@QEBA-AV-$shared_ptr@VShader@Engine@Spectre@@@std@@W4ES.c)
 *     ?AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008AC60 (-AttachDevice@Shader@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@.c)
 *     ?Load@Shader@Engine@Spectre@@QEAA_NAEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008B028 (-Load@Shader@Engine@Spectre@@QEAA_NAEBV-$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z.c)
 *     ?ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008DB9C (-ApplyRenderState@ShadowMapCamera@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spe.c)
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?ResolveReadableTexture@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@34@@Z @ 0x1800D6F10 (-ResolveReadableTexture@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA_NAEBV-$shared_ptr@VCommandLi.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::operator==<Spectre::Engine::Scene>(_QWORD *a1)
{
  return *a1 == 0LL;
}
