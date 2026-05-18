/*
 * XREFs of ??1MeshInstance@Engine@Spectre@@UEAA@XZ @ 0x18004AEB0
 * Callers:
 *     ??_EMeshInstance@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800143C0 (--_EMeshInstance@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXXZ @ 0x18004CE08 (-_Tidy@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@MeshInstan.c)
 */

void __fastcall Spectre::Engine::MeshInstance::~MeshInstance(Spectre::Engine::MeshInstance *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::MeshInstance::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 20);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::_Tidy((char *)this + 104);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Spectre::Engine::Component::~Component(this);
}
