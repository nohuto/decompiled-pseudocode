/*
 * XREFs of ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorState@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorState@@@1@@Z @ 0x18004725C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180046B30 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@@Z @ 0x1800476A0 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@std@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800D6FF4 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180160FBC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorState> const &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 **v10; // r13
  __int64 *v11; // rbp
  __int64 **v12; // rbx
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 v22; // rax
  _BYTE v23[16]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 4 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(__int64 **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = (__int64 **)(a1 + 8);
  v11 = *(__int64 **)(a1 + 8);
  if ( v9 != v11 )
  {
    while ( *a3 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
      {
        v11 = v9;
        v9 = 0LL;
        goto LABEL_23;
      }
      v9 = (__int64 *)v9[1];
    }
    v11 = (__int64 *)*v9;
LABEL_23:
    if ( v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v12 = (__int64 **)operator new(0x18uLL);
  v12[2] = *(__int64 **)a3;
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
    std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
    v11 = *(__int64 **)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         v23,
                         v12 + 2,
                         v7,
                         v10,
                         v12);
  }
  v17 = (__int64 *)v11[1];
  ++*(_QWORD *)(a1 + 16);
  *v12 = v11;
  v12[1] = v17;
  *v17 = (__int64)v12;
  v11[1] = (__int64)v12;
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v20 = *(__int64 **)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v20 == *v10 )
  {
    *(_QWORD *)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v12;
  }
  else
  {
    if ( v20 == v11 )
    {
      *(_QWORD *)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v12;
      goto LABEL_14;
    }
    if ( *(__int64 **)(v18 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v17 )
      goto LABEL_14;
  }
  *(_QWORD *)(v18 + 8 * v19 + 8) = v12;
LABEL_14:
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
