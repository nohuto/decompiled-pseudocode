/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180031E48
 * Callers:
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000DFA0 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$_Hash@V-$_Um.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ABD0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CStreamClassPolicyGains>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v6;
  v7 = *a4;
  v6[2] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  *((_OWORD *)v6 + 1) = *(_OWORD *)v7;
  *((_OWORD *)v6 + 2) = *(_OWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 7LL;
  *(_WORD *)v7 = 0;
  v6[6] = 0LL;
  return a1;
}
