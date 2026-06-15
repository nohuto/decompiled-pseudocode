/*
 * XREFs of ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC
 * Callers:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180024110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E80A8 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000A5D8 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ??0CAudioSessionInstanceId@@QEAA@AEBV0@@Z @ 0x1800193E0 (--0CAudioSessionInstanceId@@QEAA@AEBV0@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180041204 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBVCAudioSessionInstanceId@@@Z @ 0x1800413F4 (-erase@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18004840C (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x1800E3B38 (WPP_SF_Sd.c)
 *     WPP_SF_SS @ 0x1800E6B84 (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionManager::OnSessionStateChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  CAudioSessionManager *v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v19; // [rsp+20h] [rbp-C8h]
  struct CAudioSession *v20; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-B0h] BYREF
  char *v22; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v23[24]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v24[72]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v21 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(struct IAudioSessionInfo *, GUID *, __int64 **))a2)(
         a2,
         &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
         &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v7,
      v19);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
    return v8;
  }
  else
  {
    v20 = 0LL;
    v9 = *v21;
    v20 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, struct CAudioSession **))(v9 + 24))(v21, &v20);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v10,
        v19);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
      return v11;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          19,
          (unsigned int)&WPP_c22fced76a16385f24e46043528014d7_Traceguids,
          0,
          a4);
        v12 = WPP_GLOBAL_Control;
      }
      if ( a3 == AudioSessionStateExpired )
      {
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)v12 + 2), 20LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, a4);
        }
        CAudioSessionInstanceId::CAudioSessionInstanceId(
          (CAudioSessionInstanceId *)v24,
          (struct CAudioSession *)((char *)v20 + 584));
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        v22 = (char *)this + 8;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            21,
            (unsigned int)&WPP_c22fced76a16385f24e46043528014d7_Traceguids,
            0,
            v25);
        }
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
          (char *)this + 48,
          v23,
          v24,
          &v20);
        if ( this != (CAudioSessionManager *)-8LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v24);
        v12 = WPP_GLOBAL_Control;
      }
      if ( a4 == 1 )
      {
        CAudioSessionManager::NotifyActiveSession(this, v20);
      }
      else if ( a4 == 2 )
      {
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)v12 + 2), 22LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, 0LL);
        }
        CAudioSessionInstanceId::CAudioSessionInstanceId(
          (CAudioSessionInstanceId *)v24,
          (struct CAudioSession *)((char *)v20 + 584));
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23,
            (unsigned int)&WPP_c22fced76a16385f24e46043528014d7_Traceguids,
            0,
            v25);
        }
        if ( std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::erase(
               (char *)this + 48,
               v24) )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids);
          }
          CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(this, v20);
          v14 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v13,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                           + 8);
          if ( *v14 > 4u && tlgKeywordOn((__int64)v14, 512LL) )
          {
            v22 = (char *)*((_QWORD *)v20 + 82);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              v15,
              (unsigned int)&unk_180191736,
              v16,
              v17,
              (__int64)&v22);
          }
        }
        else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
               && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, v25);
        }
        if ( this != (CAudioSessionManager *)-8LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
        CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v24);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
      return 0LL;
    }
  }
}
