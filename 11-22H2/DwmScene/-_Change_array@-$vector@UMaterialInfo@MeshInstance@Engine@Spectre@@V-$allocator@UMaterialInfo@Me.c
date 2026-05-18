/*
 * XREFs of ?_Change_array@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXQEAUMaterialInfo@MeshInstance@Engine@Spectre@@_K1@Z @ 0x18004CCD8
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 */

__int64 __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Spectre::Engine::MeshInstance::MaterialInfo *v6; // rcx
  __int64 result; // rax

  v6 = *(Spectre::Engine::MeshInstance::MaterialInfo **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(
      v6,
      *(Spectre::Engine::MeshInstance::MaterialInfo **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 88 * a3;
  result = a2 + 88 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
