/*
 * XREFs of ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F6550
 * Callers:
 *     ?GetSaDeviceForSharedStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F9370 (-GetSaDeviceForSharedStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescrip.c)
 * Callees:
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x180005E18 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x18001E8D0 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@43@Z @ 0x1800F4AA4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800F7000 (-CreateSecondaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEA.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F735C (-DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7640 (-DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpoi.c)
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800F77A0 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800F9708 (-MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDevi.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBtAudioResourceManagerBase::CreateSaDeviceOnRenderEndpoint(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  bool v10; // si
  char v11; // r15
  CEndpointStoreCache *v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  const unsigned __int16 *v14; // rdx
  int EndpointStore; // eax
  unsigned int v16; // edi
  const char *v17; // r9
  __int64 result; // rax
  struct CEndpointStore *v19; // rdi
  struct _RTL_CRITICAL_SECTION **v20; // rsi
  CBtAudioResourceManagerBase *v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  LPCRITICAL_SECTION v24; // rdi
  unsigned __int8 (__fastcall *v25)(CBtAudioResourceManagerBase *, struct ISaDeviceProxy **); // rax
  int v26; // eax
  unsigned int v27; // esi
  int SecondaryProfileRenderSaDeviceWithDefaultParameters; // eax
  unsigned int v29; // esi
  unsigned __int8 v30; // al
  __int64 *LockSemaphore; // rcx
  bool v32; // zf
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // esi
  __int64 (__fastcall *v36)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **); // rsi
  int v37; // eax
  unsigned int v38; // esi
  int v39; // eax
  unsigned int v40; // esi
  int v41; // eax
  unsigned int v42; // esi
  __int64 v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  LPCRITICAL_SECTION v47[2]; // [rsp+50h] [rbp-88h] BYREF
  struct ISaDeviceProxy *v48[2]; // [rsp+60h] [rbp-78h] BYREF
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+70h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+78h] [rbp-60h] BYREF
  char v51; // [rsp+88h] [rbp-50h]
  LARGE_INTEGER v52; // [rsp+90h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-40h] BYREF
  LARGE_INTEGER v54[2]; // [rsp+A0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  struct ISaDeviceProxy *v56; // [rsp+E0h] [rbp+8h] BYREF
  struct EndpointCharacteristicsDescriptor *v57; // [rsp+E8h] [rbp+10h]

  v57 = a2;
  v10 = 0;
  v11 = 0;
  LOBYTE(v56) = 0;
  PerformanceCount.QuadPart = 0LL;
  v52.QuadPart = 0LL;
  QueryPerformanceFrequency(v54);
  CQPCStopWatch::Start(&v52);
  try
  {
    v13 = 0LL;
    v49 = 0LL;
    v14 = (const unsigned __int16 *)*((_QWORD *)this + 7);
    if ( v14 )
    {
      v48[0] = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v12, v14, v48);
      v16 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F8,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)EndpointStore);
        if ( v48[0] )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v48[0]);
        return v16;
      }
      v19 = v48[0];
      v20 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v48[0] + 13) + 120LL))(
                                               *((_QWORD *)v48[0] + 13),
                                               lpCriticalSection);
      if ( &v49 != v20 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &v49,
          *v20);
        *v20 = 0LL;
        v13 = v49;
      }
      v21 = (CBtAudioResourceManagerBase *)lpCriticalSection[0];
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      v10 = CBtAudioResourceManagerBase::DoMicrophoneSaDevicesExist(v21, v19);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19);
    }
    lpCriticalSection[0] = 0LL;
    v22 = CEndpointStoreCache::GetEndpointStore(
            v12,
            *((const unsigned __int16 **)this + 6),
            (struct CEndpointStore **)lpCriticalSection);
    v23 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x301,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v22);
      if ( lpCriticalSection[0] )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)lpCriticalSection[0]);
      if ( v13 )
        LeaveCriticalSection(v13);
      return v23;
    }
    v24 = lpCriticalSection[0];
    (*(void (__fastcall **)(HANDLE, LPCRITICAL_SECTION *))(*(_QWORD *)lpCriticalSection[0][2].LockSemaphore + 120LL))(
      lpCriticalSection[0][2].LockSemaphore,
      v47);
    v25 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, struct ISaDeviceProxy **))(*(_QWORD *)this + 144LL);
    *(_OWORD *)v48 = *((_OWORD *)a3 + 3);
    if ( v10 )
    {
      if ( v25(this, v48) )
      {
        v26 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL))(
                this,
                v57,
                a3,
                a4,
                a5,
                a6,
                0LL,
                0LL,
                a7);
        v27 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x30C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v26);
          if ( v47[0] )
            LeaveCriticalSection(v47[0]);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
          if ( v13 )
            LeaveCriticalSection(v13);
          return v27;
        }
        goto LABEL_94;
      }
      if ( (*(unsigned __int8 (__fastcall **)(HANDLE, __int64))(*(_QWORD *)v24[2].LockSemaphore + 136LL))(
             v24[2].LockSemaphore,
             1LL) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x315,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x887C007ALL);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return 2289827962LL;
      }
      v56 = 0LL;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
      if ( CBtAudioResourceManagerBase::DoSecondaryProfileSharedModeRenderSaDevicesExist(
             this,
             (struct CEndpointStore *)v24,
             &v56) )
      {
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v56);
        *a7 = v56;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return 0LL;
      }
      SecondaryProfileRenderSaDeviceWithDefaultParameters = CBtAudioResourceManagerBase::CreateSecondaryProfileRenderSaDeviceWithDefaultParameters(
                                                              this,
                                                              a7);
      v29 = SecondaryProfileRenderSaDeviceWithDefaultParameters;
      if ( SecondaryProfileRenderSaDeviceWithDefaultParameters < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x321,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)SecondaryProfileRenderSaDeviceWithDefaultParameters);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return v29;
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
LABEL_94:
      if ( v47[0] )
        LeaveCriticalSection(v47[0]);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
      if ( v13 )
        LeaveCriticalSection(v13);
      return 0LL;
    }
    v30 = v25(this, v48);
    LockSemaphore = (__int64 *)v24[2].LockSemaphore;
    v32 = v30 == 0;
    v33 = *LockSemaphore;
    if ( !v32 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v33 + 136))(LockSemaphore, 1LL) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32D,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x887C005CLL);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return 2289827932LL;
      }
      lpCriticalSection[1] = (LPCRITICAL_SECTION)this;
      v51 = 1;
      v34 = CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups(
              this,
              (struct CEndpointStore *)v24,
              (bool *)&v56);
      v35 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x335,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v34);
        CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return v35;
      }
      v48[0] = 0LL;
      v36 = *(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v48);
      v37 = v36(this, v57, a3, a4, a5, a6, 0LL, 0LL, v48);
      v38 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x339,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v37);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v48);
        CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return v38;
      }
      v39 = CBtAudioResourceManagerBase::MoveDisplacedPrimaryProfileStreamGroupsToSaDevice(this, v48[0]);
      v40 = v39;
      if ( v39 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v39);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v48);
        CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        return v40;
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v48);
      *a7 = v48[0];
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)v48);
      v11 = (char)v56;
LABEL_90:
      if ( v11 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        v44 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                v43,
                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        if ( *(_DWORD *)v44[1] > 4u )
        {
          if ( tlgKeywordOn(v44[1], 0x400000004000LL) )
          {
            v56 = COERCE_STRUCT_ISADEVICEPROXY_(CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v52));
            lpCriticalSection[0] = *((LPCRITICAL_SECTION *)this + 7);
            v49 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 6);
            v48[0] = (struct ISaDeviceProxy *)0x1000000;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
              v46,
              byte_180191E72,
              v45,
              v46,
              (__int64)v48,
              (const WCHAR **)&v49,
              (const WCHAR **)lpCriticalSection,
              (__int64)&v56);
          }
        }
      }
      goto LABEL_94;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v33 + 136))(LockSemaphore, 1LL) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x348,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)0x887C005CLL);
      if ( v47[0] )
        LeaveCriticalSection(v47[0]);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
      if ( v13 )
        LeaveCriticalSection(v13);
      result = 2289827932LL;
    }
    else
    {
      v56 = 0LL;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
      if ( CBtAudioResourceManagerBase::DoSecondaryProfileSharedModeRenderSaDevicesExist(
             this,
             (struct CEndpointStore *)v24,
             &v56) )
      {
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v56);
        *a7 = v56;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        result = 0LL;
      }
      else
      {
        v41 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL))(
                this,
                v57,
                a3,
                a4,
                a5,
                a6,
                0LL,
                0LL,
                a7);
        v42 = v41;
        if ( v41 >= 0 )
        {
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
          goto LABEL_90;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x355,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v41);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v56);
        if ( v47[0] )
          LeaveCriticalSection(v47[0]);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v24);
        if ( v13 )
          LeaveCriticalSection(v13);
        result = v42;
      }
    }
  }
  catch ( ... )
  {
    LODWORD(v56) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x369,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                     v17);
    return (unsigned int)v56;
  }
  return result;
}
