/*
 * XREFs of ??0?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DEEA4
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801DF0C4 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801DEB34 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1801DEB34.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801DEF58 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@s.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::list<VirtualHotKeyTracker::KeyEventData>::list<VirtualHotKeyTracker::KeyEventData>(
        _QWORD *a1,
        __int64 ***a2)
{
  __int64 **v3; // r8
  __int64 *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  _QWORD *v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *a2;
  v4 = **a2;
  v11 = a1;
  v12 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
    &v11,
    v4,
    (__int64 *)v3);
  v5 = operator new(0x30uLL);
  v6 = v5;
  v7 = v12;
  v12 = 0LL;
  if ( v7 )
  {
    v8 = v14;
    *v5 = v14;
    v9 = v13;
    v6[1] = v13;
    *(_QWORD *)(v8 + 8) = v6;
    *v9 = v6;
  }
  else
  {
    *v5 = v5;
    v5[1] = v5;
  }
  a1[1] = v7;
  *a1 = v6;
  std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>(
    &v11,
    v6);
  return a1;
}
