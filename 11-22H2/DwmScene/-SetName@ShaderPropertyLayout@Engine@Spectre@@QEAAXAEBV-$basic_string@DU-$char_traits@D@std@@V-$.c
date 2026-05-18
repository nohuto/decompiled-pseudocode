/*
 * XREFs of ?SetName@ShaderPropertyLayout@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18008341C
 * Callers:
 *     ?Startup@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800509E8 (-Startup@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 * Callees:
 *     <none>
 */

void **__fastcall Spectre::Engine::ShaderPropertyLayout::SetName(__int64 a1, void **a2)
{
  return std::string::operator=((void **)(a1 + 16), a2);
}
