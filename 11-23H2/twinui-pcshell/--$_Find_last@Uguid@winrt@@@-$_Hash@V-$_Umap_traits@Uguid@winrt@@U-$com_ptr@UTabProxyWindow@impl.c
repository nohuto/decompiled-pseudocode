/*
 * XREFs of ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x180034A9C
 * Callers:
 *     ??$emplace@Uguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@4@@Z @ 0x18003487C (--$emplace@Uguid@winrt@@AEAU-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winr.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x1800349D0 (--$find@X@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@I.c)
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x180034A40 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBUguid@winrt@@@Z @ 0x18063A4EC (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Inte.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Find_last<winrt::guid>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // r9

  v4 = a3;
  v5 = a2;
  v6 = a1[1];
  v7 = *(_QWORD *)(a1[3] + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v6 )
  {
    *v5 = v6;
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned __int8)winrt::operator==(v4, v7 + 16) )
      {
        *v5 = *v9;
        v5[1] = v9;
        return v5;
      }
      if ( v9 == v8 )
        break;
      v7 = v9[1];
    }
    *v5 = v9;
  }
  v5[1] = 0LL;
  return v5;
}
