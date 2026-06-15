/*
 * XREFs of ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1801302D0
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18012EF00 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x18012F700 (-OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18012F8B0 (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x18012FD1C (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PhoneCallAudio::SwitchActivePhoneCallEndpoint(
        PhoneCallAudio *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        struct IUnknown *a3)
{
  __int64 v4; // r15
  struct IUnknown v6; // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  char *v12; // rsi
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  void *v23; // [rsp+30h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-38h] BYREF
  void *v25; // [rsp+40h] [rbp-30h] BYREF
  char v26; // [rsp+48h] [rbp-28h]
  void **v27; // [rsp+50h] [rbp-20h]
  void *v28; // [rsp+58h] [rbp-18h] BYREF
  char v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 *v31; // [rsp+B0h] [rbp+40h] BYREF
  void *v32; // [rsp+B8h] [rbp+48h] BYREF

  v4 = a2;
  v23 = 0LL;
  if ( !a3 )
    goto LABEL_13;
  v6.lpVtbl = a3->lpVtbl;
  v31 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 **))v6.lpVtbl[1].QueryInterface)(a3, &v31);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 401LL;
LABEL_10:
    v11 = (unsigned int)v7;
    goto LABEL_11;
  }
  v10 = *v31;
  lpCriticalSection = (LPCRITICAL_SECTION)&v23;
  v25 = 0LL;
  v26 = 1;
  v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v10 + 40))(v31, &v25);
  if ( v26 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpCriticalSection->DebugInfo,
      v25);
  if ( v8 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown *))(**((_QWORD **)this + 5) + 24LL))(
           *((_QWORD *)this + 5),
           (unsigned int)v4,
           a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 403LL;
      goto LABEL_10;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_13:
    v32 = 0LL;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    v12 = (char *)this + 8 * v4;
    v13 = (__int64 *)*((_QWORD *)v12 + 15);
    if ( v13 )
    {
      v31 = 0LL;
      v14 = *v13;
      v31 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 24))(v13, &v31);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = (unsigned int)v15;
        v17 = 413LL;
        goto LABEL_20;
      }
      v18 = *v31;
      v27 = &v32;
      v28 = 0LL;
      v29 = 1;
      v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v18 + 40))(v31, &v28);
      if ( v29 )
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          v27,
          v28);
      if ( v8 < 0 )
      {
        v16 = (unsigned int)v8;
        v17 = 414LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
          (const char *)v16);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
        if ( (_BYTE)v25 )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_36;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    }
    if ( *((struct IUnknown **)v12 + 15) != a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)v12 + 15, a3);
    if ( (_BYTE)v25 )
      LeaveCriticalSection(lpCriticalSection);
    v19 = *((_QWORD *)this + 17);
    if ( v19 )
    {
      if ( v32 )
      {
        v20 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                       + 320LL))(
                g_PolicyManager,
                v19,
                (unsigned int)v4);
        v8 = v20;
        if ( v20 < 0 )
        {
          v21 = 425LL;
LABEL_34:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
            (const char *)(unsigned int)v20);
LABEL_36:
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v32);
          goto LABEL_37;
        }
      }
      if ( v23 )
      {
        v20 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                      + 320LL))(
                g_PolicyManager,
                *((_QWORD *)this + 17),
                (unsigned int)v4);
        v8 = v20;
        if ( v20 < 0 )
        {
          v21 = 430LL;
          goto LABEL_34;
        }
      }
    }
    v8 = 0;
    goto LABEL_36;
  }
  v11 = (unsigned int)v8;
  v9 = 402LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
    (const char *)v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_37:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v23);
  return (unsigned int)v8;
}
