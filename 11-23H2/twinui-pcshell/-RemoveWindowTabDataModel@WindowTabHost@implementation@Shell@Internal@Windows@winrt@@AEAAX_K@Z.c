/*
 * XREFs of ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x180032BE0
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1801536B0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x180637960 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800327D4 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??0?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEAA@XZ @ 0x180032D68 (--0-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KUg.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1800333B4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180034334 (-erase@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uh.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x180061428 (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180635BD0 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  char *v4; // r13
  _OWORD *v5; // r15
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _OWORD *v8; // rsi
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  _OWORD *v11; // r9
  _QWORD *v12; // rbx
  char v13[16]; // [rsp+20h] [rbp-49h] BYREF
  __int128 v14; // [rsp+30h] [rbp-39h] BYREF
  _OWORD *v15; // [rsp+40h] [rbp-29h]
  char v16[8]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD **v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  __int128 v19; // [rsp+70h] [rbp+7h]
  char v20; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+6Fh] BYREF

  v21 = a2;
  v4 = (char *)this + 624;
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find<void>(
                    (char *)this + 624,
                    &v20,
                    &v21) != *((_QWORD *)this + 79) )
  {
    v14 = 0LL;
    v5 = 0LL;
    v15 = 0LL;
    std::unordered_map<unsigned __int64,winrt::guid>::unordered_map<unsigned __int64,winrt::guid>(v16);
    v6 = (_QWORD *)*((_QWORD *)this + 92);
    v7 = (_QWORD *)*v6;
    v8 = 0LL;
    while ( v7 != v6 )
    {
      v11 = v7 + 2;
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 87)
                                 + 8 * (((v7[4] + *((_QWORD *)this + 89)) >> 1) & (*((_QWORD *)this + 88) - 1LL)))
                     + 8LL * ((*((_DWORD *)v7 + 8) + *((_DWORD *)this + 178)) & 1)) == a2 )
      {
        if ( v8 == v5 )
        {
          std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(&v14, v8, v7 + 2);
          v5 = v15;
          v8 = (_OWORD *)*((_QWORD *)&v14 + 1);
        }
        else
        {
          *v8++ = *v11;
          *((_QWORD *)&v14 + 1) = v8;
        }
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          v16,
          v13,
          v7 + 4,
          v11);
      }
      v7 = (_QWORD *)*v7;
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
      this,
      (__int64 *)&v14,
      v16);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::erase(
      v4,
      &v21);
    std::_Deallocate<16,0>(v18, (v19 - v18) & 0xFFFFFFFFFFFFFFF8uLL);
    v18 = 0LL;
    v19 = 0LL;
    v9 = v17;
    *v17[1] = 0LL;
    v10 = *v9;
    if ( v10 )
    {
      do
      {
        v12 = (_QWORD *)*v10;
        std::_Deallocate<16,0>(v10, 40LL);
        v10 = v12;
      }
      while ( v12 );
    }
    std::_Deallocate<16,0>(v17, 40LL);
    if ( (_QWORD)v14 )
      std::_Deallocate<16,0>(v14, ((unsigned __int64)v15 - v14) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
