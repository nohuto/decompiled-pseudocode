/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@_KAEAV?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081C24
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800819A4 (--$_Resize@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180081A04 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::ShaderPropertyLayout::ValueElement>>(
        char *a1,
        __int64 a2)
{
  char *v3; // rbx

  v3 = a1;
  if ( a2 )
  {
    memset_0(a1, 0, 4 * a2);
    v3 += 4 * a2;
  }
  return v3;
}
