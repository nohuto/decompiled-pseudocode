/*
 * XREFs of ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x180039A30
 * Callers:
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18003990C (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x1800829B0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  __int64 v7; // rbx
  unsigned __int64 i; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r12
  __int64 v12; // rbp
  _DWORD *v13; // r14
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v24; // rax
  __int64 *v25; // rax
  _BYTE v26[56]; // [rsp+30h] [rbp-38h] BYREF

  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v7);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(v9 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v11 = (_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 8);
  if ( v10 == v12 )
  {
LABEL_8:
    if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v13 = operator new(0x18uLL);
    v13[4] = *a3;
    v13[5] = *a4;
    v14 = *(_QWORD *)(a1 + 16);
    v15 = v14 + 1;
    if ( v14 + 1 < 0 )
      v16 = (float)(int)(v15 & 1 | (v15 >> 1)) + (float)(int)(v15 & 1 | (v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 < 0 )
    {
      v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (float)(int)v24 + (float)(int)v24;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Rehash_for_1(a1);
      v25 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         v26,
                         v13 + 4,
                         v7,
                         v11,
                         v13);
      v14 = *(_QWORD *)(a1 + 16);
      v12 = *v25;
    }
    v19 = *(_QWORD **)(v12 + 8);
    *(_QWORD *)(a1 + 16) = v14 + 1;
    *(_QWORD *)v13 = v12;
    *((_QWORD *)v13 + 1) = v19;
    *v19 = v13;
    *(_QWORD *)(v12 + 8) = v13;
    v20 = *(_QWORD *)(a1 + 24);
    v21 = 2 * (v7 & *(_QWORD *)(a1 + 48));
    v22 = *(_QWORD *)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
    if ( v22 == *v11 )
    {
      *(_QWORD *)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v13;
    }
    else
    {
      if ( v22 == v12 )
      {
        *(_QWORD *)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v13;
LABEL_18:
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_QWORD **)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v19 )
        goto LABEL_18;
    }
    *(_QWORD *)(v20 + 8 * v21 + 8) = v13;
    goto LABEL_18;
  }
  while ( *a3 != *(_DWORD *)(v10 + 16) )
  {
    if ( v10 == *(_QWORD *)(v9 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
    {
      v12 = v10;
      goto LABEL_8;
    }
    v10 = *(_QWORD *)(v10 + 8);
  }
  *(_DWORD *)(v10 + 20) = *a4;
  *(_QWORD *)a2 = v10;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
