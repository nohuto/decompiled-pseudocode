/*
 * XREFs of ?IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z @ 0x180100B18
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800FF1B4 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsEndpointDefaultAudioEndpoint(struct IMMDevice *a1, int *a2)
{
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, LPVOID *); // rdi
  int v14; // eax
  unsigned __int16 *v15; // rax
  void *v16; // rcx
  int v17; // r9d
  int v18; // edx
  LPVOID pv[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+78h] [rbp+38h] BYREF
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  LPVOID v25; // [rsp+88h] [rbp+48h] BYREF

  *a2 = 0;
  v25 = 0LL;
  GetId = a1->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &v25,
    0LL);
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a1, &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_30;
  }
  v23 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v23);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v22);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 != 1 )
        {
          v24 = 0LL;
          lpVtbl = g_DeviceEnumerator->lpVtbl;
          v24 = 0LL;
          v11 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, _QWORD, __int64 *))lpVtbl->GetDefaultAudioEndpoint)(
                  g_DeviceEnumerator,
                  v22,
                  v9,
                  &v24);
          v6 = v11;
          if ( v11 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2C9,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
              (const char *)(unsigned int)v11);
            goto LABEL_28;
          }
          pv[0] = 0LL;
          v12 = v24;
          v13 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v24 + 40LL);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            pv,
            0LL);
          v14 = v13(v12, pv);
          v6 = v14;
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2CC,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
              (const char *)(unsigned int)v14);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
LABEL_28:
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
            goto LABEL_29;
          }
          v15 = (unsigned __int16 *)v25;
          v16 = pv[0];
          do
          {
            v17 = *(unsigned __int16 *)((char *)v15 + (char *)pv[0] - (char *)v25);
            v18 = *v15 - v17;
            if ( v18 )
              break;
            ++v15;
          }
          while ( v17 );
          if ( !v18 )
          {
            *a2 = 1;
            if ( v16 )
              CoTaskMemFree(v16);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v23);
            v6 = 0;
            goto LABEL_30;
          }
          if ( pv[0] )
            CoTaskMemFree(pv[0]);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
        }
        if ( ++v9 >= 3 )
        {
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v23);
          if ( v25 )
            CoTaskMemFree(v25);
          return 0LL;
        }
      }
    }
    v8 = 702LL;
  }
  else
  {
    v8 = 701LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_29:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v23);
LABEL_30:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
  return v6;
}
