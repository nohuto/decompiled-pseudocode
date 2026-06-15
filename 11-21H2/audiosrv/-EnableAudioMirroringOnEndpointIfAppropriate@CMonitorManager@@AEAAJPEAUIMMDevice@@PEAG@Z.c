/*
 * XREFs of ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x18011B25C
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18011AAF8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3)
{
  int v6; // ebx
  struct IMMDeviceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  bool v9; // zf
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  PROPVARIANT v13[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h]
  void *v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v16 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    lpVtbl = a2->lpVtbl;
    v16 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))lpVtbl->OpenPropertyStore)(a2, 2LL, &v16);
    if ( v6 >= 0 )
    {
      if ( a3 )
      {
        v15 = 0LL;
        GetId = a2->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v15,
          0LL);
        v6 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a2, &v15);
        if ( v6 < 0
          || (unsigned int)_o__wcsicmp(a3, v15)
          && ((v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
                      v16,
                      &PKEY_MonitorOutput,
                      pvar),
               v6 < 0)
           || (LOWORD(pvar[0]) != 31 || !pvar[1] || (unsigned int)_o__wcsicmp(a3, pvar[1]))
           && (unsigned int)_o__wcsicmp(a3, v15)
           && (unsigned int)_o__wcsicmp(a3, pvar[1])
           && (PropVariantClear(pvar),
               LOWORD(pvar[0]) = 31,
               pvar[1] = a3,
               v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
                      v16,
                      &PKEY_MonitorOutput,
                      pvar),
               LOWORD(pvar[0]) = 0,
               v6 < 0)) )
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v15);
          goto LABEL_25;
        }
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v15);
      }
      v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
             v16,
             &PKEY_MonitorEnabled,
             v13);
      if ( v6 >= 0 )
      {
        if ( LOWORD(v13[0]) == 11 )
        {
          if ( *((_BYTE *)this + 352) )
          {
            if ( LOWORD(v13[1]) == 0xFFFF )
              goto LABEL_25;
          }
          else if ( !LOWORD(v13[1]) )
          {
            goto LABEL_25;
          }
        }
        LOWORD(v13[0]) = 11;
        v9 = *((_BYTE *)this + 352) == 0;
        LOWORD(v13[1]) = -1;
        if ( v9 )
          LOWORD(v13[1]) = 0;
        v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
               v16,
               &PKEY_MonitorEnabled,
               v13);
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_25:
  PropVariantClear(v13);
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return (unsigned int)v6;
}
