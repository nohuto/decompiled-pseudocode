/*
 * XREFs of ?GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x18010553C
 * Callers:
 *     ?GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z @ 0x18010581C (-GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18006A600 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1800E6048 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAecAttributes::GetActiveRenderEndpointWithFallbackToDefault(
        CAecAttributes *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a2,
        unsigned __int16 **a3)
{
  unsigned int v4; // edi
  void *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  void *v13; // rcx
  int v14; // ebx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int16 *v17; // rax
  struct _WNF_STATE_NAME v18; // [rsp+40h] [rbp-C0h] BYREF
  LPCWCH lpString1; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v20; // [rsp+50h] [rbp-B0h] BYREF
  void **p_lpString1; // [rsp+58h] [rbp-A8h]
  void *v22; // [rsp+60h] [rbp-A0h] BYREF
  char v23; // [rsp+68h] [rbp-98h]
  bool v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v25; // [rsp+74h] [rbp-8Ch]
  unsigned __int16 v26[2044]; // [rsp+78h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1098h] [rbp+F98h]

  v4 = 0;
  *a3 = 0LL;
  if ( (int)wil::wnf_query_nothrow((wil *)&WNF_AUDC_RENDER, &v18, &v24, (void *)0x1000, &lpString1) < 0 || !v25 )
    return 0LL;
  if ( v25 != 1 )
  {
    lpString1 = 0LL;
    v20 = 0LL;
    v10 = *(_QWORD *)g_DeviceEnumerator;
    v20 = 0LL;
    if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 **))(v10 + 32))(g_DeviceEnumerator, 0LL, 2LL, &v20) < 0 )
      goto LABEL_18;
    v11 = *v20;
    p_lpString1 = (void **)&lpString1;
    v22 = 0LL;
    v23 = 1;
    v12 = (*(__int64 (__fastcall **)(__int64 *, void **))(v11 + 40))(v20, &v22);
    if ( v23 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        p_lpString1,
        v22);
    if ( v12 >= 0 )
    {
LABEL_18:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
      v14 = 0;
      v15 = -1LL;
      if ( v25 )
      {
        while ( CompareStringOrdinal(lpString1, -1, &v26[56 * v14], -1, 1) != 2 )
        {
          if ( ++v14 >= v25 )
            goto LABEL_21;
        }
        v17 = (unsigned __int16 *)lpString1;
        lpString1 = 0LL;
        *a3 = v17;
        v12 = 0;
      }
      else
      {
        do
LABEL_21:
          ++v15;
        while ( v26[v15] );
        *a3 = 0LL;
        v16 = v15 + 1;
        if ( v15 + 1 >= v15 && is_mul_ok(v16, 2uLL) )
        {
          v12 = CTCoAllocPolicy::Alloc(v13, (v16 * (unsigned __int128)2uLL) >> 64, 2 * v16, (void **)a3);
          if ( v12 >= 0 )
          {
            StringCchCopyNExW((char *)*a3, v15 + 1, v26, v15);
LABEL_30:
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpString1);
            return v4;
          }
        }
        else
        {
          v12 = -2147024362;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
          (const char *)(unsigned int)v12);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    }
    v4 = v12;
    goto LABEL_30;
  }
  v6 = -1LL;
  do
    ++v6;
  while ( v26[v6] );
  *a3 = 0LL;
  v7 = v6 + 1;
  if ( v6 + 1 >= v6 && is_mul_ok(v7, 2uLL) )
  {
    v8 = CTCoAllocPolicy::Alloc(v5, (v7 * (unsigned __int128)2uLL) >> 64, 2 * v7, (void **)a3);
    if ( v8 >= 0 )
    {
      StringCchCopyNExW((char *)*a3, v6 + 1, v26, v6);
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024362;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\streamgroupattributes.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
