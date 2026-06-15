/*
 * XREFs of ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800DFCE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     ??$_Destroy_range@V?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@std@@@std@@YAXPEAULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAU12@AEAV?$allocator@ULockedListEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@@0@@Z @ 0x1800CF768 (--$_Destroy_range@V-$allocator@ULockedListEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x1800D5EFC (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     ??$_Move_unchecked@PEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@@std@@YAPEAULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@PEAU12@00@Z @ 0x1800DE634 (--$_Move_unchecked@PEAULockedListEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@std@@V_lambda_528344502efd793a61e0fa482b585e6c_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@@std@@@std@@@0@V10@V10@V_lambda_528344502efd793a61e0fa482b585e6c_@@@Z @ 0x1800DEE40 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-_ea_1800DEE40.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::DeleteAudioSessionClientNotification(
        CAudioSessionManager *this,
        struct IAudioProcess *a2)
{
  char *v4; // rdi
  __int64 *v5; // rbx
  __int64 **v6; // rax
  __int64 *v7; // rbx
  int v9; // [rsp+20h] [rbp-38h]
  __int64 *v10; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+78h] [rbp+20h] BYREF

  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids,
      this,
      v9);
  }
  v4 = (char *)this + 176;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(
    &v13,
    (__int64)a2);
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v14 = (struct _RTL_CRITICAL_SECTION *)v4;
  v12 = 0;
  v5 = (__int64 *)*((_QWORD *)v4 + 6);
  v11[0] = &v13;
  v11[1] = &v12;
  v6 = std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry>>>,_lambda_528344502efd793a61e0fa482b585e6c_>(
         &v10,
         *((__int64 **)v4 + 5),
         v5,
         (__int64)v11);
  if ( *v6 != v5 )
  {
    v7 = std::_Move_unchecked<CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *,CLockedList<CAudioSessionNotificationProcess,1,0>::LockedListEntry *>(
           v5,
           *((__int64 **)v4 + 6),
           *v6);
    std::_Destroy_range<std::allocator<CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::LockedListEntry>>(
      v7,
      *((__int64 **)v4 + 6));
    *((_QWORD *)v4 + 6) = v7;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return 0LL;
}
