/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1E34
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1801D13B4 (--$_Try_emplace@AEB_K$$V@-$map@_KV-$set@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@@Z @ 0x1801D1278 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void **v3; // rbx
  void *v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = (void **)(v2 + 40);
    std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
      v2 + 40,
      v2 + 40,
      *(char **)(*(_QWORD *)(v2 + 40) + 8LL));
    std::_Deallocate<16,0>(*v3, 0x30uLL);
    v4 = *(void **)(a1 + 8);
    if ( v4 )
      std::_Deallocate<16,0>(v4, 0x38uLL);
  }
}
