/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801D1D04
 * Callers:
 *     ??$_Assign_cast@AEAV?$shared_ptr@UHotKeyInfo@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801D0AE4 (--$_Assign_cast@AEAV-$shared_ptr@UHotKeyInfo@@@std@@V-$_List_unchecked_const_iterator@V-$_List_v.c)
 *     _std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo_____::_Assign_cast_std::shared_ptr_HotKeyInfo__&_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0____::_1_::dtor$0 @ 0x1801D0BB3 (_std--list_std--shared_ptr_HotKeyInfo__std--allocator_std--shared_ptr_HotKeyInfo_____--_Assign_c.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801D1924 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     _std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo_____::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo______::_1_::dtor$6 @ 0x1801D19BA (_std--list_std--shared_ptr_HotKeyInfo__std--allocator_std--shared_ptr_HotKeyInfo_____--list_std-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801D2634 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        __int64 a1)
{
  char *v1; // rdi
  char *v2; // rbx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(char **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = *(char **)v1;
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'(v2 + 16);
      std::_Deallocate<16,0>(v2, 0x20uLL);
    }
  }
}
