/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801A0860
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@KW4ContextualProcessorDecision@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801A0924 (--$_Assign_cast@AEAU-$pair@KW4ContextualProcessorDecision@@@std@@V-$_List_unchecked_const_iterat.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180004EC0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<unsigned long const,enum ContextualProcessorDecision>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>,std::_Iterator_base0>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  size_t size_of; // rax
  _QWORD *v7; // rax
  size_t v8; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    if ( a1[1] )
      goto LABEL_5;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v7[2] = v4[2];
    a1[3] = v7;
    while ( 1 )
    {
      a1[2] = v7;
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v8 = std::_Get_size_of_n<24>(1uLL);
      v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
      v7[2] = v4[2];
      *(_QWORD *)a1[2] = v7;
      v7[1] = a1[2];
    }
  }
}
