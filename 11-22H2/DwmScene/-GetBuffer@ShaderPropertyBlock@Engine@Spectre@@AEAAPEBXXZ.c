/*
 * XREFs of ?GetBuffer@ShaderPropertyBlock@Engine@Spectre@@AEAAPEBXXZ @ 0x180085090
 * Callers:
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 * Callees:
 *     <none>
 */

const void *__fastcall Spectre::Engine::ShaderPropertyBlock::GetBuffer(Spectre::Engine::ShaderPropertyBlock *this)
{
  return (const void *)*((_QWORD *)this + 4);
}
