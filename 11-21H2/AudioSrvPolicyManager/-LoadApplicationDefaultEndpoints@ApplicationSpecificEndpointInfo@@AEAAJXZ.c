/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003C4AC
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180019EAC (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000C5FC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18000E4A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003B7B4 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18003C8A4 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18003CC2C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x18003D564 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x18003D7B4 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints(
        ApplicationSpecificEndpointInfo *this)
{
  int AppKey; // eax
  HKEY v3; // rbx
  SIZE_T v4; // rdi
  HKEY v5; // rax
  HKEY v6; // rsi
  HKEY i; // rcx
  DWORD v8; // r15d
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  int Key; // eax
  unsigned int v12; // edi
  int v13; // eax
  void *v14; // rdi
  int updated; // eax
  unsigned int v16; // r14d
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+6Ch] [rbp-25h] BYREF
  DWORD cchValueName; // [rsp+70h] [rbp-21h] BYREF
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v21; // [rsp+74h] [rbp-1Dh] BYREF
  unsigned int v22; // [rsp+78h] [rbp-19h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-11h] BYREF
  HKEY hKey[2]; // [rsp+88h] [rbp-9h] BYREF
  char *v25[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+17h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  hKey[0] = 0LL;
  AppKey = ApplicationSpecificEndpointInfo::GetAppKey(this, 0x20019u, 0, hKey);
  v3 = hKey[0];
  if ( AppKey < 0
    || (cValues = 0,
        cbMaxValueNameLen = 0,
        RegQueryInfoKeyW(hKey[0], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL)) )
  {
LABEL_22:
    if ( v3 )
      RegCloseKey(v3);
    return 0LL;
  }
  v4 = 2LL * ++cbMaxValueNameLen;
  v5 = (HKEY)CoTaskMemAlloc(v4);
  v6 = v5;
  hKey[1] = v5;
  if ( v5 )
  {
    for ( i = (HKEY)((char *)v5 + v4); v5 != i; v5 = (HKEY)((char *)v5 + 2) )
      *(_WORD *)v5 = 0;
  }
  if ( !v6 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x8007000ELL);
    if ( v3 )
      goto LABEL_41;
    return v12;
  }
  v8 = 0;
  if ( !cValues )
  {
LABEL_21:
    CoTaskMemFree(v6);
    goto LABEL_22;
  }
  while ( 1 )
  {
    cchValueName = cbMaxValueNameLen;
    v9 = RegEnumValueW(v3, v8, (LPWSTR)v6, &cchValueName, 0LL, 0LL, 0LL, 0LL);
    if ( v9 )
    {
      v12 = wil::details::in1diag3::Return_Win32(
              retaddr,
              434LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
              (const char *)v9);
      CoTaskMemFree(v6);
      if ( !v3 )
        return v12;
      goto LABEL_41;
    }
    if ( cchValueName )
      break;
LABEL_20:
    if ( ++v8 >= cValues )
      goto LABEL_21;
  }
  v26 = 0LL;
  v27 = 7LL;
  LOWORD(v25[0]) = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( *((_WORD *)v6 + v10) );
  std::wstring::assign(v25, v6, v10);
  if ( std::wstring::find(v25) != -1 )
  {
LABEL_18:
    if ( v27 >= 8 )
      std::_Deallocate<16,0>(v25[0], 2 * v27 + 2);
    goto LABEL_20;
  }
  pv = 0LL;
  Key = ApplicationSpecificEndpointInfo::ReadKey(v3, (LPCWSTR)v6, (unsigned __int16 **)&pv);
  v12 = Key;
  if ( Key >= 0 )
  {
    v13 = ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
            (const unsigned __int16 *)v6,
            &v21,
            (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v22);
    v14 = pv;
    if ( v13 >= 0 )
    {
      updated = ApplicationSpecificEndpointInfo::UpdateState(this, v22, (unsigned int)v21, pv);
      v16 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1CD,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)updated);
        if ( v14 )
          CoTaskMemFree(v14);
        if ( v27 >= 8 )
          std::_Deallocate<16,0>(v25[0], 2 * v27 + 2);
        v26 = 0LL;
        v27 = 7LL;
        LOWORD(v25[0]) = 0;
        CoTaskMemFree(v6);
        if ( v3 )
          RegCloseKey(v3);
        return v16;
      }
    }
    if ( v14 )
      CoTaskMemFree(v14);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C3,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)Key);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v27 >= 8 )
    std::_Deallocate<16,0>(v25[0], 2 * v27 + 2);
  v26 = 0LL;
  v27 = 7LL;
  LOWORD(v25[0]) = 0;
  CoTaskMemFree(v6);
  if ( !v3 )
    return v12;
LABEL_41:
  RegCloseKey(v3);
  return v12;
}
