/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180052440 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800E8490 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800E9980 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000A5D8 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180021CBC (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIAudioSessionPolicyControl@@UIAudioSessionInfo@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIAudioSessionInfoInternal@@UIAudioSessionDuckingControl@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024070 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAVCAudioSessionInstanceId@@AEAV?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180041204 (--$emplace@AEAVCAudioSessionInstanceId@@AEAV-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@w.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180041530 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?IsLinkedToProcess@CAudioSession@@QEAA_NK@Z @ 0x18004707C (-IsLinkedToProcess@CAudioSession@@QEAA_NK@Z.c)
 *     ??$Make@VCPerStreamVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerStreamVolumeAudioSession@@@12@XZ @ 0x180047EE4 (--$Make@VCPerStreamVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerStreamVolum.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18004840C (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     _lambda_cbc41e859029890b22757779477c9c18_::operator() @ 0x180064288 (_lambda_cbc41e859029890b22757779477c9c18_--operator().c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x18006471C (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800814EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPerEndpointVolumeAudioSession@@@12@XZ @ 0x1800E6E2C (--$Make@VCPerEndpointVolumeAudioSession@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCPerEndpointV.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E8FDC (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800E8FF8 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        union _RTL_RUN_ONCE *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSessionInstanceId *v7; // r12
  char v10; // r13
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  CAudioSession *v13; // rsi
  int AudioSession; // eax
  int v15; // ebx
  CAudioSession **v16; // rax
  CAudioSession *v17; // rdx
  CAudioSession *v18; // rcx
  GUID v19; // xmm6
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  void *v23; // rdx
  unsigned int v24; // r8d
  const char *v25; // r9
  _QWORD *i; // rbx
  __int64 v27; // rcx
  struct CAudioSession *v28; // rbx
  __int64 v29; // rax
  _DWORD *v30; // rbx
  unsigned int v31; // eax
  const char *v32; // r9
  __int64 result; // rax
  int v34; // eax
  unsigned int v35; // esi
  CAudioSession *v36; // rbx
  struct _RTL_CRITICAL_SECTION *v37; // r12
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // esi
  CAudioSession **v41; // rax
  CAudioSession *v42; // rdx
  CAudioSession *v43; // rcx
  int v44; // r8d
  int v45; // r9d
  int v46; // eax
  unsigned int v47; // edi
  int v48; // [rsp+20h] [rbp-128h]
  CAudioSession *v49; // [rsp+50h] [rbp-F8h] BYREF
  struct CAudioSession *v50; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v51; // [rsp+60h] [rbp-E8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-D8h] BYREF
  int v53[2]; // [rsp+78h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+80h] [rbp-C8h] BYREF
  struct CAudioSession **v55; // [rsp+88h] [rbp-C0h]
  CAudioSessionManager *v56[2]; // [rsp+90h] [rbp-B8h]
  char v57; // [rsp+A0h] [rbp-A8h]
  __int128 v58; // [rsp+A8h] [rbp-A0h]
  char v59; // [rsp+B8h] [rbp-90h]
  GUID v60; // [rsp+C0h] [rbp-88h]
  _BYTE v61[16]; // [rsp+D0h] [rbp-78h] BYREF
  union _RTL_RUN_ONCE *v62; // [rsp+E0h] [rbp-68h] BYREF
  int v63; // [rsp+E8h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v53[0] = a4;
  v7 = a3;
  *(_QWORD *)&v51 = a3;
  v55 = a7;
  v10 = 1;
  *a7 = 0LL;
  v11 = (struct _RTL_CRITICAL_SECTION *)&this[1];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[1]);
  v12 = v11;
  lpCriticalSection = v11;
  v13 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  AudioSession = CAudioSessionManager::FindAudioSession((CAudioSessionManager *)this, v7, &v49);
  try
  {
    if ( AudioSession >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        0LL);
      v36 = v49;
      v37 = (struct _RTL_CRITICAL_SECTION *)((char *)v49 + 544);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v49 + 544));
      *(_QWORD *)fPending = v37;
      if ( (*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)v36 + 1) + 32LL))((__int64)v36 + 8) != 2 )
      {
        v38 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
        if ( !CAudioSession::IsLinkedToProcess(v36, v38) )
        {
          v39 = CAudioSession::RegisterOwnerProcess(v36, a2);
          v40 = v39;
          if ( v39 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA3,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v39,
              v48);
            if ( v37 )
              LeaveCriticalSection(v37);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v49);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v50);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            return v40;
          }
        }
        *((_QWORD *)v36 + 40) = GetTickCount64();
        CAudioSession::StartInactiveTimer(v36);
        v13 = v36;
        v50 = v36;
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v36 + 8LL))(v36);
      }
      if ( v37 )
        LeaveCriticalSection(v37);
      EnterCriticalSection(v11);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        v11);
      v12 = lpCriticalSection;
      v7 = (struct CAudioSessionInstanceId *)v51;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v49);
    if ( v13 )
    {
      if ( (v53[0] & 0x20) != 0 )
        *((_DWORD *)v13 + 102) = 1;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &lpCriticalSection,
        0LL);
      v49 = 0LL;
      v15 = v53[0];
      if ( (v53[0] & 8) != 0 )
      {
        v16 = (CAudioSession **)Microsoft::WRL::Details::Make<CPerStreamVolumeAudioSession,>(&v51);
        v17 = *v16;
        *v16 = 0LL;
        v18 = v49;
        v49 = v17;
        if ( v18 )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      else
      {
        v41 = (CAudioSession **)Microsoft::WRL::Details::Make<CPerEndpointVolumeAudioSession,>(&v51);
        v42 = *v41;
        *v41 = 0LL;
        v43 = v49;
        v49 = v42;
        if ( v43 )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v43 + 16LL))(v43);
      }
      if ( (_QWORD)v51 )
      {
        *(_QWORD *)&v51 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release();
      }
      if ( !v49 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDD,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL,
          v48);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v49);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v50);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return 2147942414LL;
      }
      v19 = GUID_00000000_0000_0000_0000_000000000000;
      if ( (v15 & 4) == 0 && !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 448LL))(a2) )
        v19 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, union _RTL_RUN_ONCE **, __int64))(*(_QWORD *)a2 + 464LL))(
                         a2,
                         &v62,
                         (__int64)v7 + 24);
      v20 = *(_QWORD *)v49;
      v60 = v19;
      v48 = v15;
      v21 = (*(__int64 (__fastcall **)(CAudioSession *, union _RTL_RUN_ONCE *, struct IAudioProcess *, struct CAudioSessionInstanceId *))(v20 + 168))(
              v49,
              this,
              a2,
              v7);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v21,
          v48);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v49);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v50);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v22;
      }
      EnterCriticalSection(v11);
      *(_QWORD *)&v60.Data1 = v11;
      v50 = 0LL;
      if ( (int)CAudioSessionManager::FindAudioSession((CAudioSessionManager *)this, v7, &v50) < 0 )
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<CAudioSessionInstanceId &,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy> &>(
          &this[6],
          v61,
          v7,
          &v49);
        *(_QWORD *)&v51 = this;
        *((_QWORD *)&v51 + 1) = v61;
        v58 = v51;
        v59 = 1;
        *(_QWORD *)&v51 = this;
        *((_QWORD *)&v51 + 1) = &v49;
        *(_OWORD *)v56 = v51;
        v57 = 1;
        *(_QWORD *)&v51 = this;
        fPending[0] = 0;
        if ( !InitOnceBeginInitialize(this + 37, 0, fPending, 0LL) )
          wil::details::in1diag3::_Throw_GetLastError(retaddr, v23, v24, v25);
        if ( fPending[0] )
        {
          v62 = this + 37;
          v63 = 4;
          lambda_cbc41e859029890b22757779477c9c18_::operator()(&v51);
          InitOnceComplete(this + 37, 0, 0LL);
        }
        for ( i = this[36].Ptr; ; i = (_QWORD *)*i )
        {
          if ( !i )
          {
            CAudioSessionManager::NotifyActiveSession((CAudioSessionManager *)this, v49);
            v28 = v50;
            v13 = v49;
            v50 = v49;
            if ( v49 )
              (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v49 + 8LL))(v49);
            if ( v28 )
              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v28 + 16LL))(v28);
            v10 = 0;
            v57 = 0;
            v59 = 0;
            v29 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                    v27,
                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            v30 = *(_DWORD **)(v29 + 8);
            if ( *v30 > 4u && tlgKeywordOn(*(_QWORD *)(v29 + 8), 512LL) )
            {
              fPending[0] = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
              LODWORD(v51) = v53[0];
              *(_QWORD *)v53 = *((_QWORD *)v13 + 82);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (_DWORD)v30,
                (unsigned int)&unk_180191767,
                v44,
                v45,
                (__int64)v53,
                (__int64)&v51,
                (__int64)fPending);
            }
            goto LABEL_25;
          }
          v34 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)v49 + 152LL))(v49, i[1]);
          v35 = v34;
          if ( v34 < 0 )
            break;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x107,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v34,
          v48);
        CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(
          v56[0],
          *(struct CAudioSession **)v56[1]);
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
          v58 + 48,
          **((_QWORD **)&v58 + 1));
        if ( v11 )
          LeaveCriticalSection(v11);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v49);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v50);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v35;
      }
      v13 = v50;
LABEL_25:
      if ( v11 )
        LeaveCriticalSection(v11);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v49);
      v12 = lpCriticalSection;
    }
    v31 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    if ( CAudioSession::IsLinkedToProcess(v13, v31)
      || (v46 = CAudioSession::RegisterOwnerProcess(v13, a2), v47 = v46, v46 >= 0) )
    {
      if ( v10 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v13 + 184LL))(v13);
      v50 = 0LL;
      *v55 = v13;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v50);
      if ( v12 )
        LeaveCriticalSection(v12);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x137,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v46,
        v48);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v50);
      if ( v12 )
        LeaveCriticalSection(v12);
      result = v47;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14E,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v32);
  }
  return result;
}
