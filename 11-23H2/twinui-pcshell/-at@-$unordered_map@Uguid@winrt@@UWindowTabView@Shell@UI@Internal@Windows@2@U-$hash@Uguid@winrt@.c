/*
 * XREFs of ?at@?$unordered_map@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@9@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@@std@@QEAAAEAUWindowTabView@Shell@UI@Internal@Windows@winrt@@AEBUguid@8@@Z @ 0x18063A480
 * Callers:
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x180639C74 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 * Callees:
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x180034014 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Interna.c)
 */

__int64 __fastcall std::unordered_map<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView>::at(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 i; // r8
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v4 = *(unsigned __int8 *)(i + a2);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Find_last<winrt::guid>(
    a1,
    &v6,
    a2,
    v2);
  if ( !v7 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18063A4E5LL);
  }
  return v7 + 32;
}
