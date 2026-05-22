/*
 * XREFs of ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x18004ACA0
 * Callers:
 *     ?Initialize@KeyboardModifierState@@AEAAJXZ @ 0x18004AB80 (-Initialize@KeyboardModifierState@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800ABEB4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800ABF58 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800E5E20 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::unordered_map<unsigned long,unsigned long>::_Insert_or_assign<unsigned long,int>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rbp
  _DWORD *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+20h] [rbp-48h]
  _BYTE v27[16]; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 4 );
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(__int64 **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
  v12 = a1 + 8;
  v13 = *(__int64 **)(a1 + 8);
  if ( v11 != v13 )
  {
    while ( *a3 != *((_DWORD *)v11 + 4) )
    {
      if ( v11 == *(__int64 **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
      {
        v13 = v11;
        v11 = 0LL;
        goto LABEL_8;
      }
      v11 = (__int64 *)v11[1];
    }
    v13 = (__int64 *)*v11;
LABEL_8:
    if ( v11 )
    {
      *((_DWORD *)v11 + 5) = *a4;
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v12 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v26 = v12;
  v14 = operator new(0x18uLL);
  v14[4] = *a3;
  v14[5] = *a4;
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
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
    v25 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v25);
    v13 = *(__int64 **)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                         a1,
                         v27,
                         v14 + 4,
                         v9,
                         v26,
                         v14);
  }
  v19 = (_QWORD *)v13[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v14 = v13;
  *((_QWORD *)v14 + 1) = v19;
  *v19 = v14;
  v13[1] = (__int64)v14;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 2 * (v9 & *(_QWORD *)(a1 + 48));
  v22 = *(__int64 **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)));
  if ( v22 == *(__int64 **)(a1 + 8) )
  {
    *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
LABEL_23:
    *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
    goto LABEL_20;
  }
  if ( v22 != v13 )
  {
    if ( *(_QWORD **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8) != v19 )
      goto LABEL_20;
    goto LABEL_23;
  }
  *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
LABEL_20:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
