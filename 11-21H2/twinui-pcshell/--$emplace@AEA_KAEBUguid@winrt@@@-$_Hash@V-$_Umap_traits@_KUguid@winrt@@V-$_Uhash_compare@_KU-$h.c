/*
 * XREFs of ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180577410
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18001B2F0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18001B964 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18001CCDC (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$e.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18010A6CC (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@_KPEAX@2@_KQEAU32@1@Z @ 0x18022BD44 (-_Insert_new_node_before@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@PEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@V?$_Uhash_compare@PEAUHMONITOR__@@U?$hash@PEAUHMONITOR__@@@std@@U?$equal_to@PEAUHMONITOR__@@@3@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$ComPtr@UIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x18033C5B4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@PEAUHMONITOR__@@V-$ComPtr@UIVirtualDesktopPerMonitorColle.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3,
        _OWORD *a4)
{
  __int64 appended; // rsi
  size_t size_of; // rax
  char *v10; // rbp
  __int64 v11; // rcx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  char *v19; // [rsp+38h] [rbp-20h]

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
    a1,
    &v17,
    a3,
    appended);
  if ( *((_QWORD *)&v17 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v18 = a1 + 2;
    v19 = 0LL;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v19 = v10;
    *((_QWORD *)v10 + 2) = *(_QWORD *)a3;
    *(_OWORD *)(v10 + 24) = *a4;
    v11 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = *((_QWORD *)a1 + 7);
    if ( v13 < 0 )
    {
      v15 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v13 >> 1);
      v14 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) > *a1 )
    {
      std::_Hash<std::_Umap_traits<HMONITOR__ *,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>,std::_Uhash_compare<HMONITOR__ *,std::hash<HMONITOR__ *>,std::equal_to<HMONITOR__ *>>,std::allocator<std::pair<HMONITOR__ * const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection>>>,0>>::_Rehash_for_1((__int64)a1);
      v17 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v18,
                         (_QWORD *)v10 + 2,
                         appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v17,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
