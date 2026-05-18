/*
 * XREFs of ?GetBufferSizeBytes@ShaderPropertyBlock@Engine@Spectre@@AEBAIXZ @ 0x18008509C
 * Callers:
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 *     ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0 (-AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::GetBufferSizeBytes(Spectre::Engine::ShaderPropertyBlock *this)
{
  return (*((_DWORD *)this + 10) - *((_DWORD *)this + 8)) & 0xFFFFFFFC;
}
