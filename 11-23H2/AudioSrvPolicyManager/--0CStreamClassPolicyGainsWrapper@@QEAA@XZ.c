/*
 * XREFs of ??0CStreamClassPolicyGainsWrapper@@QEAA@XZ @ 0x180033A30
 * Callers:
 *     ??0TSSession@@AEAA@XZ @ 0x180033B94 (--0TSSession@@AEAA@XZ.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000AAD0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ABD0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x180031F8C (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
CStreamClassPolicyGainsWrapper *__fastcall CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper(
        CStreamClassPolicyGainsWrapper *this)
{
  _QWORD *v2; // rax

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 1) = v2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_QWORD *)this + 7) = 8LL;
  *(_DWORD *)this = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
    (__int64)this + 24,
    0x10uLL,
    *((_QWORD *)this + 1));
  CStreamClassPolicyGains::CStreamClassPolicyGains((CStreamClassPolicyGainsWrapper *)((char *)this + 64));
  CStreamClassPolicyGains::CStreamClassPolicyGains((CStreamClassPolicyGainsWrapper *)((char *)this + 488));
  return this;
}
