/*
 * XREFs of ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180011308
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x180001D70 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetMixFormat @ 0x180010C40 (AudioServerGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800F2620 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180004224 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180055AB8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     swprintf_s @ 0x18005FB00 (swprintf_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ValidateVadServerSettings(IID *a1)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  HRESULT v5; // eax
  __int64 v6; // r9
  __int64 v7; // rdx
  LSTATUS v8; // eax
  int phkResult; // [rsp+20h] [rbp-E0h]
  LPOLESTR lpsz; // [rsp+30h] [rbp-D0h] BYREF
  HKEY v11; // [rsp+38h] [rbp-C8h] BYREF
  IID rclsid; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  if ( a1[3].Data1 >= 0x18 )
  {
    v4 = 1311LL;
    goto LABEL_9;
  }
  rclsid = a1[1];
  v2 = *(_QWORD *)&rclsid.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&rclsid.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v2 = *(_QWORD *)rclsid.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v2 )
  {
    lpsz = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &lpsz,
      0LL);
    v5 = StringFromCLSID(&rclsid, &lpsz);
    if ( v5 >= 0 )
    {
      phkResult = (int)lpsz;
      if ( swprintf_s(Buffer, 0x104uLL, L"%s\\%s", L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\") != -1 )
      {
        v11 = 0LL;
        v8 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, &v11);
        if ( v8 >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v11);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpsz);
          goto LABEL_5;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x516,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v8,
          phkResult);
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v11);
LABEL_17:
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpsz);
        v4 = 1313LL;
        goto LABEL_9;
      }
      v6 = 2147942522LL;
      v7 = 1299LL;
    }
    else
    {
      v6 = (unsigned int)v5;
      v7 = 1296LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v6,
      phkResult);
    goto LABEL_17;
  }
LABEL_5:
  if ( *(_DWORD *)&a1[3].Data2 <= 3u )
    return 0LL;
  v4 = 1315LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL,
    phkResult);
  return 2147942487LL;
}
