/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801FCDE0
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801FCDE0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKe.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801FD574 (--0HotKeyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGI@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGI@std@@PEAX@1@@Z @ 0x180064E4C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGI@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801FCDE0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKe.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<HotKeyInfo *>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::set<HotKeyInfo *>>,void *>>>(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  void **v3; // rsi
  void **v6; // rdi

  v3 = a3;
  while ( !*((_BYTE *)v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<HotKeyInfo *>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::set<HotKeyInfo *>>,void *>>>(
      a1,
      a2,
      v3[2]);
    v6 = v3;
    v3 = (void **)*v3;
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,unsigned int>,void *>>>(
      (__int64)(v6 + 5),
      (__int64)(v6 + 5),
      *((_QWORD *)v6[5] + 1));
    std::_Deallocate<16,0>(v6[5], 0x28uLL);
    std::_Deallocate<16,0>(v6, 0x38uLL);
  }
}
