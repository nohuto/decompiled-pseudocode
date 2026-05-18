/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058CA0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180058C18 (--$_Resize@U_Value_init_tag@std@@@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@U.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058EC4 (--$_Uninitialized_move@PEAURenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@Ca.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@YAPEAURenderPassInfo@Camera@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@0@@Z @ 0x180058F4C (--$_Uninitialized_value_construct_n@V-$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@s.c)
 *     ?_Calculate_growth@?$vector@URenderPassInfo@Camera@Engine@Spectre@@V?$allocator@URenderPassInfo@Camera@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18005E5F0 (-_Calculate_growth@-$vector@URenderPassInfo@Camera@Engine@Spectre@@V-$allocator@URenderPassInfo@.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 size_of; // rax
  char *v7; // rbx

  if ( a2 > 0x555555555555555LL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  v5 = std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<48>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::Camera::RenderPassInfo>>(&v7[48 * v4], a2 - v4);
  std::_Uninitialized_move<Spectre::Engine::Camera::RenderPassInfo *>(*a1, a1[1], v7);
  return std::vector<Spectre::Engine::Camera::RenderPassInfo>::_Change_array(a1, v7, a2, v5);
}
