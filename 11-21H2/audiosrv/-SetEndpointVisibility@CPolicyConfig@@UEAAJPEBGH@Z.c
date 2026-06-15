/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800EA9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C6664 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x180132484 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  HRESULT v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  RTL_SRWLOCK *v12; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v14; // rbx
  DynamicAudioEndpointManager *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  void *v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct CEndpointStore *v21; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+38h] BYREF

  if ( a2 )
  {
    v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           (__int64)this,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v6 > 4u
      && (*(_BYTE *)(v6 + 16) & 0x20) != 0
      && (*(_QWORD *)(v6 + 24) & 0x20LL) == *(_QWORD *)(v6 + 24) )
    {
      LODWORD(v21) = a3;
      v19 = (void *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v6,
        byte_18018918F,
        v7,
        v8,
        &v19,
        (__int64)&v21);
    }
    ppv = 0LL;
    v9 = CoCreateInstance(
           &GUID_06cca63e_9941_441b_b004_39f999ada412,
           0LL,
           0x17u,
           &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
           &ppv);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v17 = 0LL;
      v10 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
              g_DeviceEnumerator,
              a2,
              &v17);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v17, a3);
        v5 = v10;
        if ( v10 >= 0 )
        {
          if ( !a3 )
          {
            v21 = 0LL;
            EndpointStore = CEndpointStoreCache::GetEndpointStore(v12, a2, &v21);
            v14 = v21;
            if ( EndpointStore >= 0 )
              CAudioSessionManager::Disconnect(*((_QWORD *)v21 + 12), 0, 1);
            if ( v14 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v14);
          }
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 48LL))(v17, &v22);
          v5 = v10;
          if ( v10 >= 0 )
          {
            DynamicAudioEndpointManager::OnDeviceStateChanged(v15, a2, v22);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
            v5 = 0;
            goto LABEL_22;
          }
          v11 = 1541LL;
        }
        else
        {
          v11 = 1527LL;
        }
      }
      else
      {
        v11 = 1525LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F2,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v9);
    }
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    return v5;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E8,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80070057LL);
  return v5;
}
