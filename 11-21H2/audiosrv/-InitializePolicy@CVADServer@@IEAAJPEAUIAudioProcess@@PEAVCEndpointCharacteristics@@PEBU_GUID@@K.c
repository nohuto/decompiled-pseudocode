/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180018880
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019650 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180019510 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001ACB0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001C7F0 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001CAA0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001DD20 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001E150 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_q @ 0x1800C9BAC (WPP_SF_q.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E267C (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800E9564 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        struct CEndpointCharacteristics *a3,
        const struct _GUID *a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  unsigned int v10; // edi
  struct _GUID v11; // xmm0
  __int64 v12; // rax
  int v13; // r15d
  BOOL v14; // esi
  int v15; // edi
  __int64 v16; // rbx
  int v17; // esi
  int v18; // eax
  __int64 v19; // rbx
  unsigned __int16 *v20; // rax
  unsigned __int16 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  CEndpointStoreCache *v24; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v26; // rbx
  void (__fastcall *v27)(struct IAudioDuckingManager *, _QWORD); // rdi
  unsigned int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // edi
  int v31; // eax
  int AudioSession; // eax
  signed __int32 i; // edx
  _QWORD *v34; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // edx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v42; // r8d
  unsigned __int16 *v43; // rbx
  HANDLE ProcessHeap; // rax
  unsigned int v45; // [rsp+20h] [rbp-69h]
  unsigned int v46; // [rsp+20h] [rbp-69h]
  unsigned int v47; // [rsp+40h] [rbp-49h]
  struct CEndpointStore *v48; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 **v49; // [rsp+50h] [rbp-39h] BYREF
  __int64 v50; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-29h]
  struct _GUID v52; // [rsp+68h] [rbp-21h]
  const struct _GUID *v53; // [rsp+78h] [rbp-11h]
  struct _GUID v54; // [rsp+80h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v53 = a4;
  v49 = a6;
  if ( g_ADGProcess
    && LODWORD(g_ADGProcess[2].OwningThread) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
  {
    v10 = a5 | 0x20000000;
  }
  else
  {
    v10 = a5;
  }
  v11 = *a4;
  v52 = v11;
  v54 = v11;
  v12 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v12 = *(_QWORD *)v11.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v12 )
    v10 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  LODWORD(v48) = v10 & 0x10000;
  v51 = v10 & 0x60000000;
  v13 = ((v10 & 0x10000000) != 0) | 2;
  if ( (v10 & 0xA0000) != 0 )
    v13 = (v10 & 0x10000000) != 0;
  v47 = v13;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) )
  {
    v13 |= 8u;
    v47 = v13;
    *((_BYTE *)this + 272) = 0;
  }
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) == 1 )
  {
    v13 &= ~2u;
    v47 = v13;
    if ( !*((_BYTE *)a3 + 9728) )
      *((_BYTE *)this + 272) = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (v10 & 0x2000000) != 0 )
    v47 = v13 | 0x20;
  *((_DWORD *)this + 67) = v10;
  v14 = (_DWORD)v48 != 0;
  v15 = CAudioEndpointId::Initialize((CVADServer *)((char *)this + 72), *((const unsigned __int16 **)this + 26));
  if ( v15 < 0 )
    goto LABEL_79;
  if ( (_DWORD)v48 )
  {
    v16 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v16 = *(_QWORD *)v11.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v16 )
    {
      v15 = -2147024809;
      goto LABEL_77;
    }
    *((struct _GUID *)this + 6) = v52;
  }
  else
  {
    *((struct _GUID *)this + 6) = v52;
    v36 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v36 )
    {
      v37 = -1LL;
      do
        ++v37;
      while ( *(_WORD *)(v36 + 2 * v37) );
    }
    else
    {
      LODWORD(v37) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 88, v36, (unsigned int)v37);
    v38 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v38 )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( *(_WORD *)(v38 + 2 * v39) );
    }
    else
    {
      LODWORD(v39) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 80, v38, (unsigned int)v39);
  }
  *((_DWORD *)this + 30) = v14;
  v15 = CAppAudioSessionId::CalculateStaticId((CVADServer *)((char *)this + 80));
  if ( v15 < 0 )
