/*
 * XREFs of ??$emplace@AEB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18000AC50
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x180012230 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800E8B80 (-CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCurs.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180089670 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$al.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x18008CD44 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::emplace<unsigned __int64 const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r13
  _QWORD *v11; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r8
  __int64 v23; // rax
  _QWORD *v24; // rax
  char v25[16]; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 8 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v9 != v11 )
  {
    while ( *a3 != v9[2] )
    {
      if ( v9 == *(_QWORD **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
      {
        v11 = v9;
        v9 = 0LL;
        goto LABEL_23;
      }
      v9 = (_QWORD *)v9[1];
    }
    v11 = (_QWORD *)*v9;
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
    std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Rehash_for_1(a1);
    v24 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>(
                      a1,
                      v25,
                      v12 + 2,
                      v7,
                      v10,
                      v12);
    v13 = *(_QWORD *)(a1 + 16);
    v11 = (_QWORD *)*v24;
  }
  v18 = (_QWORD *)v11[1];
  *(_QWORD *)(a1 + 16) = v13 + 1;
  *v12 = v11;
  v12[1] = v18;
  *v18 = v12;
  v11[1] = v12;
  v19 = *(_QWORD *)(a1 + 24);
  v20 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v21 = *(_QWORD **)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v21 == (_QWORD *)*v10 )
  {
    *(_QWORD *)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v12;
  }
  else
  {
    if ( v21 == v11 )
    {
      *(_QWORD *)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v12;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v19 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v18 )
      goto LABEL_14;
  }
  *(_QWORD *)(v19 + 8 * v20 + 8) = v12;
LABEL_14:
  *(_QWORD *)a2 = v12;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
