/*
 * XREFs of ??$construct@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$_Default_allocator_traits@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@SAXAEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@1@QEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x18003D220
 * Callers:
 *     ??$emplace_back@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@QEAA?A_TAEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x18003D518 (--$emplace_back@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@-$CLock.c)
 *     ??$_Emplace_reallocate@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@QEAAPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU23@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x18003D55C (--$_Emplace_reallocate@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@UISessionInternalEvents@@@ATL@@IEAA@PEAUISessionInternalEvents@@@Z @ 0x18003D2D0 (--0-$CComPtrBase@UISessionInternalEvents@@@ATL@@IEAA@PEAUISessionInternalEvents@@@Z.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::construct<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,ATL::CComPtr<ISessionInternalEvents> &,int>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int *a4)
{
  int v4; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v4 = *a4;
  ATL::CComPtrBase<ISessionInternalEvents>::CComPtrBase<ISessionInternalEvents>(&v7, *a3);
  ATL::CComPtrBase<ISessionInternalEvents>::CComPtrBase<ISessionInternalEvents>(a2, v7);
  *(_DWORD *)(a2 + 8) = v4;
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
}
