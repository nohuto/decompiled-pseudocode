/*
 * XREFs of ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18015CB20
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800377B0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x180159220 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x18015AF58 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
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
  int v16; // r14d
  const WCHAR **v17; // r15
  const WCHAR *v18; // rdi
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  const char *v21; // r9
  __int64 v22; // rbx
  void **v23; // rcx
  void *v24; // rcx
  void **v25; // rcx
  unsigned __int16 *v26; // rbx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-51h] BYREF
  HSTRING string; // [rsp+38h] [rbp-49h] BYREF
  __int64 v30; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int16 *v31; // [rsp+48h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-31h] BYREF
  __int64 v33; // [rsp+58h] [rbp-29h] BYREF
  _BYTE *v34; // [rsp+60h] [rbp-21h]
  __int64 *v35; // [rsp+68h] [rbp-19h]
  HSTRING v36; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v35 = a1;
  pv = a1;
  v34 = a5;
  v7 = 0LL;
  *a5 = 0;
  v33 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v33);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v8);
    goto LABEL_29;
  }
  v28 = 0LL;
  v10 = v33;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v33 + 48LL);
  v28 = 0LL;
  v12 = Windows::Internal::StringReference::StringReference(&v36, L"@Name");
  v13 = v11(v10, *v12, &v28);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v13);
LABEL_5:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v28);
    goto LABEL_29;
  }
  v30 = 0LL;
  v14 = (**v28)(v28, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v30);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
      (const char *)(unsigned int)v14);
LABEL_8:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
    goto LABEL_5;
  }
  string = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 152LL))(v30, &string);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB,
      (int)"OneCoreUap\\Private\\AVCore\\inc\\SpatialAudioLicenseBrokerUtil.h",
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
      goto LABEL_26;
  }
  v31 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v31,
    0LL);
  if ( (int)GetAppServiceName((const unsigned __int16 *)a2, &v31) < 0 )
  {
    v26 = v31;
  }
  else
  {
    v22 = 32LL * v16;
    *(_BYTE *)(v22 + a3) = 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a2,
      0xFFFFFFFFFFFFFFFFuLL,
      v21);
    v23 = (void **)(v22 + a3 + 16);
    if ( v23 == &pv )
    {
      v24 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v23,
        pv);
      v24 = 0LL;
    }
    if ( v24 )
      CoTaskMemFree(v24);
    v25 = (void **)(v22 + a3 + 24);
    v26 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v25,
      v31);
  }
  *v34 = 1;
  if ( v26 )
    CoTaskMemFree(v26);
LABEL_26:
  if ( string )
    WindowsDeleteString(string);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v28);
  v9 = 0;
LABEL_29:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v33);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v35);
  return v9;
}
