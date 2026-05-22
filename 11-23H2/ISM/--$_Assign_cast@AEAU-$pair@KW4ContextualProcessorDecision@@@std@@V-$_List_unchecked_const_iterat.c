/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@KW4ContextualProcessorDecision@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801BE9D4
 * Callers:
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18006394C (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 *     ?MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualProcessorResponse@@AEAUContextualProcessorMetadata@1@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@6@@Z @ 0x1801C16E0 (-MakeContextualProcessorDecision@ContextualProcessorBuffer@@AEAAJPEAUInputInfo@@AEAUContextualPr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801BE904 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801BF948 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorDecision.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<unsigned long const,enum ContextualProcessorDecision>>::_Assign_cast<std::pair<unsigned long,enum ContextualProcessorDecision> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
        void ****a1,
        __int64 *a2,
        __int64 *a3)
{
  void **v4; // rdi
  void **v5; // rcx
  void **v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rax
  void ***v10; // rax
  void ***v11; // rax
  __int64 v12; // rsi
  void **v13; // rbx
  void ****v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  void ***v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]

  v4 = (void **)*a1;
  v5 = **a1;
  while ( 1 )
  {
    if ( v5 == v4 )
    {
      v14 = a1;
      v15 = 0LL;
      std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
        &v14,
        a2,
        a3);
      v6 = (void **)*a1;
      v7 = v15;
      if ( v15 )
      {
        v8 = v6[1];
        v9 = v17;
        *(_QWORD *)(v17 + 8) = v8;
        *v8 = v9;
        v10 = v16;
        *v16 = v6;
        v6[1] = v10;
        a1[1] = (void ***)((char *)a1[1] + v7);
        v15 = 0LL;
      }
      std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>(
        &v14,
        v6);
      return;
    }
    if ( a2 == a3 )
      break;
    *((_DWORD *)v5 + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)v5 + 5) = *((_DWORD *)a2 + 5);
    v5 = (void **)*v5;
    a2 = (__int64 *)*a2;
  }
  if ( v5 != v4 )
  {
    v11 = (void ***)v5[1];
    *v11 = v4;
    v4[1] = v11;
    v12 = 0LL;
    do
    {
      v13 = (void **)*v5;
      std::_Deallocate<16,0>(v5, 0x18uLL);
      v5 = v13;
      ++v12;
    }
    while ( v13 != v4 );
    a1[1] = (void ***)((char *)a1[1] - v12);
  }
}
