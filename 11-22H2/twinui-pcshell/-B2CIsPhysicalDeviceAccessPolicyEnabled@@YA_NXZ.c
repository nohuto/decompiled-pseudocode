/*
 * XREFs of ?B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ @ 0x1801F2020
 * Callers:
 *     ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x1801F1EB0 (-B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char B2CIsPhysicalDeviceAccessPolicyEnabled(void)
{
  char v0; // bl
  unsigned int v1; // eax
  __int64 v2; // rdx
  unsigned int ValueW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int pvData; // [rsp+50h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+18h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp+20h] BYREF

  v0 = 0;
  phkResult = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &phkResult,
    0LL);
  v1 = RegOpenCurrentUser(0x20019u, &phkResult);
  if ( !v1 )
  {
    pvData = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               phkResult,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
               L"EnablePhysicalDeviceAccessOnCtrlAltDel",
               0x10u,
               0LL,
               &pvData,
               &pcbData);
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x7C,
        (int)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
        (const char *)ValueW);
    }
    else if ( pvData == 1 )
    {
      goto LABEL_10;
    }
    v1 = RegGetValueW(
           phkResult,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\CloudDesktop\\NodeValues",
           L"EnablePhysicalDeviceAccessOnErrorScreens",
           0x10u,
           0LL,
           &pvData,
           &pcbData);
    if ( v1 )
    {
      v2 = 131LL;
      goto LABEL_8;
    }
    if ( pvData != 1 )
      goto LABEL_11;
LABEL_10:
    v0 = 1;
    goto LABEL_11;
  }
  v2 = 118LL;
LABEL_8:
  wil::details::in1diag3::_Log_Win32(
    retaddr,
    (void *)v2,
    (int)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
    (const char *)v1);
LABEL_11:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  return v0;
}
