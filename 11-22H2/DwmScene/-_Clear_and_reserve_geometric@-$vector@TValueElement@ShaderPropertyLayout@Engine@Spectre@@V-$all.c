/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085BC0
 * Callers:
 *     ??$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083F98 (--$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@TValueElement@S.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180017028 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEBA_K_K@Z @ 0x18001F4CC (-_Calculate_growth@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@A.c)
 */

char *__fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Clear_and_reserve_geometric(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v3 = std::vector<enum D3D_FEATURE_LEVEL>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[4 * v3];
  a1[2] = result;
  return result;
}
