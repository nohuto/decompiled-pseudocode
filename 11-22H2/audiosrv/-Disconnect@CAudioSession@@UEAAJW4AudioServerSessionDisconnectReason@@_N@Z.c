/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D80
 * Callers:
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D30 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DF710 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18001C500 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@st.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180022708 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002625C (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180050FC4 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ??$_Insert_range@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@1Uforward_iterator_tag@1@@Z @ 0x1800511C4 (--$_Insert_range@PEAV-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F6A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  _DWORD *v5; // rcx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  enum AudioSessionDisconnectReason v9; // esi
  __int64 **v10; // rax
  __int64 *v11; // r13
  __int64 v12; // r12
  __int64 *v13; // rcx
  unsigned int v14; // r15d
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v20; // rax
  __int128 v21; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h]
  __int64 *v23; // [rsp+90h] [rbp+8h] BYREF
  int v24; // [rsp+98h] [rbp+10h] BYREF
  char v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v25 = a3;
  v5 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   a1,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 512LL) )
  {
    v24 = a2;
    v23 = *(__int64 **)(a1 + 656);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_180191639,
      v7,
      v8,
      (__int64)&v23,
      (__int64)&v24);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v26 = a1 + 64;
  v9 = DisconnectReasonExclusiveModeOverride;
  if ( a2 != 5 )
  {
LABEL_5:
    v10 = (__int64 **)(a1 + 112);
    v21 = 0LL;
    v22 = 0LL;
    v11 = 0LL;
    v23 = 0LL;
    v12 = 0LL;
    if ( (__int128 *)(a1 + 112) != &v21 )
    {
      v11 = *v10;
      *v10 = 0LL;
      *(_QWORD *)&v21 = v11;
      v23 = *(__int64 **)(a1 + 120);
      v13 = v23;
      *(_QWORD *)(a1 + 120) = 0LL;
      *((_QWORD *)&v21 + 1) = v13;
      v12 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 128) = 0LL;
      v22 = v12;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::_Insert_range<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
      a1 + 176,
      *(_QWORD *)(a1 + 184),
      v21,
      *((_QWORD *)&v21 + 1));
    if ( a1 != -136 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 136));
    if ( v11 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(v11, v23);
      std::_Deallocate<16,0>(v11, 8 * ((v12 - (__int64)v11) >> 3));
    }
    if ( a1 != -64 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    v14 = CAudioSession::DisconnectStreamList((CAudioSession *)a1);
    if ( !*(_DWORD *)(a1 + 336) )
      CAudioSession::PostStateCheckExpirationWork((CAudioSession *)a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    *(_QWORD *)&v21 = &CAudioSessionDisconnected::`vftable';
    *((_QWORD *)&v21 + 1) = a1;
    LODWORD(v22) = a2;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
      (LPCRITICAL_SECTION)(a1 + 432),
      (void (__fastcall ***)(_QWORD, void **))&v21);
    if ( !v25 )
      goto LABEL_23;
    if ( !a2 )
    {
      v9 = DisconnectReasonDeviceRemoval;
      goto LABEL_22;
    }
    v15 = a2 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( !v16 )
      {
        v9 = DisconnectReasonFormatChanged;
        goto LABEL_22;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v9 = DisconnectReasonSessionLogoff;
        goto LABEL_22;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v9 = DisconnectReasonSessionDisconnected;
LABEL_22:
        CAudioSession::NotifyClientOfDisconnection((CAudioSession *)a1, v9);
LABEL_23:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
        return v14;
      }
      if ( v18 == 1 )
        goto LABEL_22;
    }
    v9 = DisconnectReasonServerShutdown;
    goto LABEL_22;
  }
  v20 = *(_QWORD *)(a1 + 112);
  if ( v20 == *(_QWORD *)(a1 + 120) )
  {
    if ( a1 != -64 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    return 0LL;
  }
  else
  {
    if ( !*(_BYTE *)(*(_QWORD *)v20 + 40LL) )
      goto LABEL_5;
    if ( a1 != -64 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
    return 0LL;
  }
}
