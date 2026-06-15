/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800C45D4
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18005A160 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CAudioSrv::ProcessDeviceInternal(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  int EndpointStore; // eax
  struct CEndpointStore *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // si
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // [rsp+20h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  struct CEndpointStore *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  RTL_SRWLOCK *v18; // [rsp+60h] [rbp+20h] BYREF
  void *v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v18 = this;
  v16 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a2, &v16);
  v4 = v16;
  if ( EndpointStore >= 0 )
  {
    v20 = 0LL;
    LODWORD(v18) = 0;
    v5 = *(_QWORD *)g_DeviceEnumerator;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(v5 + 40))(g_DeviceEnumerator, a2, &v20) >= 0
      && (*(int (__fastcall **)(__int64, RTL_SRWLOCK **))(*(_QWORD *)v20 + 48LL))(v20, &v18) >= 0
      && (_DWORD)v18 == 1 )
    {
      v7 = 1;
      v19 = 0LL;
      (*(void (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, void **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                       + 24LL))(
        g_pEndpointCharacteristicsCache,
        a2,
        0LL,
        0LL,
        &v19);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    }
    else
    {
      v7 = 0;
      v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             v6,
             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *(_DWORD *)v8 > 4u
        && (*(_DWORD *)(v8 + 16) & 0x200LL) != 0
        && (*(_QWORD *)(v8 + 24) & 0x200LL) == *(_QWORD *)(v8 + 24) )
      {
        v19 = (void *)a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          v8,
          byte_180188046,
          v9,
          v10,
          &v19);
      }
      (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 240LL))(
        g_PolicyManager,
        a2);
      LOBYTE(v11) = 1;
      v12 = CAudioSessionManager::Disconnect(*((_QWORD *)v4 + 12), 0LL, v11);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x742,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
          (const char *)(unsigned int)v12,
          v14);
    }
    v15 = 0LL;
    if ( v20 )
    {
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
             v20,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v15) >= 0
        && (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 24LL))(v15, &v19) >= 0
        && !(_DWORD)v19 )
      {
        LOBYTE(v13) = v7;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, const unsigned __int16 *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                                + 248LL))(
          g_PolicyManager,
          a2,
          v13);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v4);
}
