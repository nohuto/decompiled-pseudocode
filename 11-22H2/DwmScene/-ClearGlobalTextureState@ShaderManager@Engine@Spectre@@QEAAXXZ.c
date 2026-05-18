/*
 * XREFs of ?ClearGlobalTextureState@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x18004F684
 * Callers:
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ShaderManager::ClearGlobalTextureState(Spectre::Engine::ShaderPropertyBlock **this)
{
  Spectre::Engine::ShaderPropertyBlock::ClearTextureState(this[2331]);
}
