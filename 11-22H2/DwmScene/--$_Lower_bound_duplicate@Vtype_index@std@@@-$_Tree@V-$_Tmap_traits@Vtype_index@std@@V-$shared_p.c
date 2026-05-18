/*
 * XREFs of ??$_Lower_bound_duplicate@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@1@AEBVtype_index@1@@Z @ 0x18002F60C
 * Callers:
 *     ??$_Find@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@1@AEBVtype_index@1@@Z @ 0x18002EB18 (--$_Find@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@USceneCustomDa.c)
 *     ??$_Try_emplace@AEBVtype_index@std@@$$V@?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBVtype_index@1@@Z @ 0x18002F970 (--$_Try_emplace@AEBVtype_index@std@@$$V@-$map@Vtype_index@std@@V-$shared_ptr@USceneCustomData@En.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBVtype_index@2@@Z @ 0x180038644 (-count@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@USceneCustomData@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Lower_bound_duplicate<std::type_index>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  char v3; // bl

  v3 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
    return (int)__std_type_info_compare(*a3 + 8LL, *(_QWORD *)(a2 + 32) + 8LL) >= 0;
  return v3;
}
