/*
 * XREFs of ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800041E0
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800045B0 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800166D0 (-TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextua.c)
 *     ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1801A2150 (-AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@2@@Z @ 0x1800044EC (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorState@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorState@@@1@@Z @ 0x180004D30 (--$emplace@AEBU-$pair@$$CBKW4ContextualProcessorState@@@std@@@-$_Hash@V-$_Umap_traits@KW4Context.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180004EC0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18013CC84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorDecision@@@1@@Z @ 0x1801A1384 (--$emplace@AEBU-$pair@$$CBKW4ContextualProcessorDecision@@@std@@@-$_Hash@V-$_Umap_traits@KW4Cont.c)
 */

// Hidden C++ exception states: #wind=11
ContextualProcessorBuffer::ContextualProcessorMetadata *__fastcall ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
        ContextualProcessorBuffer::ContextualProcessorMetadata *this,
        const struct ContextualProcessorBuffer::ContextualProcessorMetadata *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // rax
  _QWORD **v12; // rbx
  _QWORD *i; // rdi
  _QWORD *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rbp
  unsigned __int64 *v19; // rdi
  unsigned __int64 *v20; // rax
  _QWORD **v21; // rdi
  _QWORD *j; // rbx
  __int64 size_of; // rax
  _QWORD *v24; // rax
  _QWORD **v25; // rdi
  _QWORD *k; // rbx
  __int64 v27; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  _BYTE v31[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)a2;
  *(_QWORD *)this = *(_QWORD *)a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(24LL);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)this + 2) = v5;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 8);
  v6 = *((_QWORD *)this + 2);
  v7 = (__int64)(*((_QWORD *)a2 + 5) - *((_QWORD *)a2 + 4)) >> 3;
  v8 = *((__int64 *)this + 5) >> 3;
  if ( v8 >= v7 )
  {
    v29 = (unsigned __int64)(*((_QWORD *)this + 5) + 7LL) >> 3;
    if ( v29 )
      memset64(0LL, v6, v29);
  }
  else
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v9 = v7;
    v10 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v7);
    if ( v8 )
      std::_Deallocate<16,0>(*((_QWORD *)this + 4), 8 * v8);
    *((_QWORD *)this + 4) = v10;
    v11 = &v10[v9];
    *((_QWORD *)this + 5) = &v10[v9];
    for ( *((_QWORD *)this + 6) = &v10[v9]; v10 != v11; ++v10 )
      *v10 = v6;
  }
  v12 = (_QWORD **)*((_QWORD *)a2 + 2);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorState> const &>(
      (char *)this + 8,
      v31,
      i + 2);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(24LL);
  *v14 = v14;
  v14[1] = v14;
  *((_QWORD *)this + 10) = v14;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = *((_QWORD *)a2 + 15);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
  v15 = *((_QWORD *)this + 10);
  v16 = (__int64)(*((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12)) >> 3;
  v17 = *((__int64 *)this + 13) >> 3;
  if ( v17 >= v16 )
  {
    v30 = (unsigned __int64)(*((_QWORD *)this + 13) + 7LL) >> 3;
    if ( v30 )
      memset64(0LL, v15, v30);
  }
  else
  {
    if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v18 = v16;
    v19 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v16);
    if ( v17 )
      std::_Deallocate<16,0>(*((_QWORD *)this + 12), 8 * v17);
    *((_QWORD *)this + 12) = v19;
    v20 = &v19[v18];
    *((_QWORD *)this + 13) = &v19[v18];
    for ( *((_QWORD *)this + 14) = &v19[v18]; v19 != v20; ++v19 )
      *v19 = v15;
  }
  v21 = (_QWORD **)*((_QWORD *)a2 + 10);
  for ( j = *v21; j != v21; j = (_QWORD *)*j )
    std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
      (char *)this + 72,
      v31,
      j + 2);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  size_of = std::_Get_size_of_n<24>(1LL);
  v24 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v24 = v24;
  v24[1] = v24;
  *((_QWORD *)this + 19) = v24;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 24);
  *((_QWORD *)this + 25) = *((_QWORD *)a2 + 25);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>>::_Assign_grow(
    (char *)this + 168,
    (__int64)(*((_QWORD *)a2 + 22) - *((_QWORD *)a2 + 21)) >> 3,
    *((_QWORD *)this + 19));
  v25 = (_QWORD **)*((_QWORD *)a2 + 19);
  for ( k = *v25; k != v25; k = (_QWORD *)*k )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorDecision> const &>(
      (char *)this + 144,
      v31,
      k + 2);
  v27 = *((_QWORD *)a2 + 26);
  *((_QWORD *)this + 26) = v27;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  *((_BYTE *)this + 216) = *((_BYTE *)a2 + 216);
  return this;
}
