/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18004CD64
 * Callers:
 *     ??$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18004A5A0 (--$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@-$vector@UMaterialInfo@MeshInsta.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UVector4@Math@Utils@Spectre@@V?$allocator@UVector4@Math@Utils@Spectre@@@std@@@std@@CAXXZ @ 0x180011B80 (-_Xlength@-$vector@UVector4@Math@Utils@Spectre@@V-$allocator@UVector4@Math@Utils@Spectre@@@std@@.c)
 *     ??$_Get_size_of_n@$0FI@@std@@YA_K_K@Z @ 0x18002AF04 (--$_Get_size_of_n@$0FI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 *     ?_Calculate_growth@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEBA_K_K@Z @ 0x18004CC90 (-_Calculate_growth@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInf.c)
 */

char *__fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Clear_and_reserve_geometric(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 size_of; // rax
  char *result; // rax

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    std::vector<Spectre::Utils::Math::Vector4>::_Xlength();
  v3 = std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Calculate_growth((_QWORD *)a1, a2);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(
      *(Spectre::Engine::MeshInstance::MaterialInfo **)a1,
      *(Spectre::Engine::MeshInstance::MaterialInfo **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  size_of = std::_Get_size_of_n<88>(v3);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = &result[88 * v3];
  return result;
}
