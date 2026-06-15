/*
 * XREFs of ?Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z @ 0x1800CC3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x180045640 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004FBF0 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x1800CBE84 (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVolumeSoftware::Initialize(
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *this,
        struct IMMDevice *a2)
{
  int FormFactor; // eax
  int PolicyConfig; // eax
  int v6; // ebx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int16 *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int16 *pv; // [rsp+80h] [rbp+30h]
  void *v18; // [rsp+90h] [rbp+40h] BYREF
  struct IPolicyConfig *v19; // [rsp+98h] [rbp+48h] BYREF

  FormFactor = GetFormFactor(a2, this + 74);
  if ( FormFactor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x800,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)FormFactor);
  v19 = 0LL;
  PolicyConfig = GetPolicyConfig(&v19);
  v6 = PolicyConfig;
  if ( PolicyConfig >= 0 )
  {
    v18 = 0LL;
    GetId = a2->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v18,
      0LL);
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a2, &v18);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x806,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v8);
LABEL_17:
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v18);
      goto LABEL_18;
    }
    pv = 0LL;
    v9 = *(_QWORD *)v19;
    v14 = 0LL;
    v15 = 1;
    v6 = (*(__int64 (__fastcall **)(struct IPolicyConfig *, void *, _QWORD, unsigned __int16 **))(v9 + 32))(
           v19,
           v18,
           0LL,
           &v14);
    if ( v15 )
      pv = v14;
    if ( v6 >= 0 )
    {
      *((_DWORD *)this + 29) = pv[1];
      v12 = CVolumeControlBase::Initialize((CVolumeControlBase *)this, (struct IUnknown *)a2);
      v6 = v12;
      if ( v12 >= 0 )
      {
        v6 = 0;
LABEL_15:
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_17;
      }
      v10 = (unsigned int)v12;
      v11 = 2060LL;
    }
    else
    {
      v10 = (unsigned int)v6;
      v11 = 2057LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)v10);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x803,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)PolicyConfig);
LABEL_18:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  return (unsigned int)v6;
}
