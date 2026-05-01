/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@2@@std@@QEAA@XZ @ 0x18032C050
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_GamingOverlayExperienceManager::TargetWindowContext_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__GamingOverlayExperienceManager::TargetWindowContext____0___::_Hash_std::_Umap_traits_unsigned___int64_GamingOverlayExperienceManager::TargetWindowContext_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__GamingOverlayExperienceManager::TargetWindowContext____0____::_1_::dtor$0 @ 0x1802217A5 (_std--_Hash_std--_Umap_traits_unsigned___int64_GamingOverlayExperienceManager--TargetWindowConte.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180328428 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUTargetWindowContext@GamingOverlayExp.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>::~list<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, 0x38uLL);
}
