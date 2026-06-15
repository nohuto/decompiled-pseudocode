/*
 * XREFs of ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x180107288
 * Callers:
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z @ 0x180107570 (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180075970 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800EE85C (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetActiveRenderEndpointWithFallbackToDefault(unsigned int a1, unsigned __int16 **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  unsigned __int64 v15; // rbx
  int v16; // eax
  unsigned __int16 *v17; // rax
  __int64 bIgnoreCase; // [rsp+20h] [rbp-E0h]
  struct _WNF_STATE_NAME v19; // [rsp+30h] [rbp-D0h] BYREF
  LPCWCH lpString1; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  void **p_lpString1; // [rsp+48h] [rbp-B8h]
  void *v23; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+58h] [rbp-A8h]
  bool v25; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 v27[2044]; // [rsp+68h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1088h] [rbp+F88h]

  *a2 = 0LL;
  if ( (int)wil::wnf_query_nothrow((wil *)&WNF_AUDC_RENDER, &v19, &v25, (void *)0x1000, &v21) >= 0 && v26 )
  {
    if ( v26 != 1 )
    {
      lpString1 = 0LL;
      v21 = 0LL;
      lpVtbl = g_DeviceEnumerator->lpVtbl;
      v21 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, _QWORD, unsigned __int64 *))lpVtbl->GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             a1,
             &v21) < 0 )
        goto LABEL_14;
      v11 = *(_QWORD *)v21;
      p_lpString1 = (void **)&lpString1;
      v23 = 0LL;
      v24 = 1;
      v8 = (*(__int64 (__fastcall **)(unsigned __int64, void **))(v11 + 40))(v21, &v23);
      if ( v24 )
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          p_lpString1,
          v23);
      if ( (v8 & 0x80000000) == 0 )
      {
LABEL_14:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
        v14 = 0;
        v15 = -1LL;
        if ( v26 )
        {
          while ( CompareStringOrdinal(lpString1, -1, &v27[56 * v14], -1, 1) != 2 )
          {
            if ( ++v14 >= v26 )
              goto LABEL_17;
          }
          v17 = (unsigned __int16 *)lpString1;
          lpString1 = 0LL;
          *a2 = v17;
          v8 = 0;
        }
        else
        {
          do
LABEL_17:
            ++v15;
          while ( v27[v15] );
          v16 = _AllocStringWorker<CTCoAllocPolicy>(v13, v12, v27, v15, bIgnoreCase, a2);
          v8 = v16;
          if ( v16 >= 0 )
          {
            if ( lpString1 )
              CoTaskMemFree((LPVOID)lpString1);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x83C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v16);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x82E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)v8);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v21);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&lpString1);
      return v8;
    }
    v6 = -1LL;
    do
      ++v6;
    while ( v27[v6] );
    v7 = _AllocStringWorker<CTCoAllocPolicy>(v5, v4, v27, v6, bIgnoreCase, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x824,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  return 0LL;
}
