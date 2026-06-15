/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180007DF0
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003AE80 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, const unsigned __int16 *a2)
{
  __int64 v3; // rbx
  int EndpointStore; // eax
  struct CEndpointStore *v5; // rdi
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  unsigned __int8 v7; // r14
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  signed __int32 i; // ecx
  int v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-30h] BYREF
  struct CEndpointStore *v19; // [rsp+48h] [rbp-28h] BYREF
  const unsigned __int16 *v20; // [rsp+50h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v21; // [rsp+58h] [rbp-18h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  CAudioSrv *v24; // [rsp+A0h] [rbp+30h] BYREF
  __int64 fPending; // [rsp+B0h] [rbp+40h] BYREF
  int v26; // [rsp+B8h] [rbp+48h] BYREF

  v24 = this;
  v3 = 0LL;
  v19 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a2, &v19);
  v5 = v19;
  if ( EndpointStore >= 0 )
  {
    v16 = 0LL;
    LODWORD(v24) = 0;
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v16 = 0LL;
    if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))lpVtbl->GetDevice)(
           g_DeviceEnumerator,
           a2,
           &v16) >= 0
      && (*(int (__fastcall **)(__int64, CAudioSrv **))(*(_QWORD *)v16 + 48LL))(v16, &v24) >= 0
      && (_DWORD)v24 == 1 )
    {
      v7 = 1;
      fPending = 0LL;
      (*(void (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                         + 24LL))(
        g_pEndpointCharacteristicsCache,
        a2,
        0LL,
        0LL,
        &fPending);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&fPending);
    }
    else
    {
      v7 = 0;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
        && (_DWORD)fPending )
      {
        v21 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_1801CFD38;
        qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
        qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        v22 = 0;
        wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v21);
      }
      v10 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v10 > 4u
        && (*(_DWORD *)(v10 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v10 + 24) & 0x200LL) == *(_QWORD *)(v10 + 24) )
      {
        v20 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v10,
          (unsigned int)&unk_180191B0F,
          v8,
          v9,
          (__int64)&v20);
      }
      (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 232LL))(
        g_PolicyManager,
        a2);
      LOBYTE(v11) = 1;
      v12 = CAudioSessionManager::Disconnect(*((_QWORD *)v5 + 12), 0LL, v11);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x766,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
          (const char *)(unsigned int)v12,
          v15);
    }
    v17 = 0LL;
    v13 = v16;
    if ( v16 )
    {
      v17 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
             v16,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v17) >= 0
        && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 24LL))(v17, &v26) >= 0
        && !v26 )
      {
        (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                               + 240LL))(
          g_PolicyManager,
          a2,
          v7);
      }
      v3 = v17;
      v13 = v16;
    }
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v13 = v16;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v5 )
  {
    for ( i = *((_DWORD *)v5 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)v5 + 3) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v5 + 3, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      (*(void (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
