/*
 * XREFs of ??$emplace@AEBUguid@winrt@@_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@$$QEA_K@Z @ 0x1805775AC
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x1800197E4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMo.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEBA_NXZ @ 0x18001BD1C (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerM.c)
 *     ?_Check_max_size@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEBAXXZ @ 0x18001BD84 (-_Check_max_size@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@U.c)
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x18001C5E0 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18010A6CC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@IEAAXXZ @ 0x180579218 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  unsigned __int64 i; // rcx
  size_t size_of; // rax
  _OWORD *v11; // r14
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+30h] [rbp-28h] BYREF
  _OWORD *v15; // [rsp+38h] [rbp-20h]

  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Find_last<winrt::guid>(
    a1,
    &v13,
    (__int64)a3,
    v8);
  if ( *((_QWORD *)&v13 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v13 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Check_max_size((__int64)a1);
    v14 = a1 + 1;
    v15 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v15 = v11;
    v11[1] = *a3;
    *((_QWORD *)v11 + 4) = *a4;
    if ( std::_Hash<std::_Umap_traits<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Rehash_for_1(a1);
      v13 = *(_OWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Find_last<winrt::guid>(
                         a1,
                         &v14,
                         (__int64)(v11 + 1),
                         v8);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>>,0>>::_Insert_new_node_before(
                      a1,
                      v8,
                      v13,
                      v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
