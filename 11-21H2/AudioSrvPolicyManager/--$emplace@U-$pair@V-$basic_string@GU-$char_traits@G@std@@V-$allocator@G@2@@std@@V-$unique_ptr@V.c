/*
 * XREFs of ??$emplace@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@1@@Z @ 0x180038264
 * Callers:
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x180038940 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180013158 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1800381E0 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180038674 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_180038674.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::emplace<std::pair<std::wstring,std::unique_ptr<CEndpointVolumeState>>>(
        float *a1,
        __int64 a2,
        char *a3)
{
  __int64 v6; // r8
  char *v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  HANDLE ProcessHeap; // rax
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // rdx
  char **v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v27; // [rsp+30h] [rbp-38h] BYREF
  char *v28; // [rsp+38h] [rbp-30h]

  v6 = *((_QWORD *)a3 + 2);
  v7 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v7 = *(char **)a3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 0LL;
  v10 = 2 * v6;
  if ( v10 )
  {
    do
      v8 = 0x100000001B3LL * ((unsigned __int8)v7[v9++] ^ (unsigned __int64)v8);
    while ( v9 < v10 );
  }
  std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Find_last<std::wstring>(
    a1,
    &v26,
    a3,
    v8);
  if ( !*((_QWORD *)&v26 + 1) )
  {
    if ( *((_QWORD *)a1 + 2) == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v27 = a1 + 2;
    ProcessHeap = GetProcessHeap();
    v12 = (char *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
    v28 = v12;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_OWORD *)v12 + 1) = *(_OWORD *)a3;
    *((_OWORD *)v12 + 2) = *((_OWORD *)a3 + 1);
    *((_QWORD *)a3 + 2) = 0LL;
    *((_QWORD *)a3 + 3) = 7LL;
    *(_WORD *)a3 = 0;
    v13 = *((_QWORD *)a3 + 4);
    *((_QWORD *)a3 + 4) = 0LL;
    *((_QWORD *)v12 + 6) = v13;
    v14 = *((_QWORD *)a1 + 2);
    v15 = v14 + 1;
    if ( v14 + 1 < 0 )
      v16 = (float)(int)(v15 & 1 | (v15 >> 1)) + (float)(int)(v15 & 1 | (v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *((_QWORD *)a1 + 7);
    if ( v17 < 0 )
    {
      v19 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (float)(int)v19 + (float)(int)v19;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *a1 )
    {
      std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Rehash_for_1((__int64)a1);
      v26 = *(_OWORD *)std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Find_last<std::wstring>(
                         a1,
                         &v26,
                         v12 + 16,
                         v8);
      v14 = *((_QWORD *)a1 + 2);
    }
    v28 = 0LL;
    v20 = v26;
    v21 = *(char ***)(v26 + 8);
    *((_QWORD *)a1 + 2) = v14 + 1;
    *(_QWORD *)v12 = v20;
    *((_QWORD *)v12 + 1) = v21;
    *v21 = v12;
    *(_QWORD *)(v20 + 8) = v12;
    v22 = *((_QWORD *)a1 + 3);
    v23 = 2 * (v8 & *((_QWORD *)a1 + 6));
    v24 = *(_QWORD *)(v22 + 16 * (v8 & *((_QWORD *)a1 + 6)));
    if ( v24 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v22 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v12;
LABEL_22:
      *(_QWORD *)(v22 + 8 * v23 + 8) = v12;
      goto LABEL_23;
    }
    if ( v24 == v20 )
    {
      *(_QWORD *)(v22 + 16 * (v8 & *((_QWORD *)a1 + 6))) = v12;
    }
    else if ( *(char ***)(v22 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8) == v21 )
    {
      goto LABEL_22;
    }
LABEL_23:
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>(&v27);
    return a2;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v26 + 1);
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
