/*
 * XREFs of ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x180026460
 * Callers:
 *     ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18002639C (--$_Assign_range@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Uninitialized_copy<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  signed __int64 v6; // rsi
  signed __int64 v7; // rbp
  __int64 v8; // rcx

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v6 = (char *)a1 - (char *)a3;
    v7 = (char *)a3 - (char *)a1;
    do
    {
      v8 = *v5;
      *v3 = *v5;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *(_DWORD *)((char *)v5 + v7 + 8) = *(_DWORD *)((char *)v5 + v7 + v6 + 8);
      v3 += 2;
      v5 += 2;
    }
    while ( v5 != a2 );
  }
  return v3;
}
