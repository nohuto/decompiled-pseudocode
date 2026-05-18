/*
 * XREFs of ?SetVector4@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x1800859E4
 * Callers:
 *     ?SetVector4@Material@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUVector4@Math@Utils@3@@Z @ 0x180044A9C (-SetVector4@Material@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UVector4@Math@Utils@3@@Z @ 0x1800507D4 (-SetGlobalVector4@ShaderManager@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 *     ?UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignetteBlendMode@23@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@AEAV?$shared_ptr@VShaderPropertyBlock@Engine@Spectre@@@6@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@333@Z @ 0x18006AD5C (-UpdateImageProcessingVignetteConstants@ViewerEngine@Engine@Spectre@@AEAAXMMMMMMMMMMMW4EVignette.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 *     ?OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18007DF80 (-OnFrameRender@StandardShaderExtension@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VCamera@Engine@Spec.c)
 * Callees:
 *     ?FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180082C98 (-FindPropertyChecked@ShaderPropertyLayout@Engine@Spectre@@QEBA-AW4ShaderProperty@23@AEBV-$basic_.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetVector4(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int16 PropertyChecked; // ax

  PropertyChecked = Spectre::Engine::ShaderPropertyLayout::FindPropertyChecked(*(_QWORD *)(a1 + 16), a2);
  return Spectre::Engine::ShaderPropertyBlock::SetVector4(a1, PropertyChecked, a3);
}
