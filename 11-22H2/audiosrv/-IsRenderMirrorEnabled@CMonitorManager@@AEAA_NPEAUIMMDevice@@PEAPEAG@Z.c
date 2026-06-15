/*
 * XREFs of ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18003F5A4
 * Callers:
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18000680C (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180006FAC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180007204 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012CA38 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18012DC18 (-IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z @ 0x18013264C (-UpdateMonitorOutputEndpointId@CMonitor@@KAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall CMonitorManager::IsRenderMirrorEnabled(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 **a3)
{
  char v6; // r15
  struct IMMDeviceVtbl *lpVtbl; // rax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  int (__fastcall *v13)(__int64, LPVOID *); // rdi
  LPVOID v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  PROPVARIANT v16[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+68h] [rbp-8h]
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  *(_OWORD *)v16 = 0LL;
  v17 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v19 = 0LL;
  v6 = 0;
  if ( a3 && a2 )
  {
    *a3 = 0LL;
    if ( *((_BYTE *)this + 352) )
    {
      lpVtbl = a2->lpVtbl;
      v15 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, &v15) >= 0
        && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &PKEY_MonitorEnabled,
             pvar) >= 0
        && LOWORD(pvar[0]) == 11
        && LOWORD(pvar[1]) == 0xFFFF
        && CMonitorManager::IsEndpointActiveHmdEndpoint(this, a2) )
      {
        GetId = a2->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v14,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a2, &v14) >= 0
          && (int)CMonitor::UpdateMonitorOutputEndpointId(a2) >= 0
          && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
               v15,
               &PKEY_MonitorOutput,
               v16) >= 0
          && LOWORD(v16[0]) == 31
          && v16[1] )
        {
          v21 = 0LL;
          pv = 0LL;
          v10 = (__int64 *)*((_QWORD *)this + 8);
          v11 = *v10;
          v21 = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v11 + 32))(v10, 0LL, 0LL, &v21) >= 0 )
          {
            v12 = v21;
            v13 = *(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 40LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &pv,
              0LL);
            if ( v13(v12, &pv) >= 0 && !(unsigned int)_o__wcsicmp(v14, pv) && (unsigned int)_o__wcsicmp(v14, v16[1]) )
            {
              *a3 = (unsigned __int16 *)v16[1];
              LOWORD(v16[0]) = 0;
              v6 = 1;
            }
          }
          if ( pv )
            CoTaskMemFree(pv);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
        }
      }
    }
    PropVariantClear(pvar);
    PropVariantClear(v16);
    if ( v14 )
      CoTaskMemFree(v14);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return v6;
  }
  else
  {
    PropVariantClear(pvar);
    PropVariantClear(v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v14);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    return 0;
  }
}
