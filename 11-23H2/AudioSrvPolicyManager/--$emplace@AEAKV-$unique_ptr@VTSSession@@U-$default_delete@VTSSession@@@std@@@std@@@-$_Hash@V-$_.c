/*
 * XREFs of ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x1800333F8
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ABD0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000AC80 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18000B5D0 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180033D8C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$unique_ptr@VTSSession@@U-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180039D6C (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180039EC0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18003A058 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VT.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 appended; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v20[2]; // [rsp+30h] [rbp-28h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
    v8,
    v20,
    a3,
    appended);
  if ( *((_QWORD *)&v20[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v20[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1800616F0 == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v19[0] = &qword_1800616E8;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v19[1] = v9;
    *((_DWORD *)v9 + 4) = *(_DWORD *)a3;
    v10 = *a4;
    *a4 = 0LL;
    v9[3] = v10;
    v11 = qword_1800616F0 + 1;
    if ( qword_1800616F0 + 1 < 0 )
      v12 = (float)(int)(v11 & 1 | (v11 >> 1)) + (float)(int)(v11 & 1 | (v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = qword_180061718;
    if ( qword_180061718 < 0 )
    {
      v13 = qword_180061718 & 1;
      v14 = (float)(int)(v13 | ((unsigned __int64)qword_180061718 >> 1))
          + (float)(int)(v13 | ((unsigned __int64)qword_180061718 >> 1));
    }
    else
    {
      v14 = (float)(int)qword_180061718;
    }
    if ( (float)(v12 / v14) > *(float *)&dword_1800616E0 )
    {
      v15 = std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Desired_grow_bucket_count(
              v13,
              v11);
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Forced_rehash(
        v16,
        v15);
      v20[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Find_last<unsigned long>(
                            v17,
                            v20,
                            (_DWORD *)v9 + 4,
                            appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::_Insert_new_node_before(
                      v13,
                      appended,
                      *(_QWORD *)&v20[0],
                      v9,
                      v19[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned long const,std::unique_ptr<TSSession>>,void *>>>(v19);
  }
  return a2;
}
