/*
 * XREFs of ?B2CIsPhysicalDeviceAccessConfigured@@YA_NXZ @ 0x1801F1EB0
 * Callers:
 *     ?IsBootToCloudPCSession@@YA_NXZ @ 0x1800F48A8 (-IsBootToCloudPCSession@@YA_NXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x1801DBA48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ.c)
 *     ?B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ @ 0x1801F2020 (-B2CIsPhysicalDeviceAccessPolicyEnabled@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool B2CIsPhysicalDeviceAccessConfigured(void)
{
  bool v0; // bl
  unsigned int ValueW; // eax
  wil::details::in1diag3 *v2; // rcx
  __int64 v3; // rdx
  HKEY phkResult[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+10h]
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int pvData; // [rsp+78h] [rbp+20h] BYREF
  DWORD v9; // [rsp+80h] [rbp+28h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+30h] BYREF

  v0 = 0;
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\PolicyManager\\current\\Device\\CloudDesktop",
          L"BootToCloudMode",
          0x10u,
          0LL,
          &pvData,
          &pcbData)
    && pvData == 1
    && B2CIsPhysicalDeviceAccessPolicyEnabled() )
  {
    v7 = 0;
    v9 = 4;
    phkResult[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      phkResult,
      0LL);
    ValueW = RegOpenCurrentUser(0x20019u, phkResult);
    v2 = retaddr;
    if ( ValueW )
    {
      v3 = 152LL;
LABEL_6:
      wil::details::in1diag3::_Log_Win32(
        v2,
        (void *)v3,
        (int)"onecoreuap\\internal\\shell\\inc\\ShellProgramConfiguration.h",
        (const char *)ValueW);
LABEL_14:
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(phkResult);
      return v0;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl) )
    {
      ValueW = RegGetValueW(
                 phkResult[0],
                 L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                 L"PhysicalDeviceAccessConfigured",
                 0x10u,
                 0LL,
                 &v7,
                 &v9);
      if ( ValueW == 2 )
        goto LABEL_14;
      v2 = retaddr;
      if ( ValueW )
      {
        v3 = 163LL;
        goto LABEL_6;
      }
    }
    else
    {
      ValueW = RegGetValueW(
                 phkResult[0],
                 L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                 L"PhysicalDeviceAccessConfigured",
                 0x10u,
                 0LL,
                 &v7,
                 &v9);
      v2 = retaddr;
      if ( ValueW )
      {
        v3 = 170LL;
        goto LABEL_6;
      }
    }
    v0 = v7 == 1;
    goto LABEL_14;
  }
  return 0;
}
