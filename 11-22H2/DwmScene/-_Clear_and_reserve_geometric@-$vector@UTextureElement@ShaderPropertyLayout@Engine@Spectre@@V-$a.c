/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x180085C4C
 * Callers:
 *     ??$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083FF8 (--$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextureEleme.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@YAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU1234@AEAV?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@0@@Z @ 0x1800815D0 (--$_Destroy_range@V-$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@.c)
 *     ?_Calculate_growth@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18008388C (-_Calculate_growth@-$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V-$allocator@UT.c)
 */

char *__fastcall std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Clear_and_reserve_geometric(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x666666666666666LL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v3 = std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::ShaderPropertyLayout::TextureElement>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, 8 * ((a1[2] - *a1) >> 3));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<40>(v3);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = (__int64)v5;
  a1[1] = (__int64)v5;
  result = &v5[40 * v3];
  a1[2] = (__int64)result;
  return result;
}
