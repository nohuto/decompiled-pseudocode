/*
 * XREFs of _lambda_c21659d5a86b392c88a6b01fab095e1d_::operator() @ 0x180068E0C
 * Callers:
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014B320 (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$invoke@P6AJPEAUtagPROPVARIANT@@@ZPEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@wistd@@YAJ$$QEAP6AJPEAUtagPROPVARIANT@@@Z$$QEAPEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x1800C67A0 (--$invoke@P6AJPEAUtagPROPVARIANT@@@ZPEAV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVari.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x18014CA80 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall lambda_c21659d5a86b392c88a6b01fab095e1d_::operator()(_BYTE **a1)
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
  int ppv; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 **); // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 **); // [rsp+50h] [rbp-B0h] BYREF
  void *v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v21; // [rsp+68h] [rbp-98h] BYREF
  DWORD pcbData[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v24; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v25; // [rsp+88h] [rbp-78h] BYREF
  HRESULT (__stdcall *v26)(PROPVARIANT *); // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 *v27[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  WCHAR SubKey[264]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR String1[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F8h] [rbp+3F8h]

  v21 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64 **))(**(_QWORD **)*a1 + 24LL))(
         *(_QWORD *)*a1,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         23LL,
         0LL,
         &v21);
  if ( v2 >= 0 )
  {
    v20 = 0LL;
    v3 = *v21;
    v20 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v3 + 32))(v21, 0LL, &v20);
    if ( v2 < 0 )
    {
LABEL_32:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      goto LABEL_33;
    }
    v19 = 0LL;
    v4 = v20;
    v5 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v20 + 80LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v19,
      0LL);
    v2 = v5(v4, &v19);
    if ( v2 < 0 )
    {
LABEL_31:
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v19);
      goto LABEL_32;
    }
    v25 = 0LL;
    v6 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v25);
    v2 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2163,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v6,
        ppv);
LABEL_30:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
      goto LABEL_31;
    }
    v18 = 0LL;
    v7 = *(_QWORD *)v25;
    v18 = 0LL;
    v2 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD))(v7 + 40))(v25, v19, &v18);
    if ( v2 < 0 )
    {
LABEL_29:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      goto LABEL_30;
    }
    v24 = 0LL;
    v2 = (**v18)(v18, &GUID_3ade56af_4375_4413_9c91_4c652595ab07, &v24);
    if ( v2 < 0 )
    {
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
      goto LABEL_29;
    }
    v17 = 0LL;
    v8 = *v24;
    v17 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v8 + 24))(
           v24,
           &v17);
    if ( v2 < 0 )
    {
LABEL_27:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      goto LABEL_28;
    }
    v23 = 0LL;
    v2 = (**v17)(v17, &GUID_d666063f_1587_4e43_81f1_b948e807363f, &v23);
    if ( v2 < 0 )
    {
LABEL_26:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
      goto LABEL_27;
    }
    v16 = 0LL;
    v9 = *v23;
    v16 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v9 + 32))(v23, 0LL, &v16);
    if ( v2 < 0 )
    {
LABEL_25:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      goto LABEL_26;
    }
    *(_OWORD *)v27 = 0LL;
    v28 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, unsigned __int16 **))(*(_QWORD *)v16 + 40LL))(
           v16,
           &DEVPKEY_Device_Driver,
           v27);
    if ( v2 >= 0 )
    {
      if ( LOWORD(v27[0]) == 31 )
      {
        pcbData[0] = 520;
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
          goto LABEL_24;
        v2 = StringCbCatW(SubKey, 0x208uLL, v27[1]);
        if ( v2 < 0 )
          goto LABEL_24;
        if ( !RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"Driver", 2u, 0LL, String1, pcbData) )
          *a1[1] = CompareStringOrdinal(String1, -1, L"smwdm.sys", 9, 1) == 2;
      }
      v2 = 0;
    }
LABEL_24:
    *(_QWORD *)pcbData = v27;
    v26 = PropVariantClear;
    wistd::invoke<long (*)(tagPROPVARIANT *),wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)> *>(
      &v26,
      pcbData);
    goto LABEL_25;
  }
LABEL_33:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  return (unsigned int)v2;
}
