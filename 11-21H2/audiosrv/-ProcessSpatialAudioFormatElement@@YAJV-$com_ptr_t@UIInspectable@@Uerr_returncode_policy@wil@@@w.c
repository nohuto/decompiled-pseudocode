/*
 * XREFs of ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180155B00
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800588F0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18003D570 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x180151E30 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180153DB0 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ProcessSpatialAudioFormatElement(__int64 *a1, char *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, _QWORD); // rdi
  HSTRING *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r14d
  const WCHAR **v17; // r15
  const WCHAR *v18; // rdi
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  const char *v21; // r9
  __int64 v22; // rbx
  void **v23; // rcx
  unsigned __int16 *v24; // rdx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-51h] BYREF
  unsigned __int16 *v27; // [rsp+38h] [rbp-49h] BYREF
  HSTRING string; // [rsp+40h] [rbp-41h] BYREF
  __int64 v29; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v30; // [rsp+50h] [rbp-31h] BYREF
  __int64 v31; // [rsp+58h] [rbp-29h] BYREF
  _BYTE *v32; // [rsp+60h] [rbp-21h]
  __int64 *v33; // [rsp+68h] [rbp-19h]
  HSTRING v34; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v33 = a1;
  v30 = a1;
  v32 = a5;
  v7 = 0LL;
  *a5 = 0;
  v31 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v31);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v8);
    goto LABEL_24;
  }
  v26 = 0LL;
  v10 = v31;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v31 + 48LL);
  v26 = 0LL;
  v12 = Windows::Internal::StringReference::StringReference(&v34, L"@Name");
  v13 = v11(v10, *v12, &v26);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v13);
LABEL_5:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    goto LABEL_24;
  }
  v29 = 0LL;
  v14 = (**v26)(v26, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v29);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v14);
LABEL_8:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    goto LABEL_5;
  }
  string = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v29 + 152LL))(v29, &string);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (__int64)"onecoreuap\\private\\avcore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v15);
    if ( string )
      WindowsDeleteString(string);
    goto LABEL_8;
  }
  v16 = 0;
  v17 = (const WCHAR **)(a3 + 8);
  while ( 1 )
  {
    v18 = *v17;
    StringLen = WindowsGetStringLen(string);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, v18, -1, 1) == 2 )
      break;
    ++v16;
    ++v7;
    v17 += 4;
    if ( v7 >= 7 )
      goto LABEL_21;
  }
  v27 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v27,
    0LL);
  if ( (int)GetAppServiceName((const unsigned __int16 *)a2, &v27) >= 0 )
  {
    v22 = 32LL * v16;
    *(_BYTE *)(v22 + a3) = 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v30,
      a2,
      0xFFFFFFFFFFFFFFFFuLL,
      v21);
    v23 = (void **)(v22 + a3 + 16);
    if ( v23 != (void **)&v30 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v23,
        v30);
      v30 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v30);
    v24 = v27;
    v27 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)(v22 + a3 + 24),
      v24);
  }
  *v32 = 1;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v27);
LABEL_21:
  if ( string )
    WindowsDeleteString(string);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
  v9 = 0;
LABEL_24:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v33);
  return v9;
}
