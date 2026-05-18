/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A740
 * Callers:
 *     ?SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z @ 0x18004CB18 (-SetMaterialCount@MeshInstance@Engine@Spectre@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004AA3C (--$_Uninitialized_value_construct_n@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std.c)
 */

void __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Resize<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  Spectre::Engine::MeshInstance::MaterialInfo *v4; // rbx

  v3 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( a2 >= v3 )
  {
    if ( a2 > v3 )
    {
      if ( a2 <= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) )
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(*(Spectre::Engine::MeshInstance::MaterialInfo **)(a1 + 8));
      else
        std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Resize_reallocate<std::_Value_init_tag>(a1);
    }
  }
  else
  {
    v4 = (Spectre::Engine::MeshInstance::MaterialInfo *)(*(_QWORD *)a1 + 88 * a2);
    std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(
      v4,
      *(Spectre::Engine::MeshInstance::MaterialInfo **)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v4;
  }
}
