/*
 * XREFs of ??1?$_Tree_head_scoped_ptr@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801F0BCC
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x180064C04 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     _HotKeyProcessor::DetectAndProcessHotKey_::_1_::dtor$19 @ 0x180065772 (_HotKeyProcessor--DetectAndProcessHotKey_--_1_--dtor$19.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@@Z @ 0x1801F01E0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
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
