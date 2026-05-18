/*
 * XREFs of ?GetScope@ShaderPropertyLayout@Engine@Spectre@@QEBA?AW4EShaderPropertyScope@23@XZ @ 0x180083054
 * Callers:
 *     ?SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180061324 (-SetPropertyLayout@ShaderFamily@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@Engine@.c)
 *     ??0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180084404 (--0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VShaderPropertyLayout@Engine@Spectr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::GetScope(__int64 a1)
{
  return *(unsigned int *)(a1 + 48);
}
