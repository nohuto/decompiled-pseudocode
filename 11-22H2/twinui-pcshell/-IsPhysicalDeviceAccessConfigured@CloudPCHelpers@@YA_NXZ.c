/*
 * XREFs of ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1801DAD44
 * Callers:
 *     ?GetCloudPCMode@CloudPCHelpers@@YA?AW4Mode@1@XZ @ 0x180113F10 (-GetCloudPCMode@CloudPCHelpers@@YA-AW4Mode@1@XZ.c)
 *     _lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1::operator() @ 0x180276D10 (_lambda_c27fb3894833df319de68fad3b02a886_$_ResumeCoro$1--operator().c)
 *     ?HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180277CEC (-HandlePhysicalDeviceAccess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x1801DAC98 (-IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x1801DAE6C (-IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ @ 0x1801DBA48 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BASBF@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CloudPCHelpers::IsPhysicalDeviceAccessConfigured(CloudPCHelpers *this)
{
  CloudPCHelpers *v1; // rcx
  bool v2; // bl
  LSTATUS v3; // eax
  __int64 v4; // rdx
  bool v5; // sf
  unsigned int ValueW; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  unsigned int pdwType; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  int pvData; // [rsp+50h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+18h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp+20h] BYREF

  v2 = 0;
  if ( CloudPCHelpers::IsBootToCloudModeRegistryCheck(this) && CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(v1) )
  {
    pvData = 0;
    pcbData = 4;
    phkResult = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &phkResult,
      0LL);
    v3 = RegOpenCurrentUser(0x20019u, &phkResult);
    v5 = v3 < 0;
    if ( v3 > 0 )
      v5 = 1;
    if ( v5 )
      goto LABEL_14;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_BASBF>::__private_IsEnabled(
                            &`wil::Feature<__WilFeatureTraits_Feature_BASBF>::GetImpl'::`2'::impl,
                            v4) )
    {
      ValueW = RegGetValueW(
                 phkResult,
                 L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                 L"PhysicalDeviceAccessConfigured",
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      if ( ValueW == 2 )
      {
LABEL_14:
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
        return v2;
      }
      v7 = retaddr;
      if ( ValueW )
      {
        v8 = 132LL;
LABEL_12:
        wil::details::in1diag3::_Log_Win32(
          v7,
          (void *)v8,
          (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\cloudpccommon.h",
          (const char *)ValueW,
          pdwType);
        goto LABEL_14;
      }
    }
    else
    {
      ValueW = RegGetValueW(
                 phkResult,
                 L"Software\\Microsoft\\Windows\\BootToCloud\\PhysicalDeviceAccess",
                 L"PhysicalDeviceAccessConfigured",
                 0x10u,
                 0LL,
                 &pvData,
                 &pcbData);
      v7 = retaddr;
      if ( ValueW )
      {
        v8 = 139LL;
        goto LABEL_12;
      }
    }
    v2 = pvData != 0;
    goto LABEL_14;
  }
  return 0;
}
