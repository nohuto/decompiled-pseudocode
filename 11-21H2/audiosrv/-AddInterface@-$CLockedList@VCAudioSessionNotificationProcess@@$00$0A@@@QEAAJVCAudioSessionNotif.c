/*
 * XREFs of ?AddInterface@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJVCAudioSessionNotificationProcess@@@Z @ 0x1800DF7F4
 * Callers:
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800DF700 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$emplace_back@AEAVCAudioSessionNotificationProcess@@H@?$vector@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@V?$allocator@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@QEAAAEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@AEAVCAudioSessionNotificationProcess@@$$QEAH@Z @ 0x1800DEB08 (--$emplace_back@AEAVCAudioSessionNotificationProcess@@H@-$vector@ULockedListEntry@-$CLockedList@.c)
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x1800DF554 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CAudioSessionNotificationProcess,1,0>::AddInterface(__int64 a1, __int64 *a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)a1);
  v11 = (struct _RTL_CRITICAL_SECTION *)a1;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 40);
  try
  {
    while ( v5 != v4 && !operator==((__int64 *)v5, a2) )
      v5 += 16LL;
    if ( v5 == *(_QWORD *)(a1 + 48) )
    {
      v9 = 1;
      std::vector<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry,std::allocator<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>::emplace_back<CAudioSessionNotificationProcess &,int>(
        (__int64 *)(a1 + 40),
        a2,
        (int *)&v9);
    }
    else
    {
      ++*(_DWORD *)(v5 + 8);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v11);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a2);
    result = 0LL;
  }
  catch ( ... )
  {
    v9 = wil::details::in1diag3::Return_CaughtException(
           retaddr,
           (void *)0x89,
           (int)"avcore\\audiocore\\Include\\LockedList.h",
           v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10);
    return v9;
  }
  return result;
}
