/*
 * XREFs of ??0TSSession@@AEAA@XZ @ 0x18002AF1C
 * Callers:
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18002BA9C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x1800297A8 (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
TSSession *__fastcall TSSession::TSSession(TSSession *this)
{
  char *v2; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v2 = (char *)this + 72;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)v2 + 1) = v4;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)(v2 + 24),
    0x10uLL,
    *((_QWORD *)v2 + 1));
  CStreamClassPolicyGains::CStreamClassPolicyGains((CStreamClassPolicyGains *)(v2 + 64));
  CStreamClassPolicyGains::CStreamClassPolicyGains((CStreamClassPolicyGains *)(v2 + 488));
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 1065353216;
  *(_QWORD *)((char *)this + 1012) = 1LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_DWORD *)this + 268) = 0;
  *((_QWORD *)this + 135) = 0LL;
  *((_DWORD *)this + 272) = 1;
  *((_BYTE *)this + 1092) = 0;
  *((_QWORD *)this + 137) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 278) = 0;
  return this;
}
