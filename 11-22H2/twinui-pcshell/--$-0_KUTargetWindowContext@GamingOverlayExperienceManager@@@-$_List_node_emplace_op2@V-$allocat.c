/*
 * XREFs of ??$?0_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x1803F1C98
 * Callers:
 *     ??$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@_N@1@$$QEA_K$$QEAUTargetWindowContext@GamingOverlayExperienceManager@@@Z @ 0x1803F7810 (--$emplace@_KUTargetWindowContext@GamingOverlayExperienceManager@@@-$_Hash@V-$_Umap_traits@_KUTa.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = operator new(0x38uLL);
  a1[1] = v7;
  v7[2] = *a3;
  v8 = a4[2];
  a4[2] = 0LL;
  v9 = a4[1];
  a4[1] = 0LL;
  v10 = *a4;
  *a4 = 0LL;
  v7[3] = v10;
  v7[4] = v9;
  v7[5] = v8;
  *((_BYTE *)v7 + 48) = *((_BYTE *)a4 + 24);
  return a1;
}
