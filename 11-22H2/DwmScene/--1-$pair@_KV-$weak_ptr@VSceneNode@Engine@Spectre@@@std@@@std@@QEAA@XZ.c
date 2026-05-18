/*
 * XREFs of ??1?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003FF84
 * Callers:
 *     _Spectre::Engine::Scene::RegisterNode_::_1_::dtor$6 @ 0x1800E67AD (_Spectre--Engine--Scene--RegisterNode_--_1_--dtor$6.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::pair<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>::~pair<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
