/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1803F93DC
 * Callers:
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x1803F7810 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_GamingOverlayExperienceManager::TargetWindowContext_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__GamingOverlayExperienceManager::TargetWindowContext____0___::emplace_unsigned___int64_GamingOverlayExperienceManager::TargetWindowContext__::_1_::dtor$0 @ 0x1803F7987 (_std--_Hash_std--_Umap_traits_unsigned___int64_GamingOverlayExperienceManager--Targ_ea_1803F7987.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@std@@YAXPEAU?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@QEAU1@AEAV?$allocator@U?$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@0@@Z @ 0x1803F49FC (--$_Destroy_range@V-$allocator@U-$OwnedHWinEventHook@VGamingOverlayExperienceManager@@@@@std@@@s.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx
  void *v4; // rcx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v3 = v1[3];
    if ( v3 )
    {
      std::_Destroy_range<std::allocator<OwnedHWinEventHook<GamingOverlayExperienceManager>>>(v3, v1[4]);
      std::_Deallocate<16,0>((void *)v1[3], (v1[5] - v1[3]) & 0xFFFFFFFFFFFFFFF8uLL);
      v1[3] = 0LL;
      v1[4] = 0LL;
      v1[5] = 0LL;
    }
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x38uLL);
}
