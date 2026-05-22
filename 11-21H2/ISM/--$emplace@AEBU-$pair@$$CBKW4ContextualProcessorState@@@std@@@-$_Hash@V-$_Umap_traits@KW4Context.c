/*
 * XREFs of ??$emplace@AEBU?$pair@$$CBKW4ContextualProcessorState@@@std@@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBKW4ContextualProcessorState@@@1@@Z @ 0x180004D30
 * Callers:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800041E0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x1800045B0 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18008CC90 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::emplace<std::pair<unsigned long const,enum ContextualProcessorState> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned __int64 i; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r12
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 *v24; // rax
  _BYTE v25[56]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v9 == v11 )
  {
LABEL_4:
    if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v12 = operator new(0x18uLL);
    v12[2] = *a3;
    v13 = *(_QWORD *)(a1 + 16);
    v14 = v13 + 1;
    if ( v13 + 1 < 0 )
      v15 = (float)(int)(v14 & 1 | (v14 >> 1)) + (float)(int)(v14 & 1 | (v14 >> 1));
    else
      v15 = (float)(int)v14;
    v16 = *(_QWORD *)(a1 + 56);
    if ( v16 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v16 >> 1);
      v17 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v17 = (float)(int)v16;
    }
    if ( (float)(v15 / v17) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(a1);
      v24 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         v25,
                         v12 + 2,
                         v6,
                         v10,
                         v12);
      v13 = *(_QWORD *)(a1 + 16);
      v11 = *v24;
    }
    v18 = *(_QWORD **)(v11 + 8);
    *(_QWORD *)(a1 + 16) = v13 + 1;
    *v12 = v11;
    v12[1] = v18;
    *v18 = v12;
    *(_QWORD *)(v11 + 8) = v12;
    v19 = *(_QWORD *)(a1 + 24);
    v20 = 2 * (v6 & *(_QWORD *)(a1 + 48));
    v21 = *(_QWORD *)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    if ( v21 == *v10 )
    {
      *(_QWORD *)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
    }
    else
    {
      if ( v21 == v11 )
      {
        *(_QWORD *)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48))) = v12;
        goto LABEL_14;
      }
      if ( *(_QWORD **)(v19 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8) != v18 )
        goto LABEL_14;
    }
    *(_QWORD *)(v19 + 8 * v20 + 8) = v12;
LABEL_14:
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  while ( *(_DWORD *)a3 != *(_DWORD *)(v9 + 16) )
  {
    if ( v9 == *(_QWORD *)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
    {
      v11 = v9;
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(v9 + 8);
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
