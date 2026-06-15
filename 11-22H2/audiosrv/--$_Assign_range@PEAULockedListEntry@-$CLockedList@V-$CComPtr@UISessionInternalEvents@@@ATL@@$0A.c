/*
 * XREFs of ??$_Assign_range@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@AEAAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@0Uforward_iterator_tag@1@@Z @ 0x18002639C
 * Callers:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 * Callees:
 *     ??$_Copy_unchecked@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@PEAU12@00@Z @ 0x180003FA8 (--$_Copy_unchecked@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$.c)
 *     ??$_Uninitialized_copy@PEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@0PEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x180026460 (--$_Uninitialized_copy@PEAULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@AT.c)
 *     ?_Clear_and_reserve_geometric@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@AEAAX_K@Z @ 0x180026CC0 (-_Clear_and_reserve_geometric@-$vector@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionIntern.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x18003D46C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 */

__int64 __fastcall std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::_Assign_range<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbx

  v3 = (a3 - a2) >> 4;
  v5 = (a1[1] - *a1) >> 4;
  v6 = a2;
  if ( v3 <= v5 )
  {
    v11 = *a1 + 16 * v3;
    std::_Copy_unchecked<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *>(
      a2,
      a3,
      *a1);
    result = std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
               v11,
               a1[1]);
  }
  else
  {
    if ( v3 > (a1[2] - *a1) >> 4 )
    {
      std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::_Clear_and_reserve_geometric(
        a1,
        (a3 - a2) >> 4);
      v5 = 0LL;
    }
    v8 = *a1;
    v9 = v6 + 16 * v5;
    while ( v6 != v9 )
    {
      if ( *(_QWORD *)v8 != *(_QWORD *)v6 )
        ATL::AtlComPtrAssign((struct IUnknown **)v8, *(struct IUnknown **)v6);
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v6 + 8);
      v8 += 16LL;
      v6 += 16LL;
    }
    result = std::_Uninitialized_copy<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry *,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
               v9,
               a3,
               a1[1]);
    v11 = result;
  }
  a1[1] = v11;
  return result;
}
