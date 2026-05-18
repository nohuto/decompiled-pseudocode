/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBVtype_index@2@@Z @ 0x180038644
 * Callers:
 *     ??$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DBBC (--$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ??$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180061D78 (--$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 * Callees:
 *     ??$_Find_lower_bound@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBVtype_index@1@@Z @ 0x18002F070 (--$_Find_lower_bound@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@US.c)
 *     ??$_Lower_bound_duplicate@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@1@AEBVtype_index@1@@Z @ 0x18002F60C (--$_Lower_bound_duplicate@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_p.c)
 */

_BOOL8 __fastcall std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::count(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Find_lower_bound<std::type_index>(
         a1,
         (__int64)v6,
         a2);
  return std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Lower_bound_duplicate<std::type_index>(
           v4,
           *(_QWORD *)(v3 + 16),
           a2);
}
