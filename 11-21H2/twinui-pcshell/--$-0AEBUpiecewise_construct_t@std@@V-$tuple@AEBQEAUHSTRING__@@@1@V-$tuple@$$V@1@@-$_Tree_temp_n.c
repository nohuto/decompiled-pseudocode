/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHSTRING__@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHSTRING__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18055E164
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHSTRING__@@$$V@?$map@PEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@U?$less@PEAUHSTRING__@@@3@V?$allocator@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@_N@1@AEBQEAUHSTRING__@@@Z @ 0x18055E4E4 (--$_Try_emplace@AEBQEAUHSTRING__@@$$V@-$map@PEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@Lighti.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5)
{
  _QWORD *v7; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v7;
  v7[4] = **a5;
  v7[6] = 0LL;
  v7[5] = 0LL;
  v7[6] = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(a1[1] + i + 24) = 0;
  return a1;
}
