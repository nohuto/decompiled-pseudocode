/*
 * XREFs of ??$emplace@AEBQEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@@Z @ 0x1800428F8
 * Callers:
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180042860 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180004EC0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4InputType@@UtagPOINT@@V?$_Uhash_compare@W4InputType@@U?$hash@W4InputType@@@std@@U?$equal_to@W4InputType@@@3@@std@@V?$allocator@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4InputType@@UtagPOINT@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180039F54 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4InputType@@UtagPOINT@@V-$_Uhash_compare@W4Inp.c)
 *     ??$_Find_last@PEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@PEAUISystemContextObserver@@PEAX@std@@@1@AEBQEAUISystemContextObserver@@_K@Z @ 0x180042A40 (--$_Find_last@PEAUISystemContextObserver@@@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18008CD44 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::emplace<ISystemContextObserver * const &>(
        float *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  unsigned __int64 i; // rcx
  size_t size_of; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v15; // rax
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Find_last<ISystemContextObserver *>(
    a1,
    &v16,
    a3,
    v6);
  if ( *((_QWORD *)&v16 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v16 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v17 = a1 + 2;
    v18 &= *((_QWORD *)&v16 + 1);
    size_of = std::_Get_size_of_n<24>((unsigned int)(DWORD2(v16) + 1));
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v18 = (unsigned __int64)v9;
    v9[2] = *a3;
    v10 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *((_QWORD *)a1 + 7);
    if ( v12 < 0 )
    {
      v15 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v12 >> 1);
      v13 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *a1 )
    {
      std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Rehash_for_1(a1);
      v16 = *(_OWORD *)std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Find_last<ISystemContextObserver *>(
                         a1,
                         &v17,
                         v9 + 2,
                         v6);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum InputType,tagPOINT,std::_Uhash_compare<enum InputType,std::hash<enum InputType>,std::equal_to<enum InputType>>,std::allocator<std::pair<enum InputType const,tagPOINT>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      v16,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
