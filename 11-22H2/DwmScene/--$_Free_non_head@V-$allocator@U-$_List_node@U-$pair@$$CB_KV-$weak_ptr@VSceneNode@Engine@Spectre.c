/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003F4F4
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18003FD74 (--1-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash_compare@_KU-.c)
 *     ??1?$list@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18003FF20 (--1-$list@U-$pair@$$CB_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@V-$allocator@U-$pair@.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800400D0 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18003F528 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@st.c)
 */

_QWORD *__fastcall std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
