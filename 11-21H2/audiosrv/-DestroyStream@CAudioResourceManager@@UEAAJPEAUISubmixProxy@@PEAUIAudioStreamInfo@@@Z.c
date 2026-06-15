/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180039270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F07C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18005DB34 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     atexit @ 0x18005EF98 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800CACE0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CAudioResourceManager::DestroyStream(
        CAudioResourceManager *this,
        struct ISubmixProxy *a2,
        struct IAudioStreamInfo *a3)
{
  __int64 v6; // rax
  int (__fastcall *v7)(struct IAudioStreamInfo *, __int64 *); // rbx
  __int64 v8; // r15
  _WORD *v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebx
  void (__fastcall *v14)(__int64, __int64 *); // r15
  bool v15; // bl
  char v16; // r15
  unsigned int v17; // r14d
  __int64 v18; // rcx
  bool v19; // di
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rdx
  const unsigned __int16 *v24; // rax
  RTL_SRWLOCK *v25; // rcx
  int EndpointStore; // eax
  char *v27; // rbx
  volatile int *v28; // rdx
  int v29; // edi
  int v30; // r8d
  __int64 v31; // r10
  char *v32; // r11
  int v33; // eax
  int v34; // [rsp+20h] [rbp-138h]
  int v35; // [rsp+20h] [rbp-138h]
  __int64 v36; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-120h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-118h] BYREF
  __int64 v39; // [rsp+48h] [rbp-110h] BYREF
  __int64 v40; // [rsp+50h] [rbp-108h] BYREF
  __int64 v41; // [rsp+58h] [rbp-100h] BYREF
  WINBOOL fPending; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-F0h] BYREF
  struct _RTL_CRITICAL_SECTION *v44; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+80h] [rbp-D8h]
  unsigned int v47; // [rsp+88h] [rbp-D0h]
  _QWORD v48[8]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int16 *v49; // [rsp+D0h] [rbp-88h] BYREF
  int v50; // [rsp+D8h] [rbp-80h]
  int v51; // [rsp+DCh] [rbp-7Ch]
  void *v52; // [rsp+E0h] [rbp-78h]
  int v53; // [rsp+E8h] [rbp-70h]
  int v54; // [rsp+ECh] [rbp-6Ch]
  struct _RTL_CRITICAL_SECTION **v55; // [rsp+F0h] [rbp-68h]
  __int64 v56; // [rsp+F8h] [rbp-60h]
  _WORD *v57; // [rsp+100h] [rbp-58h]
  int v58; // [rsp+108h] [rbp-50h]
  int v59; // [rsp+10Ch] [rbp-4Ch]
  int *v60; // [rsp+110h] [rbp-48h]
  __int64 v61; // [rsp+118h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v40 = 0LL;
  v6 = *(_QWORD *)a3;
  v41 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v6 + 32))(a3, &v41) >= 0 )
  {
    if ( v41 )
    {
      v7 = *(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a3 + 24LL);
      v40 = 0LL;
      if ( v7(a3, &v40) >= 0 )
      {
        if ( v41 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            v45 = (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
            Context = &qword_1801C2788;
            qword_1801C2788 = (__int64)&AudioSrvTelemetryProvider::`vftable';
            qword_1801C27A0 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
            LODWORD(v46) = 0;
            wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v45);
          }
          v8 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v8 > 4u )
          {
            v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 40LL))(v40);
            v9 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 64LL))(v41);
            v44 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 80LL))(a3);
            v60 = (int *)&v37;
            v61 = 4LL;
            if ( v9 )
            {
              v10 = -1LL;
              do
                ++v10;
              while ( v9[v10] );
              v11 = 2 * v10 + 2;
            }
            else
            {
              v9 = &unk_18017F160;
              v11 = 2;
            }
            v57 = v9;
            v58 = v11;
            v59 = 0;
            v55 = &v44;
            v56 = 8LL;
            v45 = 0x40B000000LL;
            v46 = 0LL;
            v49 = *(unsigned __int16 **)(v8 + 8);
            v50 = *v49;
            v51 = 2;
            v52 = &unk_18018A5DE;
            v53 = 62;
            v54 = 1;
            v47 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), &v45, 0LL, 0LL, 5, &v49);
          }
        }
      }
    }
  }
  v36 = 0LL;
  v39 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v39);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x688,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v12,
      v34);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v39);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    return v13;
  }
  v14 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 192LL);
  v36 = 0LL;
  v14(v39, &v36);
  v43 = 0LL;
  (**(void (__fastcall ***)(struct ISubmixProxy *, GUID *, __int64 *))a2)(
    a2,
    &GUID_3a5c2657_1b5f_474a_96ef_4cfdc4deeb2a,
    &v43);
  if ( v36 )
  {
    v15 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 152LL))(v36)
       || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 120LL))(v36);
    if ( v36 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 128LL))(v36);
      goto LABEL_21;
    }
  }
  else
  {
    v15 = 0;
  }
  v16 = 0;
LABEL_21:
  v17 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)a2 + 32LL))(a2, a3);
  v37 = v17;
  v18 = v36;
  if ( !v36 )
  {
    v19 = 0;
LABEL_47:
    v20 = 0;
    goto LABEL_27;
  }
  v19 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 152LL))(v36)
     || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 120LL))(v36);
  v18 = v36;
  if ( !v36 )
    goto LABEL_47;
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 128LL))(v36);
  v18 = v36;
LABEL_27:
  if ( v15 && !v19 || v16 && v20 )
  {
    Context = 0LL;
    v24 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 128LL))(v39);
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v25, v24, (struct CEndpointStore **)&Context);
    v27 = (char *)Context;
    if ( EndpointStore >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)Context + 48));
      v44 = (struct _RTL_CRITICAL_SECTION *)(v27 + 48);
      v29 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
      v31 = (__int64)(v27 + 88);
      v32 = (char *)this - 8;
      if ( v27 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v27 + 12), v28);
      v48[0] = off_18016C000;
      v48[1] = v32;
      v48[2] = v27;
      v48[7] = v48;
      v33 = CSerialWorkQueue::QueueRecurringItem(v29, 10000, v30, (unsigned int)v48, v31);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6A7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v33,
          v35);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v44);
    }
    if ( v27 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v27);
    JUMPOUT(0x180098A7BLL);
  }
  v21 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v18 = v36;
  }
  v22 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v18 = v36;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  return v17;
}
