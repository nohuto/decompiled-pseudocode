/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800397C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180016650 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180039EF0 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003ECFC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800C6A24 (--1-$MakeAllocator@VAvoidEndpointPolicyRule@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800F6638 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F72D8 (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct IDeviceGraphObjectsStore *a2,
        struct StreamGroupParams *a3,
        unsigned int a4,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a5,
        struct IStreamGroupProxy **a6)
{
  struct StreamGroupParams *v6; // r14
  char *v8; // r13
  int v9; // esi
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  char *v12; // rax
  char *v13; // rdi
  __int64 v14; // rax
  LPVOID v15; // r15
  int v16; // eax
  __int64 i; // rdx
  char *v18; // rax
  char *v19; // r15
  char *v20; // rbx
  volatile int *v21; // rdx
  signed __int64 v22; // rax
  unsigned int v23; // ecx
  signed __int64 v24; // rtt
  __int64 v25; // r10
  _WORD *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  struct IStreamGroupProxy *v30; // rax
  char *v31; // rcx
  char v33; // [rsp+30h] [rbp-D0h] BYREF
  char v34; // [rsp+31h] [rbp-CFh] BYREF
  char v35; // [rsp+32h] [rbp-CEh] BYREF
  char *v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  int *v42; // [rsp+60h] [rbp-A0h] BYREF
  char *v43; // [rsp+68h] [rbp-98h] BYREF
  char *v44; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v45; // [rsp+78h] [rbp-88h] BYREF
  char *v46; // [rsp+80h] [rbp-80h] BYREF
  struct StreamGroupParams *v47; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-70h] BYREF
  char *v49; // [rsp+A0h] [rbp-60h] BYREF
  char *v50; // [rsp+A8h] [rbp-58h] BYREF
  struct IStreamGroupProxy **v51; // [rsp+B0h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B8h] [rbp-48h] BYREF
  union _RTL_RUN_ONCE *v53; // [rsp+C0h] [rbp-40h] BYREF
  int v54; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v55; // [rsp+D0h] [rbp-30h] BYREF
  int v56; // [rsp+D8h] [rbp-28h]
  int v57; // [rsp+DCh] [rbp-24h]
  void *v58; // [rsp+E0h] [rbp-20h]
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+ECh] [rbp-14h]
  char **v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  char **v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  _WORD *v65; // [rsp+110h] [rbp+10h]
  int v66; // [rsp+118h] [rbp+18h]
  int v67; // [rsp+11Ch] [rbp+1Ch]
  int **v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  unsigned int *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  _QWORD **v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  int *v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  char *v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+178h] [rbp+78h]
  char *v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]
  char *v82; // [rsp+190h] [rbp+90h]
  __int64 v83; // [rsp+198h] [rbp+98h]

  v37 = a4;
  v6 = a3;
  v47 = a3;
  LODWORD(v38) = a4;
  v51 = a6;
  (*(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)a2 + 72LL))(
    a2,
    &lpCriticalSection);
  v8 = (char *)v6 + 48;
  if ( !*((_BYTE *)v6 + 48) && !*((_BYTE *)v6 + 50) )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)a2 + 32LL))(
           a2,
           v6,
           a6);
    if ( v9 != -2147023728 )
      goto LABEL_47;
  }
  v36 = 0LL;
  if ( a5 )
    v10 = *((_DWORD *)a5 + 15);
  else
    v10 = 0;
  v11 = 16 * (v10 + 5LL);
  if ( v11 > 0x7FFFFFFF )
  {
    v13 = 0LL;
  }
  else
  {
    v12 = (char *)CoTaskMemAlloc((unsigned int)v11);
    v13 = v12;
    v49 = v12;
    if ( v12 )
    {
      v42 = (int *)((char *)v6 + 8);
      *(_DWORD *)v12 = *((_DWORD *)v6 + 2);
      *(_QWORD *)(v12 + 4) = (unsigned __int8)*v8;
      if ( a5 )
      {
        *((_DWORD *)v12 + 3) = *(unsigned __int16 *)(*((_QWORD *)a5 + 2) + 16LL) + 18;
        v14 = *((_QWORD *)a5 + 2);
      }
      else
      {
        *((_DWORD *)v12 + 3) = 0;
        v14 = 0LL;
      }
      *((_QWORD *)v13 + 2) = v14;
      *((_QWORD *)v13 + 3) = *(_QWORD *)v6;
      v15 = (char *)v6 + 16;
      Context = (char *)v6 + 16;
      *((_DWORD *)v13 + 9) = *(unsigned __int16 *)(*((_QWORD *)v6 + 2) + 16LL) + 18;
      *((_QWORD *)v13 + 5) = *((_QWORD *)v6 + 2);
      v45 = (_QWORD *)((char *)v6 + 24);
      *((_QWORD *)v13 + 6) = *((_QWORD *)v6 + 3);
      if ( a5 )
        v16 = *((_DWORD *)a5 + 8);
      else
        v16 = 0;
      *((_DWORD *)v13 + 14) = v16;
      v48[0] = (char *)v6 + 32;
      *(_OWORD *)(v13 + 60) = *((_OWORD *)v6 + 2);
      *((_DWORD *)v13 + 19) = v10;
      v43 = (char *)v6 + 50;
      *((_DWORD *)v13 + 8) = *((unsigned __int8 *)v6 + 50);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v13 + 19); i = (unsigned int)(i + 1) )
        *(_OWORD *)&v13[16 * i + 80] = *((_OWORD *)a5 + i + 4);
      if ( *v8 )
      {
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v36);
        v9 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
               &v36,
               &v47,
               &v49,
               &v38);
      }
      else
      {
        if ( v36 )
          (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v36 + 16LL))(v36, i);
        v36 = 0LL;
        v18 = (char *)operator new(0x678uLL, (const struct std::nothrow_t *)&std::nothrow);
        v19 = v18;
        v44 = v18;
        if ( v18 )
        {
          v20 = v18 + 8;
          *((_QWORD *)v18 + 1) = &CBaseStreamGroupProxy::`vftable';
          *((_QWORD *)v18 + 6) = 0LL;
          *((_QWORD *)v18 + 7) = 0LL;
          *((_QWORD *)v18 + 9) = 0LL;
          *((_QWORD *)v18 + 10) = 0LL;
          *((_QWORD *)v18 + 11) = 0LL;
          *((_QWORD *)v18 + 12) = 0LL;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v18 + 104), 0, 0);
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v20 + 152), 0, 0);
          *((_QWORD *)v20 + 24) = 0LL;
          *((_QWORD *)v20 + 25) = 0LL;
          *((_QWORD *)v20 + 26) = 0LL;
          *((_QWORD *)v20 + 27) = 0LL;
          *((_QWORD *)v20 + 28) = 0LL;
          *((_QWORD *)v20 + 29) = 0LL;
          *((_QWORD *)v19 + 34) = 1LL;
          *(_QWORD *)v19 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          *(_QWORD *)v20 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          *((_QWORD *)v19 + 31) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          *((_QWORD *)v19 + 32) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                              + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
          *(_QWORD *)v19 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          *(_QWORD *)v20 = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          *((_QWORD *)v19 + 31) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          *((_QWORD *)v19 + 32) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          *((_DWORD *)v19 + 70) = 0;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v19 + 288), 0, 0);
          v19[328] = 0;
          *((_OWORD *)v19 + 21) = 0LL;
          *((_DWORD *)v19 + 88) = 0;
          *((_QWORD *)v19 + 45) = 0LL;
          *((_QWORD *)v19 + 46) = 0LL;
          *((_QWORD *)v19 + 47) = 0LL;
          *((_QWORD *)v19 + 48) = 0LL;
          *((_QWORD *)v19 + 86) = 0LL;
          *((_QWORD *)v19 + 124) = 0LL;
          *((_DWORD *)v19 + 324) = 0;
          *((_QWORD *)v19 + 163) = 0LL;
          *((_QWORD *)v19 + 201) = 0LL;
          *((_DWORD *)v19 + 404) = 0;
          *((_QWORD *)v19 + 203) = 0LL;
          *((GUID *)v19 + 102) = GUID_00000000_0000_0000_0000_000000000000;
          *((_QWORD *)v19 + 206) = 0LL;
          v46 = v19;
          v44 = 0LL;
          v9 = CSharedStreamGroupProxy::RuntimeClassInitialize(
                 (CSharedStreamGroupProxy *)v19,
                 v6,
                 (struct STREAM_GROUP_DESCRIPTOR *)v13,
                 v37);
          if ( v9 < 0 )
          {
            Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(&v46);
            Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v44);
          }
          else
          {
            v36 = v20;
            (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 8LL))(v20);
            v46 = 0LL;
            v22 = *((_QWORD *)v19 + 34);
            while ( v22 >= 0 )
            {
              if ( (_DWORD)v22 == 0x7FFFFFFF )
                goto LABEL_26;
              v23 = v22 - 1;
              v24 = v22;
              v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 34, v22 - 1, v22);
              if ( v24 == v22 )
                goto LABEL_25;
            }
            v23 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v22 + 16), v21);
LABEL_25:
            if ( !v23 )
            {
              (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v20 + 384LL))(v20, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                  + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
            }
LABEL_26:
            v9 = 0;
            v6 = v47;
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<AvoidEndpointPolicyRule>::~MakeAllocator<AvoidEndpointPolicyRule>(&v44);
          v9 = -2147024882;
        }
        v15 = Context;
      }
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        v53 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1801C2788;
        qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
        qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v54 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v53);
      }
      v25 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v25 > 4u )
      {
        v33 = *v43;
        v34 = *((_BYTE *)v6 + 49);
        v35 = *v8;
        v41 = *v42;
        v45 = (_QWORD *)*v45;
        LOWORD(v37) = *(_WORD *)(*(_QWORD *)v15 + 2LL);
        LODWORD(v42) = *(_DWORD *)(*(_QWORD *)v15 + 4LL);
        v26 = *(_WORD **)v6;
        LODWORD(v43) = v9;
        v50 = v36;
        v82 = &v33;
        v83 = 1LL;
        v80 = &v34;
        v81 = 1LL;
        v78 = &v35;
        v79 = 1LL;
        v76 = &v41;
        v77 = 4LL;
        v74 = &v45;
        v75 = 8LL;
        v72 = v48[0];
        v73 = 16LL;
        v70 = &v37;
        v71 = 2LL;
        v68 = &v42;
        v69 = 4LL;
        if ( v26 )
        {
          v27 = -1LL;
          do
            ++v27;
          while ( v26[v27] );
          v28 = 2 * v27 + 2;
        }
        else
        {
          v26 = &unk_18017F160;
          v28 = 2;
        }
        v65 = v26;
        v66 = v28;
        v67 = 0;
        v63 = &v43;
        v64 = 4LL;
        v61 = &v50;
        v62 = 8LL;
        v48[0] = 0x40B000000LL;
        v48[1] = 0LL;
        v55 = *(unsigned __int16 **)(v25 + 8);
        v56 = *v55;
        v57 = 2;
        v58 = &unk_180189A20;
        v59 = 163;
        v60 = 1;
        LODWORD(v38) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(*(_QWORD *)(v25 + 32), v48, 0LL, 0LL, 13, &v55);
      }
      if ( v9 >= 0 )
      {
        v38 = 0LL;
        v9 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v36, &v38);
        if ( v9 >= 0 )
          v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphObjectsStore *, __int64 *))(*(_QWORD *)a2 + 40LL))(
                 a2,
                 &v38);
        v29 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        if ( v9 >= 0 )
        {
          v30 = (struct IStreamGroupProxy *)v36;
          v36 = 0LL;
          *v51 = v30;
        }
      }
      goto LABEL_44;
    }
  }
  v9 = -2147024882;
LABEL_44:
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  CoTaskMemFree(v13);
LABEL_47:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v9;
}
