/*
 * XREFs of ?_Tidy@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18004CE08
 * Callers:
 *     ??1?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18004AE34 (--1-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@MeshInstance@E.c)
 *     ??1MeshInstance@Engine@Spectre@@UEAA@XZ @ 0x18004AEB0 (--1MeshInstance@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 */

void __fastcall std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Tidy(__int64 a1)
{
  Spectre::Engine::MeshInstance::MaterialInfo *v2; // rcx

  v2 = *(Spectre::Engine::MeshInstance::MaterialInfo **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(
      v2,
      *(Spectre::Engine::MeshInstance::MaterialInfo **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
