/*
 * XREFs of ??$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083F98
 * Callers:
 *     ??4?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800845D0 (--4-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@TValueElement@Shader.c)
 * Callees:
 *     ??$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@00@Z @ 0x180081560 (--$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValu.c)
 *     ?_Clear_and_reserve_geometric@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085BC0 (-_Clear_and_reserve_geometric@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-$all.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Assign_range<Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2) )
    std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Clear_and_reserve_geometric();
  result = std::_Copy_memmove<Spectre::Engine::ShaderPropertyLayout::ValueElement *,Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
             a2,
             a3,
             *(void **)a1);
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
