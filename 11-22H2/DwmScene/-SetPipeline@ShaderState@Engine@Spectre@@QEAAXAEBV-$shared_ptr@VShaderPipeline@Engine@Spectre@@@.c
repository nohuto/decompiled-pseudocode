/*
 * XREFs of ?SetPipeline@ShaderState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x18009DB40
 * Callers:
 *     ?SetShaderPipeline@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800397F4 (-SetShaderPipeline@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VShaderPipeline@Engine@Spec.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Spectre::Engine::ShaderState::SetPipeline(__int64 a1, _QWORD *a2)
{
  return std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 8), a2);
}
