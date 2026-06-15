/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x180008230
 * Callers:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180008190 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800C6718 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800C7D70 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x1800D5B04 (--$_Uninitialized_move@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@AT.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::_Emplace_reallocate<ATL::CComPtr<ISessionInternalEvents> &,int>(
        __int64 **a1,
        unsigned __int64 a2,
        _QWORD *a3,
        int *a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r13
  HANDLE ProcessHeap; // rax
  char *v14; // r15
  char *v15; // rsi
  int v16; // r12d
  __int64 v17; // rbx
  __int64 *v18; // r12
  __int64 *v19; // rbx
  char *i; // rsi
  __int64 v21; // rcx
  char *v22; // rbx
  __int64 *v23; // r12
  unsigned __int64 v24; // rdx
  char *v26; // [rsp+28h] [rbp-50h]
  void *v27; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v29; // [rsp+90h] [rbp+18h]

  v29 = a3;
  v28 = a2;
  v6 = a2 - (_QWORD)*a1;
  v7 = ((char *)a1[1] - (char *)*a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = ((char *)a1[2] - (char *)*a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v27 = (void *)0xFFFFFFFFFFFFFFFLL;
    v12 = -16LL;
LABEL_35:
    v14 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v12);
    a3 = v29;
    goto LABEL_10;
  }
  v11 = v8;
  if ( v10 + v9 >= v8 )
    v11 = v10 + v9;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v12 = 16 * v11;
  v27 = (void *)v11;
  if ( 16 * v11 >= 0x1000 )
    goto LABEL_35;
  if ( v12 )
  {
    ProcessHeap = GetProcessHeap();
    v14 = (char *)HeapAlloc(ProcessHeap, 0, 16 * v11);
    a3 = v29;
  }
  else
  {
    v14 = 0LL;
  }
  v27 = (void *)v11;
LABEL_10:
  v15 = &v14[v6 & 0xFFFFFFFFFFFFFFF0uLL];
  v26 = v15;
  v16 = *a4;
  v17 = *a3;
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 8LL))(*a3);
  *(_QWORD *)v15 = v17;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  *((_DWORD *)v15 + 2) = v16;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = a1[1];
  v19 = *a1;
  if ( (__int64 *)v28 == v18 )
  {
    for ( i = v14; v19 != v18; v19 += 2 )
    {
      v21 = *v19;
      *(_QWORD *)i = *v19;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
      *((_DWORD *)i + 2) = *((_DWORD *)v19 + 2);
      i += 16;
    }
    v15 = v26;
  }
  else
  {
    std::_Uninitialized_move<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
      *a1,
      v28,
      v14);
    std::_Uninitialized_move<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
      v28,
      a1[1],
      v15 + 16);
  }
  v22 = (char *)*a1;
  if ( *a1 )
  {
    v23 = a1[1];
    if ( v22 != (char *)v23 )
    {
      do
      {
        if ( *(_QWORD *)v22 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 16LL))(*(_QWORD *)v22);
        v22 += 16;
      }
      while ( v22 != (char *)v23 );
      v22 = (char *)*a1;
    }
    v24 = ((char *)a1[2] - v22) & 0xFFFFFFFFFFFFFFF0uLL;
    v28 = v24;
    v27 = v22;
    if ( v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v27, &v28);
      v24 = v28;
      v22 = (char *)v27;
    }
    operator delete(v22, v24);
  }
  *a1 = (__int64 *)v14;
  a1[1] = (__int64 *)&v14[16 * v8];
  a1[2] = (__int64 *)&v14[v12];
  return v15;
}
