/*
 * XREFs of ?SetShaderPipeline@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@Z @ 0x1800397F4
 * Callers:
 *     ?ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4Sides@123@VShaderTypeGroup@23@_N@Z @ 0x180086A7C (-ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::CommandList::SetShaderPipeline(__int64 a1)
{
  return Spectre::Engine::ShaderState::SetPipeline(*(_QWORD *)(a1 + 96));
}
