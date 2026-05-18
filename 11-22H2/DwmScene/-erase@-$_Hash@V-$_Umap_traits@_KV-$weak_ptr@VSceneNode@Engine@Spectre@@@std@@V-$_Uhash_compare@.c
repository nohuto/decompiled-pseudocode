/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180042C3C
 * Callers:
 *     ?DeregisterNode@Scene@Engine@Spectre@@AEAAXV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180040BD8 (-DeregisterNode@Scene@Engine@Spectre@@AEAAXV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x18003F414 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhas.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003F528 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@st.c)
 *     ??$_Hash_representation@_K@std@@YA_KAEB_K@Z @ 0x18003F584 (--$_Hash_representation@_K@std@@YA_KAEB_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::erase(
        _QWORD *a1,
        const unsigned __int8 *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // r11
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::_Hash_representation<unsigned __int64>(a2);
  v5 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::_Find_last<unsigned __int64>(
                    a1,
                    v11,
                    v4,
                    v3)[1];
  if ( !v5 )
    return 0LL;
  v6 = a1[3];
  v7 = 2 * (v3 & a1[6]);
  if ( *(__int64 **)(v6 + 16 * (v3 & a1[6]) + 8) == v5 )
  {
    if ( *(__int64 **)(v6 + 16 * (v3 & a1[6])) == v5 )
    {
      v8 = a1[1];
      *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = v8;
    }
    else
    {
      v8 = v5[1];
    }
    *(_QWORD *)(v6 + 8 * v7 + 8) = v8;
  }
  else if ( *(__int64 **)(v6 + 16 * (v3 & a1[6])) == v5 )
  {
    *(_QWORD *)(v6 + 16 * (v3 & a1[6])) = *v5;
  }
  v9 = *v5;
  --a1[2];
  *(_QWORD *)v5[1] = v9;
  *(_QWORD *)(v9 + 8) = v5[1];
  std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>(
    v9,
    v5);
  return 1LL;
}
