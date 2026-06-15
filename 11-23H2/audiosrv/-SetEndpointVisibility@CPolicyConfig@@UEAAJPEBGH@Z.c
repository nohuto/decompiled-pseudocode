/*
 * XREFs of ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180116F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F3A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18013F9A8 (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointVisibility(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  CEndpointStoreCache *v13; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v15; // rbx
  DynamicAudioEndpointManager *v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  const WCHAR *v20; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct CEndpointStore *v22; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  if ( a2 )
  {
    v6 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     (__int64)this,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
    if ( *v6 > 4u && tlgKeywordOn((__int64)v6, 32LL) )
    {
      LODWORD(v22) = a3;
      v20 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v7,
        byte_180193B83,
        v8,
        v9,
        &v20,
        (__int64)&v22);
    }
    ppv = 0LL;
    v10 = CoCreateInstance(
            &GUID_06cca63e_9941_441b_b004_39f999ada412,
            0LL,
            0x17u,
            &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
            &ppv);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v18 = 0LL;
      v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
              g_DeviceEnumerator,
              a2,
              &v18);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v18, a3);
        v5 = v11;
        if ( v11 >= 0 )
        {
          if ( !a3 )
          {
            v22 = 0LL;
            EndpointStore = CEndpointStoreCache::GetEndpointStore(v13, a2, &v22);
            v15 = v22;
            if ( EndpointStore >= 0 )
              CAudioSessionManager::Disconnect(*((CAudioSessionManager **)v22 + 12), 0, 1);
            if ( v15 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
          }
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 48LL))(v18, &v23);
          v5 = v11;
          if ( v11 >= 0 )
          {
            DynamicAudioEndpointManager::OnDeviceStateChanged(v16, a2, v23);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
            v5 = 0;
            goto LABEL_21;
          }
          v12 = 1602LL;
        }
        else
        {
          v12 = 1588LL;
        }
      }
      else
      {
        v12 = 1586LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v11);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_21:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
    return v5;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x625,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80070057LL);
  return v5;
}
