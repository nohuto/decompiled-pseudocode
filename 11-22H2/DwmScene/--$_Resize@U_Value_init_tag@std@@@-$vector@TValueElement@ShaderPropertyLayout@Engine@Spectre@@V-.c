/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800819A4
 * Callers:
 *     ?AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderPropertyType@23@I@Z @ 0x1800820CC (-AddArrayProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBV-$basic_str.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?AlignBuffer@ShaderPropertyLayout@Engine@Spectre@@AEAAXXZ @ 0x18008292C (-AlignBuffer@ShaderPropertyLayout@Engine@Spectre@@AEAAXXZ.c)
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 * Callees:
 *     ??$_Uninitialized_value_construct_n@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@_KAEAV?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081C24 (--$_Uninitialized_value_construct_n@V-$allocator@TValueElement@ShaderPropertyLayout@Engine@Spect.c)
 */

void __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Resize<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *a1;
  v4 = (a1[1] - *a1) >> 2;
  if ( a2 >= v4 )
  {
    if ( a2 <= v4 )
      return;
    if ( a2 > (a1[2] - v2) >> 2 )
    {
      std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Resize_reallocate<std::_Value_init_tag>(a1);
      return;
    }
    v5 = std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::ShaderPropertyLayout::ValueElement>>(
           a1[1],
           a2 - v4);
  }
  else
  {
    v5 = v2 + 4 * a2;
  }
  a1[1] = v5;
}
