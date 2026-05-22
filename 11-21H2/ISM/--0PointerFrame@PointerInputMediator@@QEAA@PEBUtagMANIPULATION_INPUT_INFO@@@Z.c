/*
 * XREFs of ??0PointerFrame@PointerInputMediator@@QEAA@PEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E3450
 * Callers:
 *     ??$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@AEAPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800E2F04 (--$emplace_back@AEAPEBUtagMANIPULATION_INPUT_INFO@@@-$deque@UPointerFrame@PointerInputMediator@@.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18008C80C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18008C80C.c)
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x1800E2D5C (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEAI@Z @ 0x1800E2ED8 (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEAI@Z.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@AEAAXXZ @ 0x1800E4208 (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$alloc.c)
 *     ?reserve@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAX_K@Z @ 0x1800E4A4C (-reserve@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@.c)
 *     ?reserve@?$vector@IV?$allocator@I@std@@@std@@QEAAX_K@Z @ 0x1800E4AEC (-reserve@-$vector@IV-$allocator@I@std@@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
PointerInputMediator::PointerFrame *__fastcall PointerInputMediator::PointerFrame::PointerFrame(
        PointerInputMediator::PointerFrame *this,
        const struct tagMANIPULATION_INPUT_INFO *a2)
{
  char *v4; // r12
  char *v5; // rdi
  char *v6; // r15
  unsigned __int64 *v7; // rbx
  char *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rdi
  _DWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v21[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  char *v24; // [rsp+98h] [rbp+48h] BYREF

  *(_DWORD *)this = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 37);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 19) = *((_QWORD *)a2 + 22);
  v4 = (char *)this + 160;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v5 = (char *)this + 184;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v6 = (char *)this + 208;
  v24 = (char *)this + 208;
  *((_DWORD *)this + 52) = 0;
  v7 = (unsigned __int64 *)((char *)this + 216);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  std::list<std::pair<unsigned int const,PointerInputMediator::ContactData>>::_Alloc_sentinel_and_proxy((char *)this + 216);
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 6) = 7LL;
  *((_QWORD *)v6 + 7) = 8LL;
  *(_DWORD *)v6 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)(v6 + 24),
    0x10uLL,
    *v7);
  *((_BYTE *)this + 272) = 0;
  std::vector<unsigned int>::reserve(v4, *((unsigned int *)this + 1));
  std::vector<unsigned int>::reserve(v5, *((unsigned int *)this + 1));
  std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::reserve(
    v6,
    *((unsigned int *)this + 1));
  v8 = (char *)a2 + 160;
  gsl::details::extent_type<-1>::extent_type<-1>(v21, *((unsigned int *)this + 1), v9, v10);
  if ( v21[0] == -1LL || a2 == (const struct tagMANIPULATION_INPUT_INFO *)-160LL && v21[0] )
  {
    _o_terminate(v12, v11, v13, v14);
    return (PointerInputMediator::PointerFrame *)PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor_0_0();
  }
  else
  {
    v15 = &v8[240 * v21[0]];
    if ( v8 != v15 )
    {
      v16 = (_DWORD *)((char *)a2 + 172);
      do
      {
        LODWORD(v24) = *(v16 - 2);
        std::vector<unsigned int>::emplace_back<unsigned int &>((__int64)v4, &v24);
        if ( (*v16 & 0x12000) == 0x12000 )
          *((_BYTE *)this + 272) = 1;
        v22 = 0LL;
        v23 = 0LL;
        std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::emplace<unsigned int &,PointerInputMediator::ContactData>(
          (float *)v6,
          (__int64)v21,
          (unsigned __int8 *)&v24,
          (__int64)&v22);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
          (__int64 *)&v22 + 1,
          v17,
          v18,
          v19);
        v16 += 60;
      }
      while ( v16 - 3 != (_DWORD *)v15 );
    }
    return this;
  }
}
