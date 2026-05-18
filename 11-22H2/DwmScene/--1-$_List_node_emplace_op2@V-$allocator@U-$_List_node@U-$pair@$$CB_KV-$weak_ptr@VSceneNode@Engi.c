/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003FDFC
 * Callers:
 *     ??$emplace@U?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@1@@Z @ 0x18003F6D0 (--$emplace@U-$pair@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::weak_ptr_Spectre::Engine::SceneNode__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::weak_ptr_Spectre::Engine::SceneNode______0___::emplace_std::pair_unsigned___int64_std::weak_ptr_Spectre::Engine::SceneNode______::_1_::dtor$0 @ 0x1800E6572 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--weak_ptr_Spectre--Engine--SceneNode__std--_U.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(std::_Ref_count_base **)(v2 + 32);
    if ( v3 )
      std::_Ref_count_base::_Decwref(v3);
  }
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>,void *>>>(a1);
}
