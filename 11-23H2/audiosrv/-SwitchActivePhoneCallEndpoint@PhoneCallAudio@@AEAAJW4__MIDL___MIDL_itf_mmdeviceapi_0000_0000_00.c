/*
 * XREFs of ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x18013D6F4
 * Callers:
 *     ?OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800037F0 (-OnDefaultDeviceChanged@PhoneCallAudio@@UEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_.c)
 *     ?OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z @ 0x180003FF0 (-OnEndpointDeviceRemoved@PhoneCallAudio@@UEAAXPEAUIEndpointDevice@@@Z.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18013C510 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18013CD38 (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180028BA8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
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
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  void *v21; // rcx
  LPVOID v23; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-30h] BYREF
  void *v26; // [rsp+48h] [rbp-28h] BYREF
  char v27; // [rsp+50h] [rbp-20h]
  void **p_pv; // [rsp+58h] [rbp-18h]
  void *v29; // [rsp+60h] [rbp-10h] BYREF
  char v30; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  __int64 *v33; // [rsp+B8h] [rbp+48h] BYREF

  v4 = a2;
  v23 = 0LL;
  if ( a3 )
  {
    v6.lpVtbl = a3->lpVtbl;
    v24 = 0LL;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 **))v6.lpVtbl[1].QueryInterface)(a3, &v24);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 401LL;
LABEL_10:
      v11 = (unsigned int)v7;
      goto LABEL_11;
    }
    v10 = *v24;
    lpCriticalSection = (LPCRITICAL_SECTION)&v23;
    v26 = 0LL;
    v27 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v10 + 40))(v24, &v26);
    if ( v27 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&lpCriticalSection->DebugInfo,
        v26);
    if ( v8 < 0 )
    {
      v11 = (unsigned int)v8;
      v9 = 402LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)v11);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
LABEL_36:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v23);
      return (unsigned int)v8;
    }
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
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
  }
  pv = 0LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 2);
  v12 = (char *)this + 8 * v4;
  v13 = (__int64 *)*((_QWORD *)v12 + 15);
  if ( v13 )
  {
    v33 = 0LL;
    v14 = *v13;
    v33 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v14 + 24))(v13, &v33);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19D,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v33);
      ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
LABEL_35:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      goto LABEL_36;
    }
    v16 = *v33;
    p_pv = &pv;
    v29 = 0LL;
    v30 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v16 + 40))(v33, &v29);
    if ( v30 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        p_pv,
        v29);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v33);
      if ( (_BYTE)v26 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_35;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v33);
  }
  if ( *((struct IUnknown **)v12 + 15) != a3 )
    ATL::AtlComPtrAssign((struct IUnknown **)v12 + 15, a3);
  if ( (_BYTE)v26 )
    LeaveCriticalSection(lpCriticalSection);
  v17 = *((_QWORD *)this + 17);
  v18 = pv;
  if ( !v17 )
  {
LABEL_38:
    v21 = v23;
    goto LABEL_39;
  }
  if ( pv )
  {
    v19 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD, LPVOID, _DWORD))(*(_QWORD *)g_PolicyManager + 312LL))(
            g_PolicyManager,
            v17,
            (unsigned int)v4,
            pv,
            0);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 425LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_35;
    }
    v18 = pv;
  }
  v21 = v23;
  if ( v23 )
  {
    v19 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, LPVOID, int))(*(_QWORD *)g_PolicyManager
                                                                                               + 312LL))(
            g_PolicyManager,
            *((_QWORD *)this + 17),
            (unsigned int)v4,
            v23,
            1);
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 430LL;
      goto LABEL_34;
    }
    v18 = pv;
    goto LABEL_38;
  }
LABEL_39:
  if ( v18 )
  {
    CoTaskMemFree(v18);
    v21 = v23;
  }
  if ( v21 )
    CoTaskMemFree(v21);
  return 0LL;
}
