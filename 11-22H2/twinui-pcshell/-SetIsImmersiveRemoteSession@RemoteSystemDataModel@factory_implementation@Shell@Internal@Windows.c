/*
 * XREFs of ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180718844
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180719A68 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x180710308 (CapabilityHelper--CreateSecurityAttributesForUWPCapability_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAA_NXZ @ 0x18071A844 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        BYTE a2)
{
  char IsEnabled; // al
  bool v4; // bl
  const char *v5; // r9
  LSTATUS v6; // eax
  struct _ACL *v7; // rax
  signed int v8; // eax
  HKEY v9; // rcx
  winrt::hstring *v10; // rax
  const WCHAR *v11; // rax
  bool v12; // bl
  LSTATUS v13; // eax
  int dwOptions; // [rsp+20h] [rbp-88h]
  WINBOOL bDaclPresent; // [rsp+50h] [rbp-58h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-50h] BYREF
  PACL pDacl; // [rsp+60h] [rbp-48h] BYREF
  HKEY *p_hKey; // [rsp+68h] [rbp-40h]
  HKEY phkResult; // [rsp+70h] [rbp-38h] BYREF
  char v20; // [rsp+78h] [rbp-30h]
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+80h] [rbp-28h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  BYTE v24; // [rsp+B8h] [rbp+10h] BYREF
  HKEY Data; // [rsp+C0h] [rbp+18h] BYREF
  volatile signed __int32 *bDaclDefaulted; // [rsp+C8h] [rbp+20h] BYREF

  v24 = a2;
  try
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl);
    *((_BYTE *)this + 40) = v24;
    if ( IsEnabled )
    {
      hKey = 0LL;
      CapabilityHelper::CreateSecurityAttributesForUWPCapability_0(&pSecurityDescriptor);
      p_hKey = &hKey;
      phkResult = 0LL;
      v20 = 1;
      v4 = RegCreateKeyExW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
             0,
             0LL,
             1u,
             0xF003Fu,
             &SecurityAttributes,
             &phkResult,
             0LL) == 0;
      if ( v20 )
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          p_hKey,
          phkResult);
      if ( v4 )
      {
        LODWORD(Data) = v24 != 0;
        v6 = RegSetValueExW(hKey, L"IsImmersiveRemoteSession", 0, 4u, (const BYTE *)&Data, 4u);
        if ( v6 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x44D,
            (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
            (const char *)(unsigned int)v6,
            dwOptions);
        pDacl = 0LL;
        bDaclPresent = 0;
        LODWORD(bDaclDefaulted) = 0;
        if ( GetSecurityDescriptorDacl(pSecurityDescriptor, &bDaclPresent, &pDacl, (LPBOOL)&bDaclDefaulted) )
        {
          v7 = pDacl;
          if ( !pDacl )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x457,
              (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
              (const char *)0x8000FFFFLL);
            v7 = pDacl;
          }
          v8 = SetSecurityInfo(hKey, SE_REGISTRY_KEY, 4u, 0LL, 0LL, v7, 0LL);
          if ( v8 > 0 )
            v8 = (unsigned __int16)v8 | 0x80070000;
          if ( v8 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x45E,
              (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
              (const char *)(unsigned int)v8);
        }
      }
      if ( pSecurityDescriptor )
        LocalFree(pSecurityDescriptor);
      v9 = hKey;
    }
    else
    {
      Data = 0LL;
      p_hKey = &Data;
      phkResult = 0LL;
      v20 = 1;
      v10 = winrt::hstring::hstring(
              (winrt::hstring *)&bDaclDefaulted,
              L"Software\\Microsoft\\Windows\\RemoteSystemIntegration");
      v11 = winrt::hstring::c_str(v10);
      v12 = RegCreateKeyExW(HKEY_CURRENT_USER, v11, 0, 0LL, 1u, 0x2001Fu, 0LL, &phkResult, 0LL) == 0;
      winrt::handle_type<winrt::impl::hstring_traits>::close(&bDaclDefaulted);
      if ( v20 )
        wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
          p_hKey,
          phkResult);
      if ( v12 )
      {
        v13 = RegSetValueExW(Data, L"IsImmersiveRemoteSession", 0, 4u, &v24, 4u);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x478,
            (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
            (const char *)(unsigned int)v13);
      }
      v9 = Data;
    }
    if ( v9 )
      RegCloseKey(v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47C,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
      v5);
  }
}
