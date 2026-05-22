/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800093E0
 * Callers:
 *     NotifyInputSinkParented @ 0x180009620 (NotifyInputSinkParented.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18000979C (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180049D68 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
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
  v7 = 2 * (v6 & *(_QWORD *)(a1 + 48));
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 8 * v7 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 == v10 )
  {
LABEL_6:
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    *(_QWORD *)&v23 = a1 + 8;
    v12 = operator new(0x20uLL);
    *((_QWORD *)&v23 + 1) = v12;
    v12[2] = *(_QWORD *)a3;
    v12[3] = 0LL;
    v13 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v13 < 0 )
      v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
          + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
    else
      v14 = (float)(int)v13;
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v15 >> 1);
      v16 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v16 = (float)(int)v15;
    }
    if ( (float)(v14 / v16) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
      v23 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _QWORD *, unsigned __int64))std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>)(
                         a1,
                         &v23,
                         v12 + 2,
                         v6);
      v10 = v23;
    }
    v17 = *(_QWORD **)(v10 + 8);
    ++*(_QWORD *)(a1 + 16);
    *v12 = v10;
    v12[1] = v17;
    *v17 = v12;
    *(_QWORD *)(v10 + 8) = v12;
    v18 = *(_QWORD *)(a1 + 24);
    v19 = 2 * (v6 & *(_QWORD *)(a1 + 48));
    v20 = *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    if ( v20 == *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
    }
    else
    {
      if ( v20 == v10 )
      {
        *(_QWORD *)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
        goto LABEL_16;
      }
      if ( *(_QWORD **)(v18 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v17 )
        goto LABEL_16;
    }
    *(_QWORD *)(v18 + 8 * v19 + 8) = v12;
LABEL_16:
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  v11 = *(_QWORD *)(v8 + 8 * v7);
  while ( *(_QWORD *)a3 != *(_QWORD *)(v9 + 16) )
  {
    if ( v9 == v11 )
    {
      v10 = v9;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
