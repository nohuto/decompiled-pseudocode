/*
 * XREFs of ?SetVertexLayout@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18003993C
 * Callers:
 *     ?ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4Sides@123@VShaderTypeGroup@23@_N@Z @ 0x180086A7C (-ApplyState@ShaderPipeline@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@s.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::CommandList::SetVertexLayout(__int64 a1)
{
  return Spectre::Engine::VertexLayoutState::SetVertexLayout(*(_QWORD *)(a1 + 96) + 9776LL);
}
