/*
 * XREFs of ??4?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800845FC
 * Callers:
 *     ??0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180084404 (--0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VShaderPropertyLayout@Engine@Spectr.c)
 * Callees:
 *     ??$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083FF8 (--$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextureEleme.c)
 */

__int64 *__fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::operator=(
        __int64 *a1,
        __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Assign_range<Spectre::Engine::ShaderPropertyLayout::TextureElement *>(
      a1,
      *(_QWORD *)a2,
      *(const struct Spectre::Engine::ShaderPropertyLayout::TextureElement **)(a2 + 8));
  return a1;
}
