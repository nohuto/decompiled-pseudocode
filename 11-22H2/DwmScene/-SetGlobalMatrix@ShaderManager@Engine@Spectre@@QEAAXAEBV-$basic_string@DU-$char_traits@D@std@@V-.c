/*
 * XREFs of ?SetGlobalMatrix@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UMatrix@Math@Utils@3@@Z @ 0x18005072C
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 *     ?ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x18005CD30 (-ResolveReadableDepth@Camera@Engine@Spectre@@IEBA_NAEBV-$shared_ptr@VCommandList@Engine@Spectre@.c)
 * Callees:
 *     ?SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUMatrix@Math@Utils@3@@Z @ 0x1800854E4 (-SetMatrix@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 */

__int64 __fastcall Spectre::Engine::ShaderManager::SetGlobalMatrix(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetMatrix(*(_QWORD *)(a1 + 18648));
}
