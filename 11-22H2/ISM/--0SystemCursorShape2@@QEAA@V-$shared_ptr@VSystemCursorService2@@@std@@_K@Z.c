/*
 * XREFs of ??0SystemCursorShape2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@_K@Z @ 0x180112D3C
 * Callers:
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@?$_Ref_count_obj2@VSystemCursorShape2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEA_K@Z @ 0x180111E70 (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@-$_Ref_count_obj2@VSystemCursorShape2@@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800E199C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800E199C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemCursorShape2::SystemCursorShape2(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  size_t size_of; // rax
  _QWORD *v8; // rax
  std::_Ref_count_base *v9; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2[1] )
  {
    *(_QWORD *)a1 = *a2;
    v6 = a2[1];
    *(_QWORD *)(a1 + 8) = v6;
    _InterlockedAdd((volatile signed __int32 *)(v6 + 12), 1u);
  }
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v8 = v8;
  v8[1] = v8;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 7LL;
  *(_QWORD *)(a1 + 72) = 8LL;
  *(_DWORD *)(a1 + 16) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    a1 + 40,
    0x10uLL,
    *(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 80) = a3;
  v9 = (std::_Ref_count_base *)a2[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return a1;
}
