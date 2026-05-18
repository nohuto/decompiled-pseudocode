/*
 * XREFs of ?FindNode@Scene@Engine@Spectre@@AEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@_K@Z @ 0x180040CA8
 * Callers:
 *     ?FindNode@Scene@Engine@Spectre@@QEAA?AV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V?$shared_ptr@VSceneLayer@Engine@Spectre@@@5@_K@Z @ 0x180040DF4 (-FindNode@Scene@Engine@Spectre@@QEAA-AV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@V-$shared_p.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$weak_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x18003F8F0 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$weak_ptr@VSceneNode@Engine@Spectre@@@std@@V-$_Uhash_compa.c)
 */

_QWORD *__fastcall Spectre::Engine::Scene::FindNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rax
  char v6; // bl
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  LODWORD(v11) = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::weak_ptr<Spectre::Engine::SceneNode>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::weak_ptr<Spectre::Engine::SceneNode>>>,0>>::find<void>(
    (_QWORD *)(a1 + 120),
    &v11,
    (const unsigned __int8 *)&v12);
  if ( v11 == *(_QWORD *)(a1 + 128) )
  {
    v5 = v8;
    *(_OWORD *)v8 = 0LL;
    v6 = 1;
  }
  else
  {
    v5 = (_QWORD *)std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11 + 24, &v9);
    v6 = 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *v5;
  a2[1] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  if ( (v6 & 1) != 0 && v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  return a2;
}
