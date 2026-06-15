/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180041E00
 * Callers:
 *     ?RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z @ 0x180042580 (-RuntimeClassInitialize@ApplicationSpecificEndpointInfo@@QEAAJPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000AA00 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F6B0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180015898 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180015E94 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001DFCC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA?AV?$unique_ptr@$$BY0A@GU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180040DC4 (--$make_unique_cotaskmem_nothrow@$$BY0A@G@wil@@YA-AV-$unique_ptr@$$BY0A@GU-$function_deleter@P6A.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180041750 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180042074 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180042304 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180042A38 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180042C1C (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints(unsigned __int16 **this)
{
  HKEY v2; // rdi
  __int64 v3; // r8
  const char *v4; // r9
  WCHAR *v5; // rbx
  DWORD i; // r14d
  unsigned int v7; // eax
  __int64 v8; // r8
  int updated; // eax
  unsigned int v10; // esi
  __int64 v11; // rdx
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+64h] [rbp-25h] BYREF
  DWORD cchValueName; // [rsp+68h] [rbp-21h] BYREF
  unsigned __int16 *v16; // [rsp+70h] [rbp-19h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-11h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v18; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v19; // [rsp+84h] [rbp-5h] BYREF
  LPWSTR lpValueName; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  hKey = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL);
  if ( (int)ApplicationSpecificEndpointInfo::GetAppKey(this, 0x20019u, 0, &hKey) >= 0 )
  {
    cValues = 0;
    cbMaxValueNameLen = 0;
    v2 = hKey;
    if ( !RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL) )
    {
      wil::make_unique_cotaskmem_nothrow<unsigned short [0]>(&lpValueName, ++cbMaxValueNameLen, v3, v4);
      v5 = lpValueName;
      if ( !lpValueName )
      {
        v10 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1A4,
          (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_22;
      }
      for ( i = 0; i < cValues; ++i )
      {
        cchValueName = cbMaxValueNameLen;
        v7 = RegEnumValueW(v2, i, v5, &cchValueName, 0LL, 0LL, 0LL, 0LL);
        if ( v7 )
        {
          v10 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  437LL,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                  (const char *)v7);
          goto LABEL_19;
        }
        if ( cchValueName )
        {
          std::wstring::wstring(v21, v5, v8);
          if ( std::wstring::find(v21) == -1 )
          {
            v16 = 0LL;
            updated = ApplicationSpecificEndpointInfo::ReadKey(v2, v5, &v16);
            v10 = updated;
            if ( updated < 0 )
            {
              v11 = 454LL;
LABEL_17:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v11,
                (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)(unsigned int)updated);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
              std::wstring::~wstring(v21);
LABEL_19:
              CoTaskMemFree(v5);
              goto LABEL_22;
            }
            if ( (int)ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
                        v5,
                        &v18,
                        (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v19) >= 0 )
            {
              updated = ApplicationSpecificEndpointInfo::UpdateState(this, v19, (unsigned int)v18, v16);
              v10 = updated;
              if ( updated < 0 )
              {
                v11 = 464LL;
                goto LABEL_17;
              }
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
          }
          std::wstring::~wstring(v21);
        }
      }
      CoTaskMemFree(v5);
    }
  }
  v10 = 0;
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v10;
}
