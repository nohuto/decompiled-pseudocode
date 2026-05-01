/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18073526C
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@W4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18073533C (--$_Assign_cast@AEAU-$pair@W4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V-$_List_unchecke.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>>,std::_Iterator_base0>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // r14
  size_t size_of; // rax
  _QWORD *v8; // rax
  size_t v9; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    v6 = a1 + 2;
    if ( a1[1] )
      goto LABEL_5;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v8[2] = v4[2];
    a1[3] = v8;
    while ( 1 )
    {
      *v6 = v8;
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v9 = std::_Get_size_of_n<24>(1uLL);
      v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
      v8[2] = v4[2];
      *(_QWORD *)*v6 = v8;
      v8[1] = *v6;
    }
  }
}
