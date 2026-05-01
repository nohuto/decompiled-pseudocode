/*
 * XREFs of ?ConfigureRegistryKeys@Utils@implementation@Shell@Internal@Windows@winrt@@SAXKHAEAU_SYSTEMTIME@@@Z @ 0x1806FA008
 * Callers:
 *     ?InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z @ 0x1806FAE70 (-InitializeData@Utils@implementation@Shell@Internal@Windows@winrt@@SA_NAEAH0AEAU_SYSTEMTIME@@@Z.c)
 *     ?InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ @ 0x1806FB2F8 (-InvokeCampaign@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C4EC4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::Utils::ConfigureRegistryKeys(
        int a1,
        int a2,
        const BYTE *a3)
{
  const WCHAR *v4; // rax
  PHKEY phkResult; // rdx
  int Data; // [rsp+60h] [rbp+8h] BYREF
  int lpData; // [rsp+68h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  lpData = a2;
  Data = a1;
  hKey = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  v4 = winrt::hstring::c_str((winrt::hstring *)&c_miracastDiscoveryRegPath);
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, v4, 0, 0LL, 0, 0x20006u, 0LL, phkResult, 0LL) )
  {
    RegSetValueExW(hKey, L"NotificationCount", 0, 4u, (const BYTE *)&Data, 4u);
    RegSetValueExW(hKey, L"DisableNotification", 0, 4u, (const BYTE *)&lpData, 4u);
    RegSetValueExW(hKey, L"LastNotifiedTime", 0, 3u, a3, 0x10u);
  }
  if ( hKey )
    RegCloseKey(hKey);
}
