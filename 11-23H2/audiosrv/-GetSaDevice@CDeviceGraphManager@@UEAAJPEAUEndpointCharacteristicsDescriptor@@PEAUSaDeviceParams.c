/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x18000F110
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@347@Z @ 0x18000EC5C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapper.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@AEAPEBU8@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEAPEBU_GUID@@7@Z @ 0x180010748 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18004A1B0 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014FB24 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        CEndpointCharacteristics **a2,
        struct SaDeviceParams *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        const struct _GUID *a7,
        const struct _GUID *a8,
        struct ISaDeviceProxy **a9)
{
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  CEndpointStoreCache *v12; // rcx
  BOOL v13; // esi
  const unsigned __int16 *v14; // rdx
  int EndpointStore; // eax
  unsigned int v16; // ebx
  struct CEndpointStore *v17; // rbx
  struct ISaDeviceProxy **v18; // r15
  int v19; // eax
  int v20; // esi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  struct ISaDeviceProxy *v26; // rax
  __int64 v28; // rdx
  int v29; // [rsp+28h] [rbp-B1h]
  int v30; // [rsp+28h] [rbp-B1h]
  int v31; // [rsp+28h] [rbp-B1h]
  int v32[2]; // [rsp+78h] [rbp-61h] BYREF
  struct CEndpointStore *v33; // [rsp+80h] [rbp-59h] BYREF
  __int64 v34; // [rsp+88h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-49h] BYREF
  int v36; // [rsp+98h] [rbp-41h] BYREF
  int v37; // [rsp+9Ch] [rbp-3Dh] BYREF
  __int64 v38; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-29h] BYREF
  const WCHAR *v41; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-19h] BYREF
  int v43[2]; // [rsp+C8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+37h]
  __int64 v45; // [rsp+118h] [rbp+3Fh] BYREF
  CEndpointCharacteristics **v46; // [rsp+120h] [rbp+47h] BYREF
  struct SaDeviceParams *v47; // [rsp+128h] [rbp+4Fh] BYREF
  __int64 v48; // [rsp+130h] [rbp+57h] BYREF

  LODWORD(v48) = a4;
  v47 = a3;
  v46 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v13 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(*a2);
  v14 = *(const unsigned __int16 **)a3;
  v33 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v12, v14, &v33);
  v16 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)EndpointStore,
      v29);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v33);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v16;
  }
  else
  {
    v17 = v33;
    v18 = a9;
    v30 = (int)a9;
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct SaDeviceParams *, _QWORD, BOOL))(**((_QWORD **)v33 + 13) + 56LL))(
            *((_QWORD *)v33 + 13),
            a3,
            (unsigned int)a5,
            v13);
    v20 = v19;
    if ( v19 >= 0 )
    {
LABEL_14:
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
      if ( v9 )
        LeaveCriticalSection(v9);
      return 0LL;
    }
    if ( v19 == -2005139430 )
    {
      (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v17 + 13) + 72LL))(
        *((_QWORD *)v17 + 13),
        &lpCriticalSection);
      *(_QWORD *)v32 = 0LL;
      v45 = *((_QWORD *)v17 + 13);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v32);
      v20 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,EndpointCharacteristicsDescriptor * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams &,_GUID const * &,_GUID const * &>(
              (int)v32,
              (int)&v47,
              (int)&v46,
              (int)&v45,
              (__int64)&a5,
              (__int64)&v48,
              a6,
              (__int64)&a7,
              (__int64)&a8);
      v22 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
              v21,
              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      if ( **(_DWORD **)(v22 + 8) > 4u && (unsigned __int8)tlgKeywordOn(*(_QWORD *)(v22 + 8), 0x400000000000LL) )
      {
        v38 = (__int64)a3 + 80;
        LODWORD(v45) = *((_DWORD *)a3 + 2);
        v39 = *((_QWORD *)a3 + 4);
        v40 = (__int64)a3 + 48;
        LOWORD(v47) = *(_WORD *)(*((_QWORD *)a3 + 2) + 2LL);
        v36 = *(_DWORD *)(*((_QWORD *)a3 + 2) + 4LL);
        v41 = *(const WCHAR **)a3;
        v42 = *(_QWORD *)v32;
        v37 = v20;
        *(_QWORD *)v43 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          v24,
          (int)&unk_180192EDA,
          v23,
          v24,
          (__int64)v43,
          (__int64)&v42,
          (__int64)&v37,
          &v41,
          (__int64)&v36,
          (__int64)&v47,
          &v40,
          (__int64)&v39,
          (__int64)&v45,
          &v38);
      }
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC8C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v20,
          v31);
      }
      else
      {
        v34 = 0LL;
        v47 = (struct SaDeviceParams *)&v34;
        v25 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v47);
        v20 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(*(_QWORD *)v32, v25);
        if ( v20 < 0 )
        {
          v28 = 3216LL;
        }
        else
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, struct SaDeviceParams *, __int64 *))(**((_QWORD **)v17 + 13) + 64LL))(
                  *((_QWORD *)v17 + 13),
                  a3,
                  &v34);
          if ( v20 >= 0 )
          {
            v26 = *(struct ISaDeviceProxy **)v32;
            *(_QWORD *)v32 = 0LL;
            *v18 = v26;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v32);
            if ( lpCriticalSection )
              LeaveCriticalSection(lpCriticalSection);
            goto LABEL_14;
          }
          v28 = 3217LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v20,
          v31);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v34);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v32);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC72,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v19,
        v30);
    }
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v33);
    if ( v9 )
      LeaveCriticalSection(v9);
    return (unsigned int)v20;
  }
}
