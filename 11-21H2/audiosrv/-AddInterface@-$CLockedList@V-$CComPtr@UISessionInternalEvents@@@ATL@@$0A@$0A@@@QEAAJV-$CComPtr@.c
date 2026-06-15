/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180008190
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180008110 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x180008230 (--$_Emplace_reallocate@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$construct@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@1@QEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x1800D5BCC (--$construct@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        _QWORD *a2)
{
  __int64 v4; // rcx
  HANDLE v5; // rdx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h]
  LPCRITICAL_SECTION v9; // [rsp+50h] [rbp+18h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  v9 = lpCriticalSection;
  v7 = 1;
  v5 = *(HANDLE *)&lpCriticalSection[1].LockCount;
  if ( v5 == lpCriticalSection[1].OwningThread )
  {
    std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::_Emplace_reallocate<ATL::CComPtr<ISessionInternalEvents> &,int>(
      &lpCriticalSection[1],
      v5,
      a2,
      &v7);
  }
  else
  {
    std::_Default_allocator_traits<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::construct<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,ATL::CComPtr<ISessionInternalEvents> &,int>(
      v4,
      v5,
      a2,
      &v7);
    *(_QWORD *)&lpCriticalSection[1].LockCount += 16LL;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return 0LL;
}
