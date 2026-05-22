/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180001990
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x180002BB0 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180080D5C (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allo.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180089670 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$al.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0x100000001B3LL
     * (a3[7] ^ (0x100000001B3LL
               * (a3[6] ^ (0x100000001B3LL
                         * (a3[5] ^ (0x100000001B3LL
                                   * (a3[4] ^ (0x100000001B3LL
                                             * (a3[3] ^ (0x100000001B3LL
                                                       * (a3[2] ^ (0x100000001B3LL
                                                                 * (a3[1] ^ (0x100000001B3LL
                                                                           * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))));
  v7 = 2 * (*(_QWORD *)(a1 + 48) & v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 48) & v6) + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 != v10 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)a3 == *(_QWORD *)(v9 + 16) )
      {
        *(_QWORD *)a2 = v9;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v9 == *(_QWORD *)(v8 + 8 * v7) )
        break;
      v9 = *(_QWORD *)(v9 + 8);
    }
    v10 = v9;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v23 = a1 + 8;
  v12 = operator new(0x30uLL);
  *((_QWORD *)&v23 + 1) = v12;
  v12[2] = *(_QWORD *)a3;
  v12[3] = 0LL;
  v12[4] = 0LL;
  v12[5] = 0LL;
  v13 = *(_QWORD *)(a1 + 16);
  v14 = v13 + 1;
  if ( v13 + 1 < 0 )
    v15 = (float)(int)(v14 & 1 | (v14 >> 1)) + (float)(int)(v14 & 1 | (v14 >> 1));
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
    std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Rehash_for_1(a1);
    v23 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD *, unsigned __int64))std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>)(
                       a1,
                       &v23,
                       v12 + 2,
                       v6);
    v13 = *(_QWORD *)(a1 + 16);
    v10 = v23;
  }
  v18 = *(_QWORD **)(v10 + 8);
  *(_QWORD *)(a1 + 16) = v13 + 1;
  *v12 = v10;
  v12[1] = v18;
  *v18 = v12;
  *(_QWORD *)(v10 + 8) = v12;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = 2 * (*(_QWORD *)(a1 + 48) & v6);
  v21 = *(_QWORD *)(v19 + 8 * v20);
  if ( v21 == *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(v19 + 8 * v20) = v12;
  }
  else
  {
    if ( v21 == v10 )
    {
      *(_QWORD *)(v19 + 8 * v20) = v12;
      goto LABEL_15;
    }
    if ( *(_QWORD **)(v19 + 8 * v20 + 8) != v18 )
      goto LABEL_15;
  }
  *(_QWORD *)(v19 + 8 * v20 + 8) = v12;
LABEL_15:
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
