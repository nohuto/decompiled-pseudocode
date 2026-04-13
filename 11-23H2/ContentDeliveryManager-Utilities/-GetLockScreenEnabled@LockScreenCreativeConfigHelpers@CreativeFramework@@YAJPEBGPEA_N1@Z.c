/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180058DC8
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x18005A340 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C1E8 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002C874 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180042C64 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180045458 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18005809C (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180059DE4 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@@YA_NPEA_N@Z @ 0x180059E74 (-IsContentDeliveryAllowedOverrideInEffect@ContentDeliveryManagerDebugSettings@CreativeFramework@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005D294 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        bool *a2,
        bool *a3,
        bool *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  bool v8; // al
  int v9; // r14d
  CreativeFramework::Policy *v10; // rcx
  unsigned __int16 **v11; // rdx
  int CurrentUserSidString; // eax
  signed int v13; // ebx
  int v14; // eax
  LSTATUS v15; // eax
  signed int v16; // ebx
  int v17; // eax
  HKEY v18; // rbx
  LSTATUS v19; // eax
  __int64 v20; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v22; // eax
  HKEY hKey; // [rsp+40h] [rbp-29h] BYREF
  void *v25; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v26[4]; // [rsp+50h] [rbp-19h] BYREF
  DWORD LastError; // [rsp+54h] [rbp-15h]
  LPCWSTR lpSubKey[3]; // [rsp+58h] [rbp-11h] BYREF
  LPCWSTR v29[10]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+D0h] [rbp+67h] BYREF
  int pvData; // [rsp+D8h] [rbp+6Fh] BYREF
  DWORD pcbData; // [rsp+E0h] [rbp+77h] BYREF
  DWORD v34; // [rsp+E8h] [rbp+7Fh] BYREF

  pdwValue = this;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  if ( CreativeFramework::ContentDeliveryManagerDebugSettings::IsContentDeliveryAllowedOverrideInEffect(
         (CreativeFramework::ContentDeliveryManagerDebugSettings *)&pdwValue,
         a2) )
  {
    v8 = (char)pdwValue;
    if ( a2 )
      *a2 = (char)pdwValue;
    if ( a3 )
      *a3 = v8;
    return 0LL;
  }
  v9 = 1;
  LOBYTE(v6) = 1;
  LOBYTE(v7) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl,
    v6,
    v7);
  LODWORD(pdwValue) = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
  if ( (_DWORD)pdwValue || CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v10) )
  {
    v25 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v25,
      0LL);
    CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                             (CreativeFramework::LockScreenCreativeConfigHelpers *)&v25,
                             v11);
    v13 = CurrentUserSidString;
    if ( CurrentUserSidString < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x129,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)CurrentUserSidString);
LABEL_42:
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25);
      return (unsigned int)v13;
    }
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v25,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v13 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v14);
LABEL_41:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
      goto LABEL_42;
    }
    hKey = 0LL;
    v15 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v16 = v15;
    if ( v15 > 0 )
      v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v16 < 0 )
    {
      memset(v29, 0, 24);
      v9 = 0;
      v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              (__int64)v29,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v25);
      v13 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v17);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
LABEL_40:
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
        goto LABEL_41;
      }
      v18 = hKey;
      if ( hKey )
      {
        v26[0] = 0;
        LastError = GetLastError();
        RegCloseKey(v18);
        wil::last_error_context::~last_error_context((wil::last_error_context *)v26);
      }
      hKey = 0LL;
      v19 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, v29[0], 0, 9u, &hKey);
      v13 = v19;
      if ( v19 > 0 )
        v13 = (unsigned __int16)v19 | 0x80070000;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
      if ( v13 < 0 )
      {
        v20 = 319LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v13);
        goto LABEL_40;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &pvData, &pcbData);
    v13 = ValueW;
    if ( ValueW > 0 )
      v13 = (unsigned __int16)ValueW | 0x80070000;
    if ( v13 == -2147024894 )
    {
      pvData = v9;
    }
    else if ( v13 < 0 )
    {
      v20 = 331LL;
      goto LABEL_39;
    }
    v34 = 4;
    v22 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v34);
    v13 = v22;
    if ( v22 > 0 )
      v13 = (unsigned __int16)v22 | 0x80070000;
    if ( v13 == -2147024894 )
    {
      LODWORD(pdwValue) = v9;
    }
    else
    {
      if ( v13 < 0 )
      {
        v20 = 344LL;
        goto LABEL_39;
      }
      v9 = (int)pdwValue;
    }
    if ( a2 )
      *a2 = pvData != 0;
    if ( a3 )
      *a3 = v9 != 0;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpSubKey);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25);
  }
  return 0LL;
}
