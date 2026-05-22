/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801D1D60
 * Callers:
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$19 @ 0x1801D3418 (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$19.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@@Z @ 0x1801D1278 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
 */

void __fastcall std::_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>>::~_Tree_head_scoped_ptr<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>,std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>>(
        __int64 *a1)
{
  void **v1; // rbx

  v1 = (void **)a1[1];
  if ( v1 )
  {
    std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
      a1[1],
      *a1,
      *((char **)*v1 + 1));
    std::_Deallocate<16,0>(*v1, 0x30uLL);
  }
}
