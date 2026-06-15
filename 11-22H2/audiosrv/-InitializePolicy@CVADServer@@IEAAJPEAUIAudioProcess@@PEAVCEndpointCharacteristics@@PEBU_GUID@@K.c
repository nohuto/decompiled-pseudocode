/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18003E018 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001C878 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x18001CB14 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x18003EE80 (MIDL_user_allocate.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18003EEA0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     ?DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800E9ECC (-DisconnectSessionsForTsSession@AudioSessionManagerProvider@@YAXKW4__MIDL___MIDL_itf_mmdeviceapi.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1801157EC (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     wil::details::lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___::_lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___ @ 0x18011C70C (wil--details--lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___--_lambda_call__lambda_bc72.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x180150C68 (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
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
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // r13d
  int v13; // r12d
  int v14; // esi
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  unsigned __int16 *v18; // rbx
  __int64 v19; // rdi
  char *v20; // rcx
  int v21; // eax
  CEndpointStoreCache *v22; // rcx
  unsigned int v23; // edi
  int EndpointStore; // eax
  struct CEndpointStore *v25; // rbx
  void (__fastcall *v26)(struct IAudioDuckingManager *, _QWORD); // rdi
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // edx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v34; // r8d
  struct CEndpointStore *v35; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-41h]
  unsigned __int16 *v37; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int16 **v38; // [rsp+58h] [rbp-31h] BYREF
  const struct _GUID *v39; // [rsp+60h] [rbp-29h]
  ATL::CStringData *v40; // [rsp+68h] [rbp-21h]
  struct _GUID v41; // [rsp+70h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v39 = a4;
  v38 = a6;
  if ( g_ADGProcess
    && LODWORD(g_ADGProcess[2].OwningThread) == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
  {
    v10 = a5 | 0x20000000;
  }
  else
  {
    v10 = a5;
  }
  v41 = *a4;
  v11 = *(_QWORD *)&v41.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v41.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v11 = *(_QWORD *)v41.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v11 )
    v10 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  v12 = v10 & 0x10000;
  v36 = v10 & 0x60000000;
  v13 = v10 & 0x10000000;
  v14 = (v10 & 0x10000000) != 0;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3)
    && (v10 & 0x20000) != 0
    && ((*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 504LL))(a2)
     || CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(a3)) )
  {
    v10 |= 0x80000000;
  }
  if ( (v10 & 0xA0000) == 0 )
    v14 = (v13 != 0) + 2;
  if ( !(*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) )
  {
    v14 |= 8u;
    *((_BYTE *)this + 240) = 0;
  }
  if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a3 + 56LL))(a3) == 1 )
  {
    v14 &= ~2u;
    if ( !*((_BYTE *)a3 + 8236) )
      *((_BYTE *)this + 240) = 0;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (v10 & 0x2000000) != 0 )
    v14 |= 0x20u;
  *((_DWORD *)this + 59) = v10;
  v15 = CAudioSessionInstanceId::Initialize(
          (CVADServer *)((char *)this + 48),
          a2,
          *((const unsigned __int16 **)this + 23),
          &v41,
          v12 != 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x474,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v15);
  }
  else
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v37, (__int64)&ATL::g_strmgr);
    v17 = CAudioSessionInstanceId::ToString((__int64)this + 48, &v37);
    v16 = v17;
    if ( v17 >= 0 )
    {
      v18 = v37;
      v40 = (ATL::CStringData *)(v37 - 12);
      v19 = (unsigned int)(*((_DWORD *)v37 - 4) + 1);
      *v38 = (unsigned __int16 *)MIDL_user_allocate(2 * v19);
      v20 = (char *)*v38;
      if ( *v38 )
      {
        *(_QWORD *)&v41.Data1 = &v38;
        v41.Data4[0] = 1;
        v21 = StringCchCopyW(v20, (unsigned int)v19, (char *)v18);
        v23 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x47E,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v21);
        }
        else
        {
          v35 = 0LL;
          EndpointStore = CEndpointStoreCache::GetEndpointStore(v22, *((const unsigned __int16 **)this + 23), &v35);
          v23 = EndpointStore;
          if ( EndpointStore < 0 )
          {
            v31 = 1153LL;
          }
          else
          {
            v25 = v35;
            *((_QWORD *)this + 16) = *((_QWORD *)v35 + 12);
            if ( g_DuckingManager )
            {
              v26 = *(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(*(_QWORD *)g_DuckingManager + 48LL);
              v27 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
              v26(g_DuckingManager, v27);
            }
            if ( v12 )
            {
              v28 = *(_QWORD *)&v39->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
              if ( *(_QWORD *)&v39->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                v28 = *(_QWORD *)v39->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
              if ( !v28 )
                v14 |= 4u;
            }
            v29 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 208LL))(g_PolicyManager);
            if ( v29 == 1 )
            {
              v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
              AudioSessionManagerProvider::DisconnectSessionsForTsSession((AudioSessionManagerProvider *)v32, v33, v34);
            }
            else if ( v29 == 2 )
            {
              CPolicyConfig::DisconnectAllRenderEndpoints();
            }
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                12LL,
                &WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids,
                this);
            }
            EndpointStore = CAudioSessionManager::CreateAudioSession(
                              *((union _RTL_RUN_ONCE **)this + 16),
                              a2,
                              (CVADServer *)((char *)this + 48),
                              v14,
                              v36,
                              *((_DWORD *)this + 10),
                              (struct CAudioSession **)this + 18);
            v23 = EndpointStore;
            if ( EndpointStore >= 0 )
            {
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v25);
              v23 = 0;
LABEL_37:
              ATL::CStringData::Release(v40);
              return v23;
            }
            v31 = 1196LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v31,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)EndpointStore);
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v35);
        }
        wil::details::lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___::_lambda_call__lambda_bc7259ce5c15dd8eb87bc846ef8d4aa0___(&v41);
        goto LABEL_37;
      }
      v23 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_37;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x477,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v17);
    ATL::CStringData::Release((ATL::CStringData *)(v37 - 12));
  }
  return v16;
}
