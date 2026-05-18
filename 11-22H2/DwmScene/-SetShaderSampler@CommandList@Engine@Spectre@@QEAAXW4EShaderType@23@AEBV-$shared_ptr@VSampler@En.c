/*
 * XREFs of ?SetShaderSampler@CommandList@Engine@Spectre@@QEAAXW4EShaderType@23@AEBV?$shared_ptr@VSampler@Engine@Spectre@@@std@@I@Z @ 0x180039804
 * Callers:
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::CommandList::SetShaderSampler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return Spectre::Engine::TextureState::SetShaderTexture(*(_QWORD *)(a1 + 96) + 9848LL, a2, a3, a4, a5, a6);
}
