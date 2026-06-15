/*
 * XREFs of ??1CSaDeviceProxy@@MEAA@XZ @ 0x18003CDF0
 * Callers:
 *     ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18003CDB0 (--_ECSaDeviceProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ?ReleaseSaDeviceResource@@YAJPEA_K@Z @ 0x180065CB4 (-ReleaseSaDeviceResource@@YAJPEA_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5FBC (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800F6C00 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800F6CA8 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C (-GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GU.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CSaDeviceProxy::~CSaDeviceProxy(CSaDeviceProxy *this)
{
  CSaDeviceProxy *v1; // rdi
  char *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  const char *v12; // r9
  struct CEndpointCharacteristics *v13; // rax
  struct ISaDeviceResourceManager *v14; // rcx
  _QWORD *v15; // rdx
  __int128 v16; // xmm0
  int BtAudioResourceManager; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct _RTL_CRITICAL_SECTION *v22; // r15
  _QWORD *p_Type; // rcx
  _QWORD *v24; // rbx
  void *v25; // rcx
  LPVOID *v26; // rbx
  volatile signed __int32 *v27; // r8
  signed __int32 i; // edx
  int v29; // [rsp+20h] [rbp-178h]
  struct ISaDeviceResourceManager *v30; // [rsp+30h] [rbp-168h] BYREF
  struct CEndpointCharacteristics *v31; // [rsp+38h] [rbp-160h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-158h] BYREF
  int v33; // [rsp+44h] [rbp-154h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-150h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-148h]
  char *v36; // [rsp+58h] [rbp-140h] BYREF
  CSaDeviceProxy *v37; // [rsp+60h] [rbp-138h]
  _DWORD v38[2]; // [rsp+68h] [rbp-130h] BYREF
  __int64 v39; // [rsp+70h] [rbp-128h]
  _QWORD v40[2]; // [rsp+78h] [rbp-120h] BYREF
  union _RTL_RUN_ONCE *v41; // [rsp+88h] [rbp-110h] BYREF
  int v42; // [rsp+90h] [rbp-108h]
  _BYTE v43[8]; // [rsp+98h] [rbp-100h] BYREF
  std::_Ref_count_base *v44; // [rsp+A0h] [rbp-F8h]
  struct _GUID v45; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v46[8]; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v47; // [rsp+100h] [rbp-98h]
  unsigned __int16 *v48; // [rsp+110h] [rbp-88h] BYREF
  int v49; // [rsp+118h] [rbp-80h]
  int v50; // [rsp+11Ch] [rbp-7Ch]
  void *v51; // [rsp+120h] [rbp-78h]
  int v52; // [rsp+128h] [rbp-70h]
  int v53; // [rsp+12Ch] [rbp-6Ch]
  char **v54; // [rsp+130h] [rbp-68h]
  __int64 v55; // [rsp+138h] [rbp-60h]
  _WORD *v56; // [rsp+140h] [rbp-58h]
  int v57; // [rsp+148h] [rbp-50h]
  int v58; // [rsp+14Ch] [rbp-4Ch]
  __int64 v59; // [rsp+150h] [rbp-48h]
  __int64 v60; // [rsp+158h] [rbp-40h]
  int *v61; // [rsp+160h] [rbp-38h]
  __int64 v62; // [rsp+168h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v1 = this;
  v37 = this;
  *(_QWORD *)this = &CSaDeviceProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)v1 + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  ReleaseSaDeviceResource((unsigned __int64 *)v1 + 8);
  *((_QWORD *)v1 + 8) = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v41 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801C2788;
    qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v42 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v41);
  }
  v4 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 4u )
  {
    v5 = *((_QWORD *)v1 + 6);
    v33 = *(_DWORD *)(v5 + 8);
    v6 = *(_WORD **)v5;
    v36 = v2;
    v61 = &v33;
    v62 = 4LL;
    v59 = v5 + 48;
    v60 = 16LL;
    if ( v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v6 = &unk_18017F160;
      v8 = 2;
    }
    v56 = v6;
    v57 = v8;
    v58 = 0;
    v54 = &v36;
    v55 = 8LL;
    v38[0] = 184549376;
    v38[1] = 4;
    v39 = 0LL;
    v48 = *(unsigned __int16 **)(v4 + 8);
    v49 = *v48;
    v50 = 2;
    v51 = &unk_180189ACF;
    v52 = 64;
    v53 = 1;
    v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v4 + 32), v38, 0LL, 0LL, 6, &v48);
  }
  if ( *((_BYTE *)v1 + 72) )
  {
    try
    {
      std::make_shared<std::wstring,ATL::CComHeapPtr<unsigned short> &>(v43, *((_QWORD *)v1 + 6));
      v9 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v40, v43, v9);
      v46[0] = off_18016BC50;
      v46[1] = v40[0];
      v46[2] = v40[1];
      v46[7] = v46;
      v11 = CSerialWorkQueue::QueueWorkItem(v10, v46);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x786,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          v29);
      if ( v44 )
        std::_Ref_count_base::_Decref(v44);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x788,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        v12);
      v1 = v37;
    }
  }
  v13 = 0LL;
  v31 = 0LL;
  v14 = 0LL;
  v30 = 0LL;
  v15 = (_QWORD *)*((_QWORD *)v1 + 6);
  if ( v15 && *v15 )
  {
    v31 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           *v15,
           0LL,
           0LL) < 0 )
    {
LABEL_30:
      v14 = v30;
      v13 = v31;
      goto LABEL_31;
    }
    v14 = 0LL;
    v30 = 0LL;
    v13 = v31;
    v16 = *(_OWORD *)((char *)v31 + 9748);
    v47 = v16;
    if ( v16 != *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
    {
      if ( v16 != __PAIR128__(0xED3D76C82C5CFE8AuLL, BLUETOOTH_AUDIO_RESOURCE_MANAGER) )
      {
        v18 = 2147549183LL;
        v19 = 194LL;
        goto LABEL_29;
      }
      v45 = *(struct _GUID *)((char *)v31 + 9764);
      BtAudioResourceManager = CBtAudioResourceManagerCache::GetBtAudioResourceManager(0LL, v31, &v45, &v30);
      if ( BtAudioResourceManager < 0 )
      {
        v18 = (unsigned int)BtAudioResourceManager;
        v19 = 196LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v18,
          (int)&v31);
        goto LABEL_30;
      }
      v13 = v31;
      v14 = v30;
    }
    if ( !v14 )
      goto LABEL_31;
    (*(void (__fastcall **)(struct ISaDeviceResourceManager *, struct CEndpointCharacteristics *, _QWORD))(*(_QWORD *)v14 + 72LL))(
      v14,
      v13,
      *((_QWORD *)v1 + 6));
    goto LABEL_30;
  }
LABEL_31:
  if ( v14 )
  {
    (*(void (__fastcall **)(struct ISaDeviceResourceManager *))(*(_QWORD *)v14 + 16LL))(v14);
    v13 = v31;
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v13 + 16LL))(v13);
  v20 = *((_QWORD *)v1 + 14);
  if ( v20 )
  {
    *((_QWORD *)v1 + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *((_QWORD *)v1 + 10);
  if ( v21 )
  {
    *((_QWORD *)v1 + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)v1 + 7);
  if ( v22 )
  {
    p_Type = &v22[1].DebugInfo->Type;
    v24 = (_QWORD *)p_Type[1];
    if ( !*((_BYTE *)v24 + 25) )
    {
      do
      {
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
          &v22[1],
          &v22[1],
          v24[2]);
        v25 = v24;
        v24 = (_QWORD *)*v24;
        std::_Deallocate<16,0>(v25, 0x28uLL);
      }
      while ( !*((_BYTE *)v24 + 25) );
      p_Type = &v22[1].DebugInfo->Type;
    }
    operator delete(p_Type, 0x28uLL);
    DeleteCriticalSection(v22);
    operator delete(v22, 0x40uLL);
  }
  *((_QWORD *)v1 + 7) = 0LL;
  v26 = (LPVOID *)*((_QWORD *)v1 + 6);
  if ( v26 )
  {
    CoTaskMemFree(v26[3]);
    v26[3] = 0LL;
    CoTaskMemFree(v26[2]);
    v26[2] = 0LL;
    CoTaskMemFree(*v26);
    *v26 = 0LL;
    operator delete(v26, 0x60uLL);
  }
  *((_QWORD *)v1 + 6) = 0LL;
  if ( *((__int64 *)v1 + 5) < 0 )
  {
    v27 = (volatile signed __int32 *)(2LL * *((_QWORD *)v1 + 5));
    for ( i = *((_DWORD *)v27 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)v27 + 3) )
    {
      if ( i == _InterlockedCompareExchange(v27 + 3, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      if ( v27 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v27 + 32LL))(v27, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
    }
  }
}
