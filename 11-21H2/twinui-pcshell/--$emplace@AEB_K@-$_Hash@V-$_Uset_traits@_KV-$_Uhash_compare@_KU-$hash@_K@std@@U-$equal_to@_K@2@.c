/*
 * XREFs of ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1805776F4
 * Callers:
 *     ?GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x18001AE64 (-GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18013FF60 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@_KPEAX@2@_KQEAU32@1@Z @ 0x18022BD44 (-_Insert_new_node_before@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUTargetWindowContext@GamingOverlayExperienceManager@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1803283D0 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUTargetWindowContext@GamingOverlayExperienceManager@@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXXZ @ 0x180579380 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::emplace<unsigned __int64 const &>(
        float *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 appended; // rsi
  size_t size_of; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v16; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-20h]

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Find_last<unsigned __int64>(
    a1,
    &v15,
    a3,
    appended);
  if ( *((_QWORD *)&v15 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v15 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v16 = a1 + 2;
    v17 = 0LL;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v17 = v8;
    v8[2] = *(_QWORD *)a3;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *a1 )
    {
      std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Rehash_for_1(a1);
      v15 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,GamingOverlayExperienceManager::TargetWindowContext,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,GamingOverlayExperienceManager::TargetWindowContext>>,0>>::_Find_last<unsigned __int64>(
                         a1,
                         &v16,
                         v8 + 2,
                         appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      v15,
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
