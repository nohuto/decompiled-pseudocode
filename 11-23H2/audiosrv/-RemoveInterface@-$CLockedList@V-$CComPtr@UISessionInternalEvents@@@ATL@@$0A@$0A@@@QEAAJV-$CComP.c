/*
 * XREFs of ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18003D30C
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x18003D270 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@@std@@V_lambda_4f6d1d896f0f39008c630c6641fa109d_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_4f6d1d896f0f39008c630c6641fa109d_@@@Z @ 0x18003D3B8 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList@.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x18003D46C (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 */

__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 *a2)
{
  __int64 v4; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  EnterCriticalSection(lpCriticalSection);
  v4 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v9[1] = &v10;
  v10 = 0;
  v9[0] = a2;
  v6 = *(_QWORD *)((__int64 (__fastcall *)(char *, PRTL_CRITICAL_SECTION_DEBUG, __int64, _QWORD *))std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>>,_lambda_4f6d1d896f0f39008c630c6641fa109d_>)(
                    &v11,
                    DebugInfo,
                    v4,
                    v9);
  if ( v6 != v4 )
  {
    v7 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    while ( v4 != v7 )
    {
      if ( *(_QWORD *)v6 != *(_QWORD *)v4 )
        ATL::AtlComPtrAssign((struct IUnknown **)v6, *(struct IUnknown **)v4);
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v4 + 8);
      v6 += 16LL;
      v4 += 16LL;
    }
    std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
      v6,
      *(_QWORD *)&lpCriticalSection[1].LockCount);
    *(_QWORD *)&lpCriticalSection[1].LockCount = v6;
  }
  LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(a2);
  return 0LL;
}
