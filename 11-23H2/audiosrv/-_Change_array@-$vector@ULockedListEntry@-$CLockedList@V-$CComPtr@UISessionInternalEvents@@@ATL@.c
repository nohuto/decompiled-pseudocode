/*
 * XREFs of ?_Change_array@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@AEAAXQEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@_K1@Z @ 0x18003D6C8
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x18003D55C (--$_Emplace_reallocate@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x18003D46C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::_Change_array(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
      v6,
      a1[1]);
    result = std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = &a2[2 * a3];
  a1[2] = &a2[2 * a4];
  return result;
}
