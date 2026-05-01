/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180735B2C
 * Callers:
 *     ??$_Assign_cast@AEAU?$pair@W4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18073533C (--$_Assign_cast@AEAU-$pair@W4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V-$_List_unchecke.c)
 *     _std::list_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int_____::_Assign_cast_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int______std::_Iterator_base0____::_1_::dtor$0 @ 0x180735415 (_std--list_std--pair_enum_winrt--Windows--Internal--Shell--CloudPCState_const__unsigned_int__std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(_QWORD **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v2, 0x18uLL);
    }
  }
}
