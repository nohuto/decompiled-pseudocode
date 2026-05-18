/*
 * XREFs of ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708
 * Callers:
 *     ??$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18004A5A0 (--$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@-$vector@UMaterialInfo@MeshInsta.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A740 (--$_Resize@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocat.c)
 *     ??$_Uninitialized_copy@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A888 (--$_Uninitialized_copy@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@.c)
 *     ??$_Uninitialized_move@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A92C (--$_Uninitialized_move@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004AA3C (--$_Uninitialized_value_construct_n@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std.c)
 *     ?_Change_array@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXQEAUMaterialInfo@MeshInstance@Engine@Spectre@@_K1@Z @ 0x18004CCD8 (-_Change_array@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@Me.c)
 *     ?_Clear_and_reserve_geometric@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18004CD64 (-_Clear_and_reserve_geometric@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@U.c)
 *     ?_Tidy@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18004CE08 (-_Tidy@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@MeshInstan.c)
 * Callees:
 *     ??1MaterialInfo@MeshInstance@Engine@Spectre@@QEAA@XZ @ 0x18004AE40 (--1MaterialInfo@MeshInstance@Engine@Spectre@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(
        Spectre::Engine::MeshInstance::MaterialInfo *this,
        Spectre::Engine::MeshInstance::MaterialInfo *a2)
{
  Spectre::Engine::MeshInstance::MaterialInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      Spectre::Engine::MeshInstance::MaterialInfo::~MaterialInfo(v3);
      v3 = (Spectre::Engine::MeshInstance::MaterialInfo *)((char *)v3 + 88);
    }
    while ( v3 != a2 );
  }
}
