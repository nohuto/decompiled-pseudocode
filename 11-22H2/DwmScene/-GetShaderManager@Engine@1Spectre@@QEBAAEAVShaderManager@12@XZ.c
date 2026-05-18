/*
 * XREFs of ?GetShaderManager@Engine@1Spectre@@QEBAAEAVShaderManager@12@XZ @ 0x1800347F0
 * Callers:
 *     ?CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z @ 0x1800183C0 (-CreateMaterial@SpectreRenderer@@UEAAJPEAPEAUISpectreMaterial@@@Z.c)
 *     ?InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z @ 0x180034A30 (-InitializeShaderManager@Engine@1Spectre@@IEAAXW4EShaderPlatform@12@@Z.c)
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z @ 0x18005B90C (-FlushShaderProperties@Camera@Engine@Spectre@@IEBAXH@Z.c)
 *     ?RenderScene@Camera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005C210 (-RenderScene@Camera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AE.c)
 *     ?ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18005CD30 (-ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 *     ?ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180064E70 (-ApplySceneStandardContent@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spec.c)
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 *     ?RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067B00 (-RenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEB.c)
 *     ?UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_NM@Z @ 0x180067E30 (-UpdateBackground@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std.c)
 *     ?UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x180068BA0 (-UpdateCameraEffectsDiagnostics@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x18006A5CC (-UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     std::_Func_impl_no_alloc__lambda_947c2138106fe11b43b65bbf065188b9__void_Spectre::Engine::ImageProcessingEffect_const_&_std::shared_ptr_Spectre::Engine::Texture__const_&_::_Do_call @ 0x18006E700 (std--_Func_impl_no_alloc__lambda_947c2138106fe11b43b65bbf065188b9__void_Spectre--En_ea_18006E700.c)
 *     ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC (-ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@Engine@.c)
 *     ?Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z @ 0x180072750 (-Create@ImageProcessingManager@Engine@Spectre@@QEAAXPEAVRenderDevice@23@@Z.c)
 *     ??0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z @ 0x18008D604 (--0ShadowMapCamera@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@I@Z.c)
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 *     ?CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z @ 0x180096160 (-CreateBloomResources@ImageProcessingEffectBloom@Engine@Spectre@@MEAAXPEAVRenderDevice@23@@Z.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 *     ?CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z @ 0x18009CAD4 (-CreateBlurResources@ImageProcessingEffectBlur@Engine@Spectre@@IEAAXPEAVRenderDevice@23@@Z.c)
 *     ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0 (-Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA-AV-$shared_ptr@VTexture@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::ShaderManager *__fastcall Spectre::Engine::Engine::GetShaderManager(
        Spectre::Engine::Engine *this)
{
  return (struct Spectre::Engine::ShaderManager *)*((_QWORD *)this + 64);
}
