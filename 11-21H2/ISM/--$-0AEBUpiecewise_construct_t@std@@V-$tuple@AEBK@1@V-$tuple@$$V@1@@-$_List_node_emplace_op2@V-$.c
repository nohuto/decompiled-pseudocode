/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013B060
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013BF44 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x18013D0AC (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4)
{
  char *v6; // rax
  _QWORD *v7; // rbx

  *a1 = a2;
  a1[1] = 0LL;
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x90uLL);
  a1[1] = v6;
  *((_DWORD *)v6 + 4) = **a4;
  v7 = v6 + 24;
  memset_0(v6 + 24, 0, 0x78uLL);
  *v7 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  v7[3] = 0LL;
  v7[4] = 0LL;
  v7[5] = 0LL;
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(v7 + 7);
  return a1;
}
