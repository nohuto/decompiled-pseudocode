/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UREGKEYINFO@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18057ED6C
 * Callers:
 *     ??$_Emplace@AEBV?$shared_ptr@UREGKEYINFO@@@std@@@?$list@V?$shared_ptr@UREGKEYINFO@@@std@@V?$allocator@V?$shared_ptr@UREGKEYINFO@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UREGKEYINFO@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UREGKEYINFO@@@1@@Z @ 0x18057DE0C (--$_Emplace@AEBV-$shared_ptr@UREGKEYINFO@@@std@@@-$list@V-$shared_ptr@UREGKEYINFO@@@std@@V-$allo.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<REGKEYINFO>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::shared_ptr<REGKEYINFO>,void *>>>(
        __int64 a1)
{
  std::_Ref_count_base **v2; // rcx

  v2 = *(std::_Ref_count_base ***)(a1 + 8);
  if ( v2 )
  {
    if ( v2[3] )
    {
      std::_Ref_count_base::_Decref(v2[3]);
      v2 = *(std::_Ref_count_base ***)(a1 + 8);
    }
    if ( v2 )
      std::_Deallocate<16,0>(v2, 0x20uLL);
  }
}
