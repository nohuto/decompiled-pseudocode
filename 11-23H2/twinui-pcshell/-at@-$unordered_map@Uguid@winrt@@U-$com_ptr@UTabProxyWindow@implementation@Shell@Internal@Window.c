/*
 * XREFs of ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x180034A40
 * Callers:
 *     ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x180034764 (-SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilter.c)
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x180034818 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x180639E48 (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x180639EB4 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid@6@_N@Z @ 0x180639F20 (-HideTabProxyWindowFromAltTab@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXUguid.c)
 * Callees:
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x180034A9C (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@impl.c)
 */

__int64 __fastcall std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 i; // r8
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v4 = *(unsigned __int8 *)(i + a2);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Find_last<winrt::guid>(
    a1,
    v6,
    a2,
    v2);
  if ( !v7 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x180336C2ALL);
  }
  return v7 + 32;
}
