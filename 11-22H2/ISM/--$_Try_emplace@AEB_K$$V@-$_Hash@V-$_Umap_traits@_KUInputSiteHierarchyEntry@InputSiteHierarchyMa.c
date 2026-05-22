/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000E7D0
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x1800209E0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18014C480 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18004A6F4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarch.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18004A888 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800550AC (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v24; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0x100000001B3LL
     * (a3[7] ^ (0x100000001B3LL
               * (a3[6] ^ (0x100000001B3LL
                         * (a3[5] ^ (0x100000001B3LL
                                   * (a3[4] ^ (0x100000001B3LL
                                             * (a3[3] ^ (0x100000001B3LL
                                                       * (a3[2] ^ (0x100000001B3LL
                                                                 * (a3[1] ^ (0x100000001B3LL
                                                                           * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))));
  v7 = 2 * (v6 & *(_QWORD *)(a1 + 48));
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 8 * v7 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 != v10 )
  {
    v11 = *(_QWORD *)(v8 + 8 * v7);
    while ( 1 )
    {
      if ( *(_QWORD *)a3 == *(_QWORD *)(v9 + 16) )
      {
        *(_QWORD *)a2 = v9;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v9 == v11 )
        break;
      v9 = *(_QWORD *)(v9 + 8);
    }
    v10 = v9;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v24 = a1 + 8;
  v13 = operator new(0x40uLL);
  *((_QWORD *)&v24 + 1) = v13;
  v13[2] = *(_QWORD *)a3;
  v13[4] = 0LL;
  v13[3] = 0LL;
  v13[5] = 0LL;
  v13[6] = 0LL;
  v13[7] = 0LL;
  v14 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v14 < 0 )
    v15 = (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
        + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1));
  else
    v15 = (float)(int)v14;
  v16 = *(_QWORD *)(a1 + 56);
  if ( v16 < 0 )
  {
    v22 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v16 >> 1);
    v17 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v17 = (float)(int)v16;
  }
  if ( (float)(v15 / v17) > *(float *)a1 )
  {
    v23 = std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Forced_rehash(
      a1,
      v23);
    v24 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD *, unsigned __int64))std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Find_last<unsigned __int64>)(
                       a1,
                       &v24,
                       v13 + 2,
                       v6);
    v10 = v24;
  }
  v18 = *(_QWORD **)(v10 + 8);
  ++*(_QWORD *)(a1 + 16);
  *v13 = v10;
  v13[1] = v18;
  *v18 = v13;
  *(_QWORD *)(v10 + 8) = v13;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = 2 * (*(_QWORD *)(a1 + 48) & v6);
  v21 = *(_QWORD *)(v19 + 8 * v20);
  if ( v21 == *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(v19 + 8 * v20) = v13;
  }
  else
  {
    if ( v21 == v10 )
    {
      *(_QWORD *)(v19 + 8 * v20) = v13;
      goto LABEL_19;
    }
    if ( *(_QWORD **)(v19 + 8 * v20 + 8) != v18 )
      goto LABEL_19;
  }
  *(_QWORD *)(v19 + 8 * v20 + 8) = v13;
LABEL_19:
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
