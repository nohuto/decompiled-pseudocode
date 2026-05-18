/*
 * XREFs of ?SetShaderConstantBuffer@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800397DC
 * Callers:
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::CommandList::SetShaderConstantBuffer(__int64 a1)
{
  return Spectre::Engine::ConstantBufferState::SetShaderConstantBuffer(*(_QWORD *)(a1 + 96) + 1160LL);
}
