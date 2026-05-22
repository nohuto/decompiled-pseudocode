/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801D1148
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801D1148 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKe.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x1801D19D8 (--0HotKeyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAUHotKeyInfo@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUHotKeyInfo@@PEAX@1@@Z @ 0x1800C9364 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAUHotKeyInfo@@PEAX@std@@@std@@@-$_Tree_val@U-$_Tree_.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@PEAUHotKeyInfo@@U?$less@PEAUHotKeyInfo@@@std@@V?$allocator@PEAUHotKeyInfo@@@3@@std@@@std@@PEAX@1@@Z @ 0x1801D1148 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$set@PEAUHotKeyInfo@@U-$less@PEAUHotKe.c)
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
    std::_Tree_val<std::_Tree_simple_types<HotKeyInfo *>>::_Erase_tree<std::allocator<std::_Tree_node<HotKeyInfo *,void *>>>(
      (__int64)(v6 + 5),
      (__int64)(v6 + 5),
      *((_QWORD *)v6[5] + 1));
    std::_Deallocate<16,0>(v6[5], 0x28uLL);
    std::_Deallocate<16,0>(v6, 0x38uLL);
  }
}
