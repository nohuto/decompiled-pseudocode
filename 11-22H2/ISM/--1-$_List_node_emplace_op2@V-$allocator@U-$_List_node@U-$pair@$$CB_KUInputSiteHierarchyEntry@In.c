/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014C0F8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_InputSiteHierarchyManager::InputSiteHierarchyEntry_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__InputSiteHierarchyManager::InputSiteHierarchyEntry____0___::_Try_emplace_unsigned___int64_const_&__::_1_::dtor$0 @ 0x18007F7D0 (_std--_Hash_std--_Umap_traits_unsigned___int64_InputSiteHierarchyManager--InputSiteHierarchyEntr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  v2 = *(_QWORD **)(a1 + 8);
  if ( v2 )
  {
    v3 = (void *)v2[5];
    if ( v3 )
    {
      std::_Deallocate<16,0>(v3, (v2[7] - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
      v2[5] = 0LL;
      v2[6] = 0LL;
      v2[7] = 0LL;
    }
    v4 = v2[3];
    if ( v4 )
    {
      v2[3] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  v5 = *(void **)(a1 + 8);
  if ( v5 )
    std::_Deallocate<16,0>(v5, 0x40uLL);
}
