/*
 * XREFs of ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1801157EC
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x180118230 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180025144 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800656FC (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPolicyConfig::DisconnectAllRenderEndpoints(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  unsigned int i; // ebx
  __int64 v4; // rax
  bool v5; // di
  unsigned int v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+48h] [rbp-38h] BYREF
  void **p_pv; // [rsp+50h] [rbp-30h] BYREF
  void *v11; // [rsp+58h] [rbp-28h] BYREF
  char v12; // [rsp+60h] [rbp-20h]

  v7 = 0LL;
  v1 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   a1,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 4u && tlgKeywordOn((__int64)v1, 512LL) )
    tlgWriteTransfer_EtwEventWriteTransfer(v2, byte_180193C1F, 0LL, 0LL, 2, (__int64)&p_pv);
  if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, __int64 *))g_DeviceEnumerator->lpVtbl->EnumAudioEndpoints)(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v6) >= 0 )
  {
    for ( i = 0; i < v6; ++i )
    {
      v9 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v7 + 32LL))(v7, i, &v9) >= 0 )
      {
        pv = 0LL;
        v4 = *v9;
        p_pv = &pv;
        v11 = 0LL;
        v12 = 1;
        v5 = (*(int (__fastcall **)(__int64 *, void **))(v4 + 40))(v9, &v11) >= 0;
        if ( v12 )
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            p_pv,
            v11);
        if ( v5 )
          CPolicyConfig::DisconnectHelper((CEndpointStoreCache *)pv);
        if ( pv )
          CoTaskMemFree(pv);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
}
