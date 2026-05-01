/*
 * XREFs of ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18001B2F0
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180147140 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180578930 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x18001B47C (-erase@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uh.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18001BAC4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??0?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x18001CFA8 (--0-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KUg.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x180035EBC (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800989E4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180577410 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  char *v4; // r12
  _OWORD *v5; // r15
  __int64 **v6; // rdi
  __int64 *v7; // rbx
  _OWORD *v8; // rsi
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  char v12[16]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v13; // [rsp+40h] [rbp-39h] BYREF
  _OWORD *v14; // [rsp+50h] [rbp-29h]
  char v15[8]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD **v16; // [rsp+68h] [rbp-11h]
  __int64 v17; // [rsp+78h] [rbp-1h]
  __int128 v18; // [rsp+80h] [rbp+7h]
  char v19; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+E8h] [rbp+6Fh] BYREF

  v20 = a2;
  v4 = (char *)this + 608;
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                    (char *)this + 608,
                    &v19,
                    &v20) != *((_QWORD *)this + 77) )
  {
    v13 = 0LL;
    v5 = 0LL;
    v14 = 0LL;
    std::unordered_map<unsigned __int64,winrt::guid>::unordered_map<unsigned __int64,winrt::guid>(v15);
    v6 = (__int64 **)*((_QWORD *)this + 90);
    v7 = *v6;
    v8 = 0LL;
    while ( v7 != (__int64 *)v6 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 85)
                                 + 8
                                 * ((*((_QWORD *)this + 86) - 1LL) & ((unsigned __int64)(*((_QWORD *)this + 87) + v7[4]) >> 1)))
                     + 8LL * ((*((_DWORD *)this + 174) + *((_DWORD *)v7 + 8)) & 1)) == a2 )
      {
        if ( v8 == v5 )
        {
          std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(&v13, v8, v7 + 2);
          v5 = v14;
          v8 = (_OWORD *)*((_QWORD *)&v13 + 1);
        }
        else
        {
          *v8++ = *((_OWORD *)v7 + 1);
          *((_QWORD *)&v13 + 1) = v8;
        }
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          v15,
          v12,
          v7 + 4);
      }
      v7 = (__int64 *)*v7;
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(this, &v13, v15);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::erase(
      v4,
      &v20);
    std::_Deallocate<16,0>(v17, (v18 - v17) & 0xFFFFFFFFFFFFFFF8uLL);
    v17 = 0LL;
    v18 = 0LL;
    v9 = v16;
    *v16[1] = 0LL;
    v10 = *v9;
    if ( v10 )
    {
      do
      {
        v11 = (_QWORD *)*v10;
        std::_Deallocate<16,0>(v10, 40LL);
        v10 = v11;
      }
      while ( v11 );
    }
    std::_Deallocate<16,0>(v16, 40LL);
    if ( (_QWORD)v13 )
      std::_Deallocate<16,0>(v13, ((unsigned __int64)v14 - v13) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
