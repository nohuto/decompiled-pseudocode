/*
 * XREFs of ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B2E64
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B331C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B2DA0 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1801B2DA0.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B31B8 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@s.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_cast<VirtualHotKeyTracker::KeyEventData &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 **v4; // rcx
  __int64 *v5; // rax
  __int64 **v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 ***v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v4 = *(__int64 ***)a1;
  v5 = *v4;
  while ( v5 != (__int64 *)v4 )
  {
    if ( (__int64 *)a2 == a3 )
      return std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(a1, v5, v4);
    *((_OWORD *)v5 + 1) = *(_OWORD *)(a2 + 16);
    *((_OWORD *)v5 + 2) = *(_OWORD *)(a2 + 32);
    v5 = (__int64 *)*v5;
    a2 = *(_QWORD *)a2;
  }
  v12 = a1;
  v13 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
    &v12,
    (__int64 *)a2,
    a3);
  v6 = *(__int64 ***)a1;
  v7 = v13;
  if ( v13 )
  {
    v8 = v6[1];
    v9 = v15;
    *(_QWORD *)(v15 + 8) = v8;
    *v8 = v9;
    v10 = (__int64 *)v14;
    *v14 = v6;
    v6[1] = v10;
    *(_QWORD *)(a1 + 8) += v7;
    v13 = 0LL;
  }
  return std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
           &v12,
           v6);
}
