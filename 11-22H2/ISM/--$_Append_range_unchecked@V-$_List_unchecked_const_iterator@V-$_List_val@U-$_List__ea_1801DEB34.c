/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801DEB34
 * Callers:
 *     ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801DEC04 (--$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V-$_List_unchecked_const_iterator@V-$_Lis.c)
 *     ??0?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801DEEA4 (--0-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualHotKeyTracker@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<VirtualHotKeyTracker::KeyEventData,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  _QWORD *v6; // r14
  _OWORD *v7; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    v6 = a1 + 2;
    if ( a1[1] )
      goto LABEL_5;
    v7 = operator new(0x30uLL);
    v7[1] = *((_OWORD *)v4 + 1);
    v7[2] = *((_OWORD *)v4 + 2);
    a1[3] = v7;
    while ( 1 )
    {
      *v6 = v7;
      ++a1[1];
      v4 = (__int64 *)*v4;
LABEL_5:
      if ( v4 == a3 )
        break;
      v7 = operator new(0x30uLL);
      v7[1] = *((_OWORD *)v4 + 1);
      v7[2] = *((_OWORD *)v4 + 2);
      *(_QWORD *)*v6 = v7;
      *((_QWORD *)v7 + 1) = *v6;
    }
  }
}
