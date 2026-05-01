/*
 * XREFs of ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1801EF260
 * Callers:
 *     ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1801EE6A8 (-ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@.c)
 *     ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1801EF260 (-SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800C4F5C (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1801DBA20 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1801EF260 (-SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SearchSettings::SearchSettingsHelper::SetUnprotectedDaclRecursive(HKEY a1, struct _ACL *a2)
{
  DWORD v4; // ebx
  DWORD i; // edx
  DWORD v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  DWORD cchName; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR SubKey[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  memset_0(SubKey, 0, 0x208uLL);
  cchName = 260;
  v4 = 0;
  for ( i = 0; !RegEnumKeyExW(a1, i, SubKey, &cchName, 0LL, 0LL, 0LL, 0LL); i = v4 )
  {
    hKey = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL);
    v6 = RegCreateKeyExW(a1, SubKey, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    v7 = retaddr;
    if ( v6 )
    {
      v8 = 899LL;
    }
    else
    {
      v6 = SetSecurityInfo(hKey, SE_REGISTRY_KEY, 0x20000004u, 0LL, 0LL, a2, 0LL);
      v7 = retaddr;
      if ( !v6 )
        goto LABEL_7;
      v8 = 902LL;
    }
    wil::details::in1diag3::_Log_Win32(
      v7,
      (void *)v8,
      (int)"shellcommon\\internal\\shell\\inc\\Search\\SearchSettingsHelper.h",
      (const char *)v6);
LABEL_7:
    SearchSettings::SearchSettingsHelper::SetUnprotectedDaclRecursive(hKey, a2);
    cchName = 260;
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
    ++v4;
  }
}
