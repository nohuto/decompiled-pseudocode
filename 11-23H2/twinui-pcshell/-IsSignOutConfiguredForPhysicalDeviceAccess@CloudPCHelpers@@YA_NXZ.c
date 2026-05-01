/*
 * XREFs of ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x180278370
 * Callers:
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x1801DAC98 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

char __fastcall CloudPCHelpers::IsSignOutConfiguredForPhysicalDeviceAccess(CloudPCHelpers *this)
{
  char result; // al
  bool v2; // bl
  unsigned int ValueW; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp+18h] BYREF

  result = CloudPCHelpers::IsBootToCloudModeRegistryCheck(this);
  v2 = 0;
  if ( result )
  {
    phkResult = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &phkResult,
      0LL);
    ValueW = RegOpenCurrentUser(0x20019u, &phkResult);
    if ( ValueW )
    {
      v4 = 361LL;
    }
    else
    {
      pvData = 0;
      pcbData = 4;
      ValueW = RegGetValueW(
                 phkResult,
                 L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                 L"SignOutConfiguredForPhysicalDeviceAccess",
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW == 2 )
      {
LABEL_9:
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
        return v2;
      }
      if ( !ValueW )
      {
        v2 = pvData == 1;
        goto LABEL_9;
      }
      v4 = 378LL;
    }
    wil::details::in1diag3::_Log_Win32(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\internal\\shell\\inc\\private\\CloudPCCommon.h",
      (const char *)ValueW);
    goto LABEL_9;
  }
  return result;
}
