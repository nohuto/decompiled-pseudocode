/*
 * XREFs of ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F611C
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8DF0 (-GetSaDeviceForExclusiveStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDesc.c)
 *     ?GetSaDeviceForSharedStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F93C0 (-GetSaDeviceForSharedStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescrip.c)
 * Callees:
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180005E18 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x18001E8D0 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@43@Z @ 0x1800F4AF4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7050 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEA.c)
 *     ?DoExclusiveModePrimaryProfileSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F7264 (-DoExclusiveModePrimaryProfileSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointSto.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800F77F0 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800F9758 (-MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDevi.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E74 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CBtAudioResourceManagerBase::CreateSaDeviceOnMicrophoneEndpoint(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  char v11; // si
  CEndpointStoreCache *v12; // rcx
  const unsigned __int16 *v13; // rdx
  int EndpointStore; // eax
  unsigned int v15; // ebx
  const char *v16; // r9
  __int64 result; // rax
  volatile signed __int32 *v18; // rbx
  int v19; // eax
  unsigned int v20; // esi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  struct ISaDeviceProxy *v30; // [rsp+50h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-50h] BYREF
  struct CEndpointStore *v32[2]; // [rsp+60h] [rbp-48h] BYREF
  char v33; // [rsp+70h] [rbp-38h]
  LARGE_INTEGER v34; // [rsp+78h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-28h] BYREF
  LARGE_INTEGER v36; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  double TimeSec; // [rsp+B0h] [rbp+8h] BYREF

  v11 = 0;
  LOBYTE(TimeSec) = 0;
  PerformanceCount.QuadPart = 0LL;
  v34.QuadPart = 0LL;
  QueryPerformanceFrequency(&v36);
  CQPCStopWatch::Start(&v34);
  try
  {
    v13 = (const unsigned __int16 *)*((_QWORD *)this + 6);
    if ( v13 )
    {
      v32[0] = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v12, v13, v32);
      v15 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12A,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)EndpointStore);
        if ( v32[0] )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v32[0]);
        return v15;
      }
      v18 = (volatile signed __int32 *)v32[0];
      (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v32[0] + 13) + 120LL))(
        *((_QWORD *)v32[0] + 13),
        &lpCriticalSection);
      if ( CBtAudioResourceManagerBase::DoExclusiveModePrimaryProfileSaDevicesExist(this, (struct CEndpointStore *)v18) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x887C007ALL);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
        return 2289827962LL;
      }
      v32[1] = this;
      v33 = 1;
      v19 = CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups(
              this,
              (struct CEndpointStore *)v18,
              (bool *)&TimeSec);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x136,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v19);
        CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
        return v20;
      }
      if ( *((_QWORD *)this + 11) )
      {
        v30 = 0LL;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v30);
        v21 = CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters(this, &v30);
        v22 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v21);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v30);
          CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
LABEL_19:
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
          return v22;
        }
        v23 = CBtAudioResourceManagerBase::MoveDisplacedPrimaryProfileStreamGroupsToSaDevice(this, v30);
        v22 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13F,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v23);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v30);
          CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          goto LABEL_19;
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v30);
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
      v11 = LOBYTE(TimeSec);
    }
    v24 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL))(
            this,
            a2,
            a3,
            a4,
            a5,
            a6,
            0LL,
            0LL,
            a7);
    v25 = v24;
    if ( v24 >= 0 )
    {
      if ( v11 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        v27 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v26,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v16 = (const char *)v27[1];
        if ( *(_DWORD *)v16 > 4u )
        {
          if ( tlgKeywordOn(v27[1], 0x400000004000LL) )
          {
            TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v34);
            v32[0] = *((struct CEndpointStore **)this + 7);
            lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)this + 6);
            v30 = (struct ISaDeviceProxy *)0x1000000;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
              v29,
              byte_180191E72,
              v28,
              v29,
              (__int64)&v30,
              (const WCHAR **)&lpCriticalSection,
              (const WCHAR **)v32,
              (__int64)&TimeSec);
          }
        }
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x146,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v24);
      result = v25;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x157,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                           v16);
  }
  return result;
}
