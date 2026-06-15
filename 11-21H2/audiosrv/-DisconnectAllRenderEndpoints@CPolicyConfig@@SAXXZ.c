/*
 * XREFs of ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800E9564
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x180018880 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800EBE70 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800464AC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800E9748 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPolicyConfig::DisconnectAllRenderEndpoints(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int i; // ebx
  __int64 v3; // rax
  bool v4; // di
  unsigned int v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 v6; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int16 *v7; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-38h] BYREF
  void **v9; // [rsp+50h] [rbp-30h] BYREF
  void *v10; // [rsp+58h] [rbp-28h] BYREF
  char v11; // [rsp+60h] [rbp-20h]

  v6 = 0LL;
  v1 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u
    && (*(_DWORD *)(v1 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x200LL) == *(_QWORD *)(v1 + 24) )
  {
    tlgWriteTransfer_EtwEventWriteTransfer(v1, byte_18018922B, 0LL, 0LL, 2, (__int64)&v9);
  }
  if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 24LL))(
         g_DeviceEnumerator,
         0LL,
         1LL,
         &v6) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v5) >= 0 )
  {
    for ( i = 0; i < v5; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v6 + 32LL))(v6, i, &v8) >= 0 )
      {
        v7 = 0LL;
        v3 = *v8;
        v9 = (void **)&v7;
        v10 = 0LL;
        v11 = 1;
        v4 = (*(int (__fastcall **)(__int64 *, void **))(v3 + 40))(v8, &v10) >= 0;
        if ( v11 )
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            v9,
            v10);
        if ( v4 )
          CPolicyConfig::DisconnectHelper(v7);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v7);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
}