LABEL_77:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v15);
  if ( v15 < 0
    || ((*((_DWORD *)this + 34) = v14, (v17 = (int)v48) == 0)
      ? (*((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2))
      : (*((_DWORD *)this + 32) = 0),
        *((_DWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2),
        v15 = CAudioSessionInstanceId::CalculateStaticId((CVADServer *)((char *)this + 72)),
        v15 < 0) )
  {
LABEL_79:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v15);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v15,
      v45);
    return (unsigned int)v15;
  }
  v50 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v18 = CAudioSessionInstanceId::ToString((char *)this + 72, &v50);
  v15 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x481,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18,
      v45);
  }
  else
  {
    v19 = (unsigned int)(*(_DWORD *)(v50 - 16) + 1);
    if ( (unsigned __int64)(2 * v19) > 0x40000 )
      v20 = 0LL;
    else
      v20 = (unsigned __int16 *)operator new[](2 * v19, (const struct std::nothrow_t *)&std::nothrow);
    *v49 = v20;
    v21 = *v49;
    if ( *v49 )
    {
      *(_QWORD *)&v52.Data1 = &v49;
      v52.Data4[0] = 1;
      if ( (unsigned __int64)(v19 - 1) > 0x7FFFFFFE )
      {
        v15 = -2147024809;
        if ( v19 )
          *v21 = 0;
      }
      else
      {
        v15 = 0;
        v22 = 2147483646 - v19;
        v23 = v50 - (_QWORD)v21;
        while ( 1 )
        {
          v24 = (CEndpointStoreCache *)(v22 + v19);
          if ( !(v22 + v19) )
            break;
          v24 = (CEndpointStoreCache *)*(unsigned __int16 *)((char *)v21 + v23);
          if ( !(_WORD)v24 )
          {
            if ( v19 )
              break;
LABEL_83:
            --v21;
            v15 = -2147024774;
            break;
          }
          *v21++ = (unsigned __int16)v24;
          if ( !--v19 )
            goto LABEL_83;
        }
        *v21 = 0;
        if ( v15 >= 0 )
        {
          v48 = 0LL;
          EndpointStore = CEndpointStoreCache::GetEndpointStore(v24, *((const unsigned __int16 **)this + 26), &v48);
          v15 = EndpointStore;
          if ( EndpointStore < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x48B,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)(unsigned int)EndpointStore,
              v45);
            v26 = v48;
          }
          else
          {
            v26 = v48;
            *((_QWORD *)this + 19) = *((_QWORD *)v48 + 12);
            if ( g_DuckingManager )
            {
              v27 = *(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(*(_QWORD *)g_DuckingManager + 48LL);
              v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
              v27(g_DuckingManager, v28);
            }
            if ( v17 )
            {
              v29 = *(_QWORD *)&v53->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
              if ( *(_QWORD *)&v53->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                v29 = *(_QWORD *)v53->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
              v30 = v47;
              if ( !v29 )
                v30 = v47 | 4;
            }
            else
            {
              v30 = v47;
            }
            v31 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
            if ( v31 == 1 )
            {
              v40 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
              AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v40, v41, v42);
            }
            else if ( v31 == 2 )
            {
              CPolicyConfig::DisconnectAllRenderEndpoints();
            }
            if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                12LL,
                &WPP_862f1ccbb3a43028c75406f124deb6be_Traceguids,
                this);
            }
            AudioSession = CAudioSessionManager::CreateAudioSession(
                             *((CAudioSessionManager **)this + 19),
                             a2,
                             (CVADServer *)((char *)this + 72),
                             v30,
                             v51,
                             *((_DWORD *)this + 16),
                             (struct CAudioSession **)this + 21);
            v15 = AudioSession;
            if ( AudioSession < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4B6,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)AudioSession,
                v46);
            }
            else
            {
              v52.Data4[0] = 0;
              v15 = 0;
            }
          }
          if ( v26 )
          {
            for ( i = *((_DWORD *)v26 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)v26 + 3) )
            {
              if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v26 + 3, i - 1, i) )
                break;
            }
            if ( i == 1 )
            {
              (*(void (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v48 + 24LL))(v48, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                  + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
          }
          goto LABEL_58;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x488,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v15,
        v45);
LABEL_58:
      if ( v52.Data4[0] )
      {
        v43 = *v49;
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v43);
        *v49 = 0LL;
      }
      goto LABEL_60;
    }
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x485,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x8007000ELL,
      v45);
  }
LABEL_60:
  v34 = (_QWORD *)(v50 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v34 + 8LL))(*v34);
  return (unsigned int)v15;
}
