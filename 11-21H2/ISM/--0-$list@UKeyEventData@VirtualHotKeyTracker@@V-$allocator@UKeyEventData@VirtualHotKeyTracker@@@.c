/*
 * XREFs of ??0?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801B3104
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B331C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B2DA0 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1801B2DA0.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B31B8 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@s.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::list<VirtualHotKeyTracker::KeyEventData>::list<VirtualHotKeyTracker::KeyEventData>(
        _QWORD *a1,
        __int64 ***a2)
{
  __int64 **v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  _QWORD *v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *a2;
  v10 = a1;
  v11 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
    &v10,
    *v3,
    (__int64 *)v3);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v5 = v4;
  v6 = v11;
  v11 = 0LL;
  if ( v6 )
  {
    v7 = v13;
    *v4 = v13;
    v8 = v12;
    v5[1] = v12;
    *(_QWORD *)(v7 + 8) = v5;
    *v8 = v5;
  }
  else
  {
    *v4 = v4;
    v4[1] = v4;
  }
  a1[1] = v6;
  *a1 = v5;
  std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
    &v10,
    v5);
  return a1;
}
