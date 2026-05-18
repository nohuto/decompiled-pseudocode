/*
 * XREFs of ?GetGlobalProperties@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x18004FA88
 * Callers:
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ @ 0x18006A5CC (-UpdateFrameConstants@ViewerEngine@Engine@Spectre@@AEAAXXZ.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@V45@@Z @ 0x1800725CC (-ApplySpecialEffects@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@Engine@.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@std@@XZ @ 0x180082964 (-CreateBlock@ShaderPropertyLayout@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyBlock@Engin.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderManager::GetGlobalProperties(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    a2,
    (_QWORD *)(a1 + 18648));
  return v2;
}
