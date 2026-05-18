/*
 * XREFs of ?SetGlobalScalar@ShaderManager@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180050748
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderManager::SetGlobalScalar(__int64 a1)
{
  return Spectre::Engine::ShaderPropertyBlock::SetScalar(*(_QWORD *)(a1 + 18648));
}
