/*
 * XREFs of ?SetGlobalColor@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UColor@Math@Utils@3@@Z @ 0x180050708
 * Callers:
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUColor@Math@Utils@3@@Z @ 0x1800853D8 (-SetColor@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 */

__int64 __fastcall Spectre::Engine::ShaderManager::SetGlobalColor(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetColor(*(_QWORD *)(a1 + 18648));
}
