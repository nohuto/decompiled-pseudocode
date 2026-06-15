/*
 * XREFs of _std::vector_CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::LockedListEntry_std::allocator_CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_ISessionInternalEvents__&_int__::_1_::catch$14 @ 0x18006CB60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x1800CF768 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 */

void __fastcall __noreturn std::vector_CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::LockedListEntry_std::allocator_CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::LockedListEntry___::_Emplace_reallocate_ATL::CComPtr_ISessionInternalEvents____int__::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
    *(_QWORD *)(a2 + 48),
    *(_QWORD *)(a2 + 56));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 128));
  throw;
}
