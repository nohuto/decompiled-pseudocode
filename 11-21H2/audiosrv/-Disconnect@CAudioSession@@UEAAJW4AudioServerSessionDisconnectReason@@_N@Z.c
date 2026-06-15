/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D6EF0
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D7200 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D72A0 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180009028 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x180020030 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005D138 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIAPOWrapperSrv@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$_Insert_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@1Uforward_iterator_tag@1@@Z @ 0x1800D5648 (--$_Insert_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800D72F4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800D94F0 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  enum AudioSessionDisconnectReason v8; // esi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // r13
  __int64 **v12; // rax
  __int64 *v13; // r12
  _QWORD *v14; // rcx
  __int64 *v15; // rbx
  unsigned int v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  const char *v21; // r9
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  void *v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+98h] [rbp+10h] BYREF
  char v28; // [rsp+A0h] [rbp+18h]
  _QWORD *v29; // [rsp+A8h] [rbp+20h]

  v28 = a3;
  v5 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u
    && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
  {
    v27 = a2;
    v26 = *(void **)(a1 + 656);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v5,
      byte_180188B86,
      v6,
      v7,
      &v26,
      (__int64)&v27);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v26 = (void *)(a1 + 64);
  v8 = DisconnectReasonExclusiveModeOverride;
  if ( a2 == 5 )
  {
    v9 = *(_QWORD *)(a1 + 112);
    if ( v9 == *(_QWORD *)(a1 + 120) || *(_BYTE *)(*(_QWORD *)v9 + 40LL) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v26);
      return 0LL;
    }
  }
  v23 = 0LL;
  v11 = 0LL;
  v24 = 0LL;
  v12 = (__int64 **)(a1 + 112);
  if ( (__int128 *)(a1 + 112) == &v23 )
  {
    v29 = (_QWORD *)*((_QWORD *)&v23 + 1);
    v13 = (__int64 *)v23;
  }
  else
  {
    v13 = *v12;
    *v12 = 0LL;
    *(_QWORD *)&v23 = v13;
    v29 = *(_QWORD **)(a1 + 120);
    v14 = v29;
    *(_QWORD *)(a1 + 120) = 0LL;
    *((_QWORD *)&v23 + 1) = v14;
    v11 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 128) = 0LL;
    v24 = v11;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
  v22 = (struct _RTL_CRITICAL_SECTION *)(a1 + 136);
  v15 = v29;
  try
  {
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
      (__int64 **)(a1 + 176),
      *(__int64 **)(a1 + 184),
      v13,
      v29);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IAPOWrapperSrv,wil::err_returncode_policy>>>(v13, v15);
      std::_Deallocate<16,0>(v13, 8 * ((v11 - (__int64)v13) >> 3));
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v26);
    v16 = CAudioSession::DisconnectStreamList((CAudioSession *)a1);
    if ( !*(_DWORD *)(a1 + 336) )
      CAudioSession::PostStateCheckExpirationWork((CAudioSession *)a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    *(_QWORD *)&v23 = &CAudioSessionDisconnected::`vftable';
    *((_QWORD *)&v23 + 1) = a1;
    LODWORD(v24) = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
      (LPCRITICAL_SECTION)(a1 + 432),
      (void (__fastcall ***)(_QWORD, unsigned __int64 *))&v23);
    if ( !v28 )
      goto LABEL_30;
    if ( !a2 )
    {
      v8 = DisconnectReasonDeviceRemoval;
      goto LABEL_29;
    }
    v17 = a2 - 1;
    if ( !v17 )
      goto LABEL_24;
    v18 = v17 - 1;
    if ( !v18 )
    {
      v8 = DisconnectReasonFormatChanged;
      goto LABEL_29;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v8 = DisconnectReasonSessionLogoff;
      goto LABEL_29;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v8 = DisconnectReasonSessionDisconnected;
      goto LABEL_29;
    }
    if ( v20 != 1 )
LABEL_24:
      v8 = DisconnectReasonServerShutdown;
LABEL_29:
    CAudioSession::NotifyClientOfDisconnection((CAudioSession *)a1, v8);
LABEL_30:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    result = v16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x95C,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v21);
  }
  return result;
}
