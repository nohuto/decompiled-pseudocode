/*
 * XREFs of ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801D5240
 * Callers:
 *     ??$_Assign_cast@AEAV?$shared_ptr@UHotKeyInfo@@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801D0AE4 (--$_Assign_cast@AEAV-$shared_ptr@UHotKeyInfo@@@std@@V-$_List_unchecked_const_iterator@V-$_List_v.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801D225C (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 *     ?CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAH@Z @ 0x1801D2794 (-CleanupClientHotKeys@HotKeyProcessor@@AEAAXPEAVHotkeyClientRegistration@@AEAV-$list@V-$shared_p.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801D2634 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rbx

  v4 = a2;
  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = 0LL;
    *v6 = a3;
    a3[1] = v6;
    do
    {
      v8 = (_QWORD *)*v4;
      std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'((__int64)(v4 + 2));
      std::_Deallocate<16,0>(v4, 0x20uLL);
      ++v7;
      v4 = v8;
    }
    while ( v8 != a3 );
    *(_QWORD *)(a1 + 8) -= v7;
  }
  return a3;
}
