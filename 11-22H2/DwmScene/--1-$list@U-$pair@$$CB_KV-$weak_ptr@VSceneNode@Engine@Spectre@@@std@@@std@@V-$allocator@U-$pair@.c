/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003FF20
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::weak_ptr_Spectre::Engine::SceneNode__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::weak_ptr_Spectre::Engine::SceneNode______0___::_Hash_std::_Umap_traits_unsigned___int64_std::weak_ptr_Spectre::Engine::SceneNode__std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::weak_ptr_Spectre::Engine::SceneNode______0____::_1_::dtor$0 @ 0x1800E65A8 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--weak_ptr_Spectre--Engine--Scene_ea_1800E65A8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003F4F4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$weak_ptr@VSceneNode@Engine@Spectre.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>::~list<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x28uLL);
}
