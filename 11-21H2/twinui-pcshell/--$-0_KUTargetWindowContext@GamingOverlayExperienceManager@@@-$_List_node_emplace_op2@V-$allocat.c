/*
 * XREFs of ??$?0_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x180324380
 * Callers:
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x18032A100 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v7;
  v7[2] = *a3;
  v7[3] = 0LL;
  v7[4] = 0LL;
  v7[5] = 0LL;
  v7[3] = *(_QWORD *)a4;
  v7[4] = *(_QWORD *)(a4 + 8);
  v7[5] = *(_QWORD *)(a4 + 16);
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *((_BYTE *)v7 + 48) = *(_BYTE *)(a4 + 24);
  return a1;
}
