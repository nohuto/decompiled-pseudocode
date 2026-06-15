/*
 * XREFs of _lambda_a577178607fbfad5bb71ec56cdb50569_::operator() @ 0x18007491C
 * Callers:
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014E3FC (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180080EBC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x18014FC48 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall lambda_a577178607fbfad5bb71ec56cdb50569_::operator()(_BYTE **a1)
{
  signed int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, void **); // rdi
  HRESULT v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  WCHAR *v11; // rcx
  WCHAR v12; // ax
  WCHAR *v13; // rax
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  void *v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 **); // [rsp+50h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 **); // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v23; // [rsp+80h] [rbp-80h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp-78h] BYREF
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-60h]
  WCHAR SubKey[264]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR String1[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+3F8h]

  v23 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64 **))(**(_QWORD **)*a1 + 24LL))(
         *(_QWORD *)*a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL,
         0LL,
         &v23);
  if ( v2 >= 0 )
  {
    v15 = 0LL;
    v3 = *v23;
    v15 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v3 + 32))(v23, 0LL, &v15);
    if ( v2 < 0 )
    {
LABEL_3:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
      goto LABEL_33;
    }
    v16 = 0LL;
    v4 = v15;
    v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 80LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v16,
      0LL);
    v2 = v5(v4, &v16);
    if ( v2 < 0 )
    {
LABEL_5:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v16);
      goto LABEL_3;
    }
    ppv = 0LL;
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    v2 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2343,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v6);
LABEL_8:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
      goto LABEL_5;
    }
    v17 = 0LL;
    v7 = *(_QWORD *)ppv;
    v17 = 0LL;
    v2 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD))(v7 + 40))(ppv, v16, &v17);
    if ( v2 < 0 )
    {
LABEL_10:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
      goto LABEL_8;
    }
    v20 = 0LL;
    v2 = (**v17)(v17, &GUID_3ade56af_4375_4413_9c91_4c652595ab07, &v20);
    if ( v2 < 0 )
    {
LABEL_12:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
      goto LABEL_10;
    }
    v19 = 0LL;
    v8 = *v20;
    v19 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v8 + 24))(
           v20,
           &v19);
    if ( v2 < 0 )
    {
LABEL_14:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v19);
      goto LABEL_12;
    }
    v22 = 0LL;
    v2 = (**v19)(v19, &GUID_d666063f_1587_4e43_81f1_b948e807363f, &v22);
    if ( v2 < 0 )
    {
LABEL_16:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v22);
      goto LABEL_14;
    }
    v21 = 0LL;
    v9 = *v22;
    v21 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v9 + 32))(v22, 0LL, &v21);
    if ( v2 < 0 )
    {
LABEL_18:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
      goto LABEL_16;
    }
    *(_OWORD *)pvar = 0LL;
    v26 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
           v21,
           &DEVPKEY_Device_Driver,
           pvar);
    if ( v2 < 0 )
    {
LABEL_20:
      PropVariantClear(pvar);
      goto LABEL_18;
    }
    if ( LOWORD(pvar[0]) == 31 )
    {
      pcbData = 520;
      v10 = 260LL;
      v11 = SubKey;
      do
      {
        if ( v10 == -2147483386 )
          break;
        v12 = *(WCHAR *)((char *)v11 + (char *)L"SYSTEM\\CurrentControlSet\\Control\\Class\\" - (char *)SubKey);
        if ( !v12 )
          break;
        *v11++ = v12;
        --v10;
      }
      while ( v10 );
      v13 = v11 - 1;
      if ( v10 )
        v13 = v11;
      *v13 = 0;
      v2 = v10 == 0 ? 0x8007007A : 0;
      if ( !v10 )
        goto LABEL_20;
      v2 = StringCbCatW(SubKey, 0x208uLL, (const unsigned __int16 *)pvar[1]);
      if ( v2 < 0 )
        goto LABEL_20;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"Driver", 2u, 0LL, String1, &pcbData) )
        *a1[1] = CompareStringOrdinal(String1, -1, L"smwdm.sys", 9, 1) == 2;
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v19);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v16);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v15);
    v2 = 0;
  }
LABEL_33:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v23);
  return (unsigned int)v2;
}
