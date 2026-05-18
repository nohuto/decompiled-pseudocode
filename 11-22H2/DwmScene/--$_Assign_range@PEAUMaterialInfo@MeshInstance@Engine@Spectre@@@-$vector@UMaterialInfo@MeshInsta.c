/*
 * XREFs of ??$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18004A5A0
 * Callers:
 *     ?CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18004B500 (-CloneInternal@MeshInstance@Engine@Spectre@@EEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@00@Z @ 0x18004A674 (--$_Copy_unchecked@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@@std@@YAPEAUMaterialIn.c)
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 *     ??$_Uninitialized_copy@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A888 (--$_Uninitialized_copy@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18004CD64 (-_Clear_and_reserve_geometric@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@U.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Assign_range<Spectre::Engine::MeshInstance::MaterialInfo *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 result; // rax
  Spectre::Engine::MeshInstance::MaterialInfo *v11; // rbx

  v6 = a3 - a2;
  v7 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[1] - *a1) >> 3);
  v8 = 0x2E8BA2E8BA2E8BA3LL * (v6 >> 3);
  if ( v8 <= v7 )
  {
    v11 = (Spectre::Engine::MeshInstance::MaterialInfo *)(*a1 + 88 * v8);
    std::_Copy_unchecked<Spectre::Engine::MeshInstance::MaterialInfo *,Spectre::Engine::MeshInstance::MaterialInfo *>(
      a2,
      a3,
      *a1);
    result = std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(v11);
  }
  else
  {
    if ( v8 > 0x2E8BA2E8BA2E8BA3LL * ((__int64)(a1[2] - *a1) >> 3) )
    {
      std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Clear_and_reserve_geometric(a1, v8);
      v7 = 0LL;
    }
    v9 = a2 + 88 * v7;
    std::_Copy_unchecked<Spectre::Engine::MeshInstance::MaterialInfo *,Spectre::Engine::MeshInstance::MaterialInfo *>(
      a2,
      v9,
      *a1);
    result = std::_Uninitialized_copy<Spectre::Engine::MeshInstance::MaterialInfo *>(v9, a3, a1[1]);
    v11 = (Spectre::Engine::MeshInstance::MaterialInfo *)result;
  }
  a1[1] = v11;
  return result;
}
