/*
 * XREFs of _dynamic_initializer_for__TsSessionList__ @ 0x180001DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 */

// Hidden C++ exception states: #wind=2
int dynamic_initializer_for__TsSessionList__()
{
  HANDLE ProcessHeap; // rax
  _QWORD *v1; // rax

  ProcessHeap = GetProcessHeap();
  v1 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  *v1 = v1;
  v1[1] = v1;
  qword_18005C6B8 = (__int64)v1;
  qword_18005C6C8 = 0LL;
  xmmword_18005C6D0 = 0LL;
  qword_18005C6E0 = 7LL;
  qword_18005C6E8 = 8LL;
  dword_18005C6B0 = LODWORD(FLOAT_1_0);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    &qword_18005C6C8,
    16LL,
    v1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TsSessionList__);
}
