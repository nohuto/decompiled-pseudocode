/*
 * XREFs of ??4?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800845D0
 * Callers:
 *     ??0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x180084404 (--0ShaderPropertyBlock@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VShaderPropertyLayout@Engine@Spectr.c)
 * Callees:
 *     ??$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083F98 (--$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@TValueElement@S.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
    std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Assign_range<Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
      a1,
      *(void **)a2,
      *(_QWORD *)(a2 + 8));
  return a1;
}
