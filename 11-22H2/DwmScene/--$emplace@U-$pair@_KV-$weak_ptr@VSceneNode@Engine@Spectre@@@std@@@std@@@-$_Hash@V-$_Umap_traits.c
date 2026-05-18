/*
 * XREFs of ??$emplace@U?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@1@@Z @ 0x18003F6D0
 * Callers:
 *     ?RegisterNode@Scene@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180041920 (-RegisterNode@Scene@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180028FD4 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18003F414 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhas.c)
 *     ??$_Hash_representation@_K@std@@YA_KAEB_K@Z @ 0x18003F584 (--$_Hash_representation@_K@std@@YA_KAEB_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18003FDFC (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$weak_ptr@VSceneNode@Engi.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180042810 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@st.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180042930 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x180042AB0 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::emplace<std::pair<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>>>(
        float *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbp
  unsigned __int64 size_of; // rax
  _QWORD *v8; // r15
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF

  v6 = std::_Hash_representation<unsigned __int64>((const unsigned __int8 *)a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::_Find_last<unsigned __int64>(
    a1,
    v17,
    (_QWORD *)a3,
    v6);
  if ( *((_QWORD *)&v17[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v16[0] = a1 + 2;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v16[1] = v8;
    v8[2] = *(_QWORD *)a3;
    v8[3] = 0LL;
    v8[4] = 0LL;
    v8[3] = *(_QWORD *)(a3 + 8);
    v8[4] = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    v9 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *((_QWORD *)a1 + 7);
    if ( v11 < 0 )
    {
      v13 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v11 >> 1);
      v12 = (float)(int)v13 + (float)(int)v13;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *a1 )
    {
      v14 = std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::_Forced_rehash(
        a1,
        v14);
      v17[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::_Find_last<unsigned __int64>(
                            a1,
                            v17,
                            v8 + 2,
                            v6);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<std::wstring,Spectre::Utils::ConfigurationValue,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Spectre::Utils::ConfigurationValue>>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      *(_QWORD *)&v17[0],
                      v8,
                      v16[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>(v16);
  }
  return a2;
}
