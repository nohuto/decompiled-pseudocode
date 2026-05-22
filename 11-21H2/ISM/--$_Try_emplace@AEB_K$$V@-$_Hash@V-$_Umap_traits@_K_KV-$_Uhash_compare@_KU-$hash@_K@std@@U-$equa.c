/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18000C0C0
 * Callers:
 *     NotifyInputSinkParented @ 0x1800038A0 (NotifyInputSinkParented.c)
 *     ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800ECD40 (-OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z.c)
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800ECE70 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800ECF50 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x1800ED0B0 (-OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z.c)
 *     ?OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateData@@@Z @ 0x1800ED190 (-OnCursorSuppressionStateChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorSuppressionStateDa.c)
 *     ?OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800ED270 (-OnCursorVisibilityChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorVisibilityData@@@Z.c)
 *     ?SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z @ 0x1800ED630 (-SetCursorClientOwner@SystemCursorService2@@UEAAJUCursorId@@@Z.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x180003A14 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180080D5C (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Try_emplace<unsigned __int64 const &,>(
        float *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 8 );
  v8 = *((_QWORD *)a1 + 3);
  v9 = *(_QWORD **)(v8 + 16 * (v7 & *((_QWORD *)a1 + 6)) + 8);
  v10 = (_QWORD *)*((_QWORD *)a1 + 1);
  if ( v9 != v10 )
  {
    while ( *a3 != v9[2] )
    {
      if ( v9 == *(_QWORD **)(v8 + 16 * (v7 & *((_QWORD *)a1 + 6))) )
      {
        v10 = v9;
        v9 = 0LL;
        goto LABEL_23;
      }
      v9 = (_QWORD *)v9[1];
    }
    v10 = (_QWORD *)*v9;
LABEL_23:
    if ( v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *((_QWORD *)a1 + 2) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v23 = a1 + 2;
  v11 = operator new(0x20uLL);
  *((_QWORD *)&v23 + 1) = v11;
  v11[2] = *a3;
  v11[3] = 0LL;
  v12 = *((_QWORD *)a1 + 2);
  v13 = v12 + 1;
  if ( v12 + 1 < 0 )
    v14 = (float)(int)(v13 & 1 | (v13 >> 1)) + (float)(int)(v13 & 1 | (v13 >> 1));
  else
    v14 = (float)(int)v13;
  v15 = *((_QWORD *)a1 + 7);
  if ( v15 < 0 )
  {
    v22 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v15 >> 1);
    v16 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v16 = (float)(int)v15;
  }
  if ( (float)(v14 / v16) > *a1 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Rehash_for_1(a1);
    v23 = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Find_last<unsigned __int64>(
                       a1,
                       &v23,
                       v11 + 2,
                       v7);
    v12 = *((_QWORD *)a1 + 2);
    v10 = (_QWORD *)v23;
  }
  v17 = (_QWORD *)v10[1];
  *((_QWORD *)a1 + 2) = v12 + 1;
  *v11 = v10;
  v11[1] = v17;
  *v17 = v11;
  v10[1] = v11;
  v18 = *((_QWORD *)a1 + 3);
  v19 = 2 * (v7 & *((_QWORD *)a1 + 6));
  v20 = *(_QWORD **)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6)));
  if ( v20 == *((_QWORD **)a1 + 1) )
  {
    *(_QWORD *)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6))) = v11;
  }
  else
  {
    if ( v20 == v10 )
    {
      *(_QWORD *)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6))) = v11;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v18 + 16 * (v7 & *((_QWORD *)a1 + 6)) + 8) != v17 )
      goto LABEL_14;
  }
  *(_QWORD *)(v18 + 8 * v19 + 8) = v11;
LABEL_14:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
