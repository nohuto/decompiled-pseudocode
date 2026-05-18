/*
 * XREFs of ??$_Try_emplace@AEBVtype_index@std@@$$V@?$map@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@AEBVtype_index@1@@Z @ 0x18002F970
 * Callers:
 *     ??$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DBBC (--$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ??$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180061D78 (--$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180027FB4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ??$_Find_lower_bound@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBVtype_index@1@@Z @ 0x18002F070 (--$_Find_lower_bound@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_ptr@US.c)
 *     ??$_Lower_bound_duplicate@Vtype_index@std@@@?$_Tree@V?$_Tmap_traits@Vtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@U?$less@Vtype_index@std@@@2@V?$allocator@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBVtype_index@std@@V?$shared_ptr@USceneCustomData@Engine@Spectre@@@2@@std@@PEAX@1@AEBVtype_index@1@@Z @ 0x18002F60C (--$_Lower_bound_duplicate@Vtype_index@std@@@-$_Tree@V-$_Tmap_traits@Vtype_index@std@@V-$shared_p.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>>::_Try_emplace<std::type_index const &,>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Find_lower_bound<std::type_index>(
    a1,
    (__int64)&v12,
    a3);
  v6 = v13;
  if ( std::_Tree<std::_Tmap_traits<std::type_index,std::shared_ptr<Spectre::Engine::SceneCustomData>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::shared_ptr<Spectre::Engine::SceneCustomData>>>,0>>::_Lower_bound_duplicate<std::type_index>(
         v7,
         v13,
         a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v8 = *a1;
    v11 = (unsigned __int64)a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v9[4] = *a3;
    v9[6] = 0LL;
    v9[5] = 0LL;
    v9[6] = 0LL;
    *v9 = v8;
    v9[1] = v8;
    v9[2] = v8;
    *((_WORD *)v9 + 12) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>>,void *>>>((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v11,
                      (__int64)v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
