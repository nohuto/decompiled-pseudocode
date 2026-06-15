/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18003D4A4
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18003D1C0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$emplace_back@AEAV?$CComPtr@UISessionInternalEvents@@@ATL@@H@?$vector@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@QEAA?A_TAEAV?$CComPtr@UISessionInternalEvents@@@ATL@@$$QEAH@Z @ 0x18003D518 (--$emplace_back@AEAV-$CComPtr@UISessionInternalEvents@@@ATL@@H@-$vector@ULockedListEntry@-$CLock.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+38h] [rbp+10h]
  LPCRITICAL_SECTION v7; // [rsp+40h] [rbp+18h]

  v6 = a2;
  EnterCriticalSection(lpCriticalSection);
  v7 = lpCriticalSection;
  v5 = 1;
  std::vector<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry,std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>::emplace_back<ATL::CComPtr<ISessionInternalEvents> &,int>(
    &lpCriticalSection[1],
    a2,
    &v5);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return 0LL;
}
