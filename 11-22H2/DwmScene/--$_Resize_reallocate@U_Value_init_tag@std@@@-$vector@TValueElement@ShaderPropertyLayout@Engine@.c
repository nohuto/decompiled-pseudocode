/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180081A04
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800819A4 (--$_Resize@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEBA_K_K@Z @ 0x18001F4CC (-_Calculate_growth@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@A.c)
 *     ??$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@00@Z @ 0x180081560 (--$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValu.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@_KAEAV?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x180081C24 (--$_Uninitialized_value_construct_n@V-$allocator@TValueElement@ShaderPropertyLayout@Engine@Spect.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Resize_reallocate<std::_Value_init_tag>(
        void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 size_of; // rax
  char *v7; // rbx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<enum D3D_FEATURE_LEVEL>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::ShaderPropertyLayout::ValueElement>>(
    &v7[4 * v4],
    a2 - v4);
  std::_Copy_memmove<Spectre::Engine::ShaderPropertyLayout::ValueElement *,Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
    *a1,
    (__int64)a1[1],
    v7);
  return std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Change_array(a1, v7, a2, v5);
}
