/*
 * XREFs of ??$_Hash_representation@_K@std@@YA_KAEB_K@Z @ 0x18003F584
 * Callers:
 *     ??$emplace@U?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@1@@Z @ 0x18003F6D0 (--$emplace@U-$pair@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@-$_Hash@V-$_Umap_traits.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x18003F8F0 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash_compa.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180042930 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180042B08 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uha.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180042C3C (-erase@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash_compare@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash_representation<unsigned __int64>(const unsigned __int8 *a1)
{
  return std::_Fnv1a_append_value<unsigned __int64>((__int64)a1, a1);
}
