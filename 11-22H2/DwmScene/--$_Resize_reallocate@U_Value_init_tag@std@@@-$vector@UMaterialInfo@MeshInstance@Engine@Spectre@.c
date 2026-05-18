/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A740 (--$_Resize@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x18002AF04 (--$_Get_size_of_n@$0FI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A92C (--$_Uninitialized_move@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004AA3C (--$_Uninitialized_value_construct_n@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std.c)
 *     ?_Calculate_growth@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18004CC90 (-_Calculate_growth@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInf.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 size_of; // rax
  char *v7; // rbx

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v4 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 3);
  v5 = std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Calculate_growth();
  size_of = std::_Get_size_of_n<88>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>((Spectre::Engine::MeshInstance::MaterialInfo *)&v7[88 * v4]);
  std::_Uninitialized_move<Spectre::Engine::MeshInstance::MaterialInfo *>(*a1, a1[1], v7);
  return std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Change_array(a1, v7, a2, v5);
}
