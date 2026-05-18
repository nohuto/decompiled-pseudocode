/*
 * XREFs of ??1MaterialInfo@MeshInstance@Engine@Spectre@@QEAA@XZ @ 0x18004AE40
 * Callers:
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::MeshInstance::MaterialInfo::~MaterialInfo(
        Spectre::Engine::MeshInstance::MaterialInfo *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 6);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
