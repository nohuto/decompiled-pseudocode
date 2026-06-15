/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x180003500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@PEBU_GUID@@5@Z @ 0x180003B80 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x180016770 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003ECFC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByRef@$0BA@@@U1@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByRef@$0BA@@@347@Z @ 0x1800F6960 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapper.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F72FC (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014C964 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        const unsigned __int16 **a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        const struct _GUID *a7,
        const struct _GUID *a8,
        struct ISaDeviceProxy **a9)
{
  CEndpointStoreCache *v11; // rcx
  BOOL v12; // edi
  int EndpointStore; // eax
  int v14; // esi
  struct CEndpointStore *v15; // rbx
  struct IDeviceGraphObjectsStore **v16; // r14
  enum _AUDCLNT_SHAREMODE v17; // r13d
  int v18; // eax
  struct IDeviceGraphObjectsStore *v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // rdi
  volatile int *v23; // rdx
  signed __int64 v24; // rax
  unsigned int v25; // ecx
  signed __int64 v26; // rtt
  int v27; // r9d
  __int64 v28; // r8
  const unsigned __int16 *v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  struct ISaDeviceProxy *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  signed __int32 i; // edx
  int v37; // [rsp+20h] [rbp-E0h]
  int v38; // [rsp+20h] [rbp-E0h]
  struct ISaDeviceProxy *v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  struct CEndpointStore *v41; // [rsp+80h] [rbp-80h] BYREF
  WINBOOL fPending; // [rsp+88h] [rbp-78h] BYREF
  int v43; // [rsp+8Ch] [rbp-74h] BYREF
  int v44; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+94h] [rbp-6Ch] BYREF
  _QWORD *v46; // [rsp+98h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+A0h] [rbp-60h] BYREF
  LPCRITICAL_SECTION v48; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v49; // [rsp+B0h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-48h] BYREF
  char *v51; // [rsp+C0h] [rbp-40h] BYREF
  const unsigned __int16 *v52; // [rsp+C8h] [rbp-38h] BYREF
  char *v53; // [rsp+D0h] [rbp-30h] BYREF
  const unsigned __int16 *v54; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-20h] BYREF
  int v56[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v57; // [rsp+F0h] [rbp-10h]
  LPCRITICAL_SECTION v58; // [rsp+F8h] [rbp-8h]
  union _RTL_RUN_ONCE *v59; // [rsp+100h] [rbp+0h] BYREF
  int v60; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  unsigned __int16 v62; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v63; // [rsp+168h] [rbp+68h]

  v63 = a4;
  v58 = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v12 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 168LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v41 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v11, *a3, &v41);
  v14 = EndpointStore;
  v15 = v41;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)EndpointStore,
      v37);
    goto LABEL_50;
  }
  v16 = (struct IDeviceGraphObjectsStore **)((char *)v41 + 104);
  v57 = (_QWORD *)((char *)v41 + 104);
  v38 = (int)a9;
  v17 = a5;
  v18 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 **, _QWORD, BOOL))(**((_QWORD **)v41 + 13) + 56LL))(
          *((_QWORD *)v41 + 13),
          a3,
          (unsigned int)a5,
          v12);
  v14 = v18;
  if ( v18 < 0 )
  {
    if ( v18 != -2005139430 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8EC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v18,
        v38);
      goto LABEL_50;
    }
    (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)*v16 + 72LL))(
      *v16,
      &v48);
    v19 = *v16;
    v39 = 0LL;
    v20 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v20;
    v46 = v20;
    if ( v20 )
    {
      v20[5] = 1LL;
      *v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IInspectable'};
      v22 = v20 + 1;
      v20[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
      v20[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
      v20[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v21 = &CSaDeviceProxy::`vftable'{for `IInspectable'};
      *v22 = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
      v21[2] = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
      v21[3] = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
      v21[6] = 0LL;
      v21[7] = 0LL;
      v21[8] = 0LL;
      *((_BYTE *)v21 + 72) = 0;
      v21[10] = 0LL;
      v21[11] = 0LL;
      v21[12] = 0LL;
      v21[13] = 0LL;
      v21[14] = 0LL;
      v49 = v21;
      v46 = 0LL;
      v14 = CSaDeviceProxy::RuntimeClassInitialize(
              (CSaDeviceProxy *)v21,
              (const struct SaDeviceParams *)a3,
              a2,
              v19,
              v17,
              v63,
              a6,
              a7,
              a8);
      if ( v14 >= 0 )
      {
        v39 = (struct ISaDeviceProxy *)(v21 + 1);
        (*(void (__fastcall **)(_QWORD *))(*v22 + 8LL))(v21 + 1);
        (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(*(_QWORD *)v21[14] + 72LL))(v21[14], &lpCriticalSection);
        v24 = v21[5];
        while ( v24 >= 0 )
        {
          if ( (_DWORD)v24 == 0x7FFFFFFF )
            goto LABEL_25;
          v25 = v24 - 1;
          v26 = v24;
          v24 = _InterlockedCompareExchange64(v21 + 5, v24 - 1, v24);
          if ( v26 == v24 )
            goto LABEL_22;
        }
        v25 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v24 + 16), v23);
LABEL_22:
        if ( !v25 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v21 + 48LL))(v21, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                              + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
LABEL_25:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        v14 = 0;
        v15 = v41;
      }
      else
      {
        Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v49);
        Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v46);
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v46);
      v14 = -2147024882;
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v59 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1801C2788;
      qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v60 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v59);
    }
    v28 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v28 > 4u
      && (*(_QWORD *)(v28 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v28 + 24) & 0x400000000000LL) == *(_QWORD *)(v28 + 24) )
    {
      v51 = (char *)(a3 + 10);
      v43 = *((_DWORD *)a3 + 2);
      v52 = a3[4];
      v53 = (char *)(a3 + 6);
      v29 = a3[2];
      v62 = v29[1];
      v44 = *((_DWORD *)v29 + 1);
      v54 = *a3;
      v45 = v14;
      v55 = (__int64)v39;
      *(_QWORD *)v56 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        v28,
        (unsigned int)&unk_18018996F,
        v28,
        v27,
        (__int64)v56,
        (__int64)&v55,
        (__int64)&v45,
        (__int64)&v54,
        (__int64)&v44,
        (__int64)&v62,
        (__int64)&v53,
        (__int64)&v52,
        (__int64)&v43,
        (__int64)&v51);
    }
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x906,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v14,
        v38);
LABEL_42:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
      goto LABEL_50;
    }
    v40 = 0LL;
    v30 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v39, &v40);
    v14 = v30;
    if ( v30 < 0 )
    {
      v31 = 2314LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v30,
        v38);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v40);
      goto LABEL_42;
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 **, __int64 *))(*(_QWORD *)*v57 + 64LL))(
            *v57,
            a3,
            &v40);
    v14 = v30;
    if ( v30 < 0 )
    {
      v31 = 2315LL;
      goto LABEL_41;
    }
    v32 = v39;
    v33 = 0LL;
    v39 = 0LL;
    *a9 = v32;
    v34 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      v33 = (__int64)v39;
    }
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    if ( v48 )
      LeaveCriticalSection(v48);
  }
  v14 = 0;
LABEL_50:
  if ( v15 )
  {
    for ( i = *((_DWORD *)v15 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)v15 + 3) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v15 + 3, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      (*(void (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v41 + 24LL))(v41, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v58 )
    LeaveCriticalSection(v58);
  return (unsigned int)v14;
}
