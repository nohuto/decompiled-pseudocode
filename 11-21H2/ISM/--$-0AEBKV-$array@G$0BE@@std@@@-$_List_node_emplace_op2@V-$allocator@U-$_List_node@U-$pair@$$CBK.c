/*
 * XREFs of ??$?0AEBKV?$array@G$0BE@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800C6894
 * Callers:
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800C6944 (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::array<unsigned short,20>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  char *v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  a1[1] = v7;
  *((_DWORD *)v7 + 4) = *a3;
  *(_OWORD *)(v7 + 20) = *(_OWORD *)a4;
  *(_OWORD *)(v7 + 36) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(v7 + 52) = *(_QWORD *)(a4 + 32);
  return a1;
}
